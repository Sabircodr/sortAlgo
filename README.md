# Sorting Algorithms in C

This repository contains implementations of various sorting algorithms in C. The project aims to analyze and compare the time complexities of these algorithms. The results will be noted and used to create a graph for visualization. This is a work in progress.

## Table of Contents

- [Introduction](#introduction)
- [Algorithms](#algorithms)
  - [Bubble Sort](#bubble-sort)
  - [Selection Sort](#selection-sort)
  - [Insertion Sort](#insertion-sort)
  - [Merge Sort](#merge-sort)
  - [Quick Sort](#quick-sort)
  - [Heap Sort](#heap-sort)
  - [Radix Sort](#radix-sort)
  - [Bucket Sort](#bucket-sort)
- [Actual Program](#actual-program)
- [Comparison Table](#comparison-table)
- [License](#license)

## Introduction

Sorting algorithms are methods used to order the elements of a list in a specific sequence, most commonly in ascending or descending order. This project implements various sorting algorithms in C and compares their time complexities. The results will be used to create a graphical representation of their performance.

## Algorithms

### Bubble Sort

Bubble Sort is a simple comparison-based algorithm in which each pair of adjacent elements is compared and the elements are swapped if they are not in order. This process is repeated until no swaps are needed, which means the list is sorted. It is known for its simplicity but is inefficient for large datasets.

### Selection Sort

Selection Sort segments the list into two parts: sorted and unsorted. It repeatedly removes the smallest element of the unsorted segment and appends it to the sorted segment. Like Bubble Sort, it is quite inefficient for large datasets.

### Insertion Sort

Insertion Sort builds the final sorted array one item at a time. It is less efficient on large lists than more advanced algorithms such as quicksort, heapsort, or merge sort. However, it has advantages for small datasets and nearly sorted lists.

### Merge Sort

Merge Sort is a divide and conquer algorithm that divides the input array into two halves, calls itself for the two halves, and then merges the two sorted halves. It is very efficient and has a consistent running time, but requires additional space proportional to the array size.

### Quick Sort

Quick Sort is another divide and conquer algorithm that picks an element as a pivot and partitions the given array around the picked pivot. There are many different versions of quicksort that pick the pivot in different ways. It has better space complexity than merge sort and is often faster in practice.

### Heap Sort

Heap Sort is based on a binary heap data structure. It creates a max heap from the array and then repeatedly extracts the maximum element from the heap, and replaces it with the last element of the heap followed by readjusting the heap. It is very efficient and does not require additional array storage.

### Radix Sort

Radix Sort implements a digit-by-digit sort starting from the least significant digit to the most significant digit. Radix sort uses counting sort as a subroutine to sort.

### Bucket Sort

Bucket Sort distributes the elements of an array into a number of buckets. Each bucket is then sorted individually, either using a different sorting algorithm or by recursively applying the bucket sort algorithm.

## Comparison Table

| Algorithm     | Time Complexity (Best) | Time Complexity (Average) | Time Complexity (Worst) | Space Complexity | Stable | In-place |
| ------------- | ---------------------- | ------------------------- | ----------------------- | ---------------- | ------ | -------- |
| Bubble Sort   | O(n)                   | O(n^2)                    | O(n^2)                  | O(1)             | Yes    | Yes      |
| Selection Sort| O(n^2)                 | O(n^2)                    | O(n^2)                  | O(1)             | No     | Yes      |
| Insertion Sort| O(n)                   | O(n^2)                    | O(n^2)                  | O(1)             | Yes    | Yes      |
| Merge Sort    | O(n log n)             | O(n log n)                | O(n log n)              | O(n)             | Yes    | No       |
| Quick Sort    | O(n log n)             | O(n log n)                | O(n^2)                  | O(log n)         | No     | Yes      |
| Heap Sort     | O(n log n)             | O(n log n)                | O(n log n)              | O(1)             | No     | Yes      |
| Radix Sort    | O(nk)                  | O(nk)                     | O(nk)                   | O(n+k)           | Yes    | No       |

**Key**:
> - **n**: Number of elements in the array
> - **k**: The range of the input
> - **Stable**: A sorting algorithm is stable if it preserves the relative order of equal elements
> - **In-place**: A sorting algorithm is in-place if it uses a constant amount of extra space


## Actual Program

### Running the program

You can run the program on Replit by clicking the following link: [Run on Replit](https://replit.com/@SabirMallick/JProject)  

### Files

- [basic_sort.h](basic_sort.h): Header file containing implementations of basic sorting algorithms such as insertion sort, selection sort, and bubble sort.
- [heap_sort.h](heap_sort.h): Header file containing the implementation of the heap sort algorithm.
- [merge_sort.h](merge_sort.h): Header file containing the implementation of the merge sort algorithm.
- [quick_sort.h](quick_sort.h): Header file containing the implementation of the quick sort algorithm.
- [radix_sort.h](radix_sort.h): Header file containing the implementation of the radix sort algorithm.
- [extras.h](extras.h): Header file containing any extra functions that may be needed.
- [MAIN.c](MAIN.c): Main program file that includes all the header files and runs the sorting algorithms.


## License

This project is licensed under the MIT License. See the [LICENSE](LICENSE.md) file for details.

---

Feel free to contact us if you have any questions or suggestions regarding the repository. Happy sorting!
