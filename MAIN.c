#include<stdio.h>
#include<stdlib.h>
#include <time.h>

#include "sort/extras.h"
#include "sort/basic_sort.h"
#include "sort/merge_sort.h"
#include "sort/quick_sort.h"
#include "sort/heap_sort.h"
#include "sort/radix_sort.h"

int main() {
    printf("Size\t\tBubble\t\tSelect\t\tInsert\t\tMerge\t\tQuick\t\tHeap\t\tRadix\t\tBoo\n");
        for (int i = 15000; i <= 100000; i+=5000) {
        int size = i;
        int *copy;
        int *arr = (int *)malloc(size*sizeof(int));
        
        // Initialize array with random values
        for (int j = 0; j < size; j++) {
            arr[j] = rand() % 1000;
        }
        
        clock_t start, end;
        double cpu_time_used;
        //Data Size
        printf("%d\t\t",size);

        // Bubble Sort
        copy=copyArray(arr,size);
        start = clock();
        bubbleSort(copy, size);
        end = clock();
        cpu_time_used = ((double)(end - start)) / CLOCKS_PER_SEC;
        printf("%f\t", cpu_time_used);      

        // Selection Sort
        copy=copyArray(arr,size);
        start = clock();
        selectionSort(copy, size);
        end = clock();
        cpu_time_used = ((double)(end - start)) / CLOCKS_PER_SEC;
        printf("%f\t", cpu_time_used);

        // Insertion Sort
        copy=copyArray(arr,size);
        start = clock();
        insertionSort(copy, size);
        end = clock();
        cpu_time_used = ((double)(end - start)) / CLOCKS_PER_SEC;
        printf("%f\t", cpu_time_used);

        // Merge Sort
        copy=copyArray(arr,size);
        start = clock();
        mergeSort(copy, 0, size-1);
        end = clock();
        cpu_time_used = ((double)(end - start)) / CLOCKS_PER_SEC;
        printf("%f\t", cpu_time_used);

        // Quick Sort
        copy=copyArray(arr,size);
        start = clock();
        quickSort(copy, 0, size-1);
        end = clock();
        cpu_time_used = ((double)(end - start)) / CLOCKS_PER_SEC;
        printf("%f\t", cpu_time_used);

        // Heap Sort
        copy=copyArray(arr,size);
        start = clock();
        heapSort(copy, size);
        end = clock();
        cpu_time_used = ((double)(end - start)) / CLOCKS_PER_SEC;
        printf("%f\t", cpu_time_used);

        // Radix Sort
        copy=copyArray(arr,size);
        start = clock();
        radixSort(copy, size);
        end = clock();
        cpu_time_used = ((double)(end - start)) / CLOCKS_PER_SEC;
        printf("%f\t", cpu_time_used);
        
        printf("\n");
        free(arr);
    }
}