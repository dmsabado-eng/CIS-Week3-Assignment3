#include <iostream>
#include <iomanip>

int main()
{
    // Pre-filled student test scores
    const int SIZE = 30;

    int scores[SIZE] = {
        78, 92, 65, 88, 45, 100, 72, 81, 59, 96,
        84, 67, 91, 53, 77, 89, 62, 98, 74, 85,
        48, 93, 70, 82, 66, 95, 55, 87, 79, 64
    };

    // Variables used for calculations
    int sum = 0;
    int highest = scores[0];
    int lowest = scores[0];
    int passedCount = 0;
    int aCount = 0;

    // Calculate class statistics
    for (int i = 0; i < SIZE; i++)
    {
        sum += scores[i];

        if (scores[i] > highest)
        {
            highest = scores[i];
        }

        if (scores[i] < lowest)
        {
            lowest = scores[i];
        }

        if (scores[i] >= 60)
        {
            passedCount++;
        }

        if (scores[i] >= 90)
        {
            aCount++;
        }
    }

    double average = static_cast<double>(sum) / SIZE;

    // Display class summary
    std::cout << "========================================\n";
    std::cout << "       STUDENT SCORE ANALYSIS\n";
    std::cout << "========================================\n";

    std::cout << "Number of students: " << SIZE << '\n';
    std::cout << std::fixed << std::setprecision(2);
    std::cout << "Average score:      " << average << '\n';
    std::cout << "Highest score:      " << highest << '\n';
    std::cout << "Lowest score:       " << lowest << '\n';
    std::cout << "Students passed:    " << passedCount << "  (>= 60)\n";
    std::cout << "Students with A:    " << aCount << "   (>= 90)\n";

    // Print scores in original order
    std::cout << "\nScores in original order:\n";

    for (int score : scores)
    {
        std::cout << score << " ";
    }

    std::cout << '\n';

    // Print scores in reverse order
    std::cout << "\nScores in reverse order:\n";

    for (int i = SIZE - 1; i >= 0; i--)
    {
        std::cout << scores[i] << " ";
    }

    std::cout << '\n';

    return 0;
}
