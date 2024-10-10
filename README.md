# Binary Search Assignment

## Overview


This repository contains solutions for four binary search-related problems. The assignment aims to strengthen your understanding of the binary search algorithm and its applications in solving complex problems efficiently. Each problem requires an implementation of the binary search approach in different scenarios.

## Questions

### 1. **Find Target in a Sorted Array**
   - **Description**: Given a sorted array of integers, implement binary search to find the target value. Return the index of the target if found, or `-1` if it does not exist in the array.
   - **Input**: A sorted array of integers `arr[]` and an integer `target`.
   - **Output**: Index of the target in the array or `-1` if not found.
   
### 2. **Find the First and Last Position of an Element in a Sorted Array**
   - **Description**: Given a sorted array of integers, find the first and last position of a given target element. If the target is not found, return `[-1, -1]`.
   - **Input**: A sorted array of integers `arr[]` and an integer `target`.
   - **Output**: An array containing the first and last position of the target element.
   
### 3. **Search in a Rotated Sorted Array**
   - **Description**: A rotated sorted array is an array that has been sorted but then rotated at an unknown pivot. Implement a function to search for a target in a rotated sorted array and return its index. If the target is not found, return `-1`.
   - **Input**: A rotated sorted array `arr[]` and an integer `target`.
   - **Output**: Index of the target in the array or `-1` if not found.
   
### 4. **Find the Peak Element**
   - **Description**: A peak element in an array is an element that is greater than its neighbors. Implement a function to find the index of a peak element in a given array. If the array contains multiple peaks, return the index of any of the peaks.
   - **Input**: An unsorted array `arr[]`.
   - **Output**: Index of any peak element.

## Prerequisites

To run the code, you should have the following tools installed:
- Python (for the Python implementation)
- Any code editor or IDE for writing and executing the solutions

## How to Run

1. Clone the repository to your local machine:
    ```bash
    git clone https://github.com/username/binary-search-assignment.git
    ```
   
2. Navigate to the project directory:
    ```bash
    cd binary-search-assignment
    ```

3. Run the individual question solutions in your preferred Python environment:
    ```bash
    python question1.py  # For Question 1
    python question2.py  # For Question 2
    python question3.py  # For Question 3
    python question4.py  # For Question 4
    ```

## Folder Structure

```
.
├── question1.py  # Solution for Question 1
├── question2.py  # Solution for Question 2
├── question3.py  # Solution for Question 3
├── question4.py  # Solution for Question 4
├── README.md     # This README file
```

## Solution Approach

1. **Question 1**: Standard binary search algorithm with `O(log n)` time complexity.
2. **Question 2**: Modified binary search to find the first and last occurrence of the target.
3. **Question 3**: Binary search with additional logic to handle rotation of the array.
4. **Question 4**: Binary search to locate the peak element by comparing neighbors.
