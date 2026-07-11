# CIS-Week3-Assignment3

# Student Score Analysis

A C++ program that analyzes a pre-filled set of 30 student test scores using arrays and loops.

# What the Program Does

The program stores 30 test scores in a fixed-size integer array. It uses loops to calculate and display class statistics.

The program calculates:

* The average score
* The highest score
* The lowest score
* The number of students who passed with a score of 60 or higher
* The number of students who earned an A with a score of 90 or higher

It also displays all scores in their original order and reverse order.

# Concepts Used

* Fixed-size arrays
* Classic for loops
* Range-based for loops
* Conditional statements
* Integer and double variables
* std::fixed
* std::setprecision

# Required Includes

#include <iostream>
#include <iomanip>

# How to Run the Program

Compile the program:

g++ main.cpp -o score_analysis

Run the program:

./score_analysis

# Example Output

========================================
       STUDENT SCORE ANALYSIS
========================================
Number of students: 30
Average score:      76.50
Highest score:      100
Lowest score:       45
Students passed:    25  (>= 60)
Students with A:    7   (>= 90)
Scores in original order:
78 92 65 88 45 100 72 81 59 96 84 67 91 53 77 89 62 98 74 85 48 93 70 82 66 95 55 87 79 64
Scores in reverse order:
64 79 87 55 95 66 82 70 93 48 85 74 98 62 89 77 53 91 67 84 96 59 81 72 100 45 88 65 92 78

# Video Demonstration

