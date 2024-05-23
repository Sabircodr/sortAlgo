# Result Analysis

This document provides a detailed analysis of the sorting algorithm performance results from our project. We will compare the empirical data collected from various sorting algorithms and analyze their efficiency. The analysis includes visual representations of the data through graphs and a comparison with theoretical expectations.


## Data Collection Methodology
I have generated datasets of various lengths ranging from 15,000 to 100,000 elements. Each dataset was sorted using Bubble Sort, Selection Sort, Insertion Sort, Merge Sort, Quick Sort, Heap Sort, and Radix Sort. To ensure the accuracy and reliability of the results, we conducted multiple trials for each algorithm and dataset size. Specifically, we performed 10 trials for each combination of algorithm and dataset size.  

Taking the average of multiple trials helps to mitigate the impact of outliers or random fluctuations in runtime measurements. By conducting multiple trials and averaging the results, I obtain a more stable and representative estimate of the algorithm's performance under different conditions.  

>By averaging the results of multiple trials, I can better assess the typical runtime behavior of each sorting algorithm across varying dataset sizes, providing valuable insights into their comparative performance.

# Graph Analysis

The simple sorting algorithms, including Bubble Sort, Selection Sort, and Insertion Sort are fundamental techniques used to arrange elements in a specific order. Despite their simplicity, these algorithms provide valuable insights into sorting methodologies and computational complexity. 

## Simple Sorting Algorithms

### Bubble Sort
__Bubble Sort__ exhibits a quadratic growth in runtime, consistent with its $0(n^2)$ complexity. As the dataset size increases, the runtime increases significantly. For instance, the average runtime for sorting 15,000 elements is X seconds, which grows to Y seconds for 100,000 elements. This confirms the inefficiency of ```Bubble Sort``` for large datasets.

#### Table
Below is the dataset representing the average runtime of ```Bubble Sort``` for different dataset sizes, calculated from 10 trials:
![image](https://github.com/Sabircodr/sortAlgo/assets/121866176/63c84af6-f609-4b47-bc21-ee5bdc00ef71)

#### Graph:
The graph below illustrates the runtime of ```Bubble Sort``` against dataset sizes:
![image](https://github.com/Sabircodr/sortAlgo/assets/121866176/a51b79e8-51da-4c2a-a721-66a1681c4aae)

#### Analysis
##### Runtime Growth:
- ```Bubble Sort``` exhibits quadratic runtime growth, as evident from the data.
- For smaller sizes (15,000 to 40,000 elements), runtimes are modest (0.4 to 3.1 seconds).
- However, for larger sizes (75,000 to 100,000 elements), runtimes exceed 10 seconds.

##### Considerations:
- While ```Bubble Sort```'s simplicity makes it suitable for small datasets or educational purposes, but it is inefficient for large datasets.
 -For real-world applications with large datasets, it is advisable to use more efficient sorting algorithms such as ```Merge Sort``` or ```Quick Sort```.


### Selection Sort
__Selection Sort__ also displays $0(n^2)$ complexity, with performance generally slower than ```Insertion Sort``` for larger datasets. The average runtime for sorting 15,000 elements is M seconds, rising to N seconds for 100,000 elements.

#### Table
Below is the dataset representing the average runtime of ```Selection Sort``` for different dataset sizes, calculated from 10 trials:
![image](https://github.com/Sabircodr/sortAlgo/assets/121866176/e02b69f0-4e82-44ca-b476-94335c0a2b89)


#### Graph:
The graph below illustrates the runtime of ```Selection Sort``` against dataset sizes:
![image](https://github.com/Sabircodr/sortAlgo/assets/121866176/ea566201-f262-4d96-91d6-04755313cf47)

#### Analysis
##### Runtime Growth:
- ```Selection Sort``` exhibits quadratic runtime growth, similar to ```Bubble Sort```, as observed from the increasing average runtime with dataset size.
- However, ```Selection Sort``` tends to perform marginally better than ```Bubble Sort``` due to its reduced number of swaps.
##### Considerations:
- Despite quadratic time complexity, ```Selection Sort```'s reduced number of swaps compared to ```Bubble Sort``` leads to slightly better performance, especially for datasets with limited disorder.
- While both ```Selection Sort``` and ```Bubble Sort``` are simple and easy to implement, ```Selection Sort``` may be preferred over ```Bubble Sort``` when minimizing the number of swaps is a priority.
- Both algorithms have a space complexity of $O(1)$, implying no additional memory overhead during sorting.


### Insertion Sort
__Insertion Sort__, similar to ```Bubble Sort```, shows a quadratic growth in runtime. However, it can be slightly more efficient for nearly sorted datasets. The average runtime for sorting 15,000 elements is A seconds, increasing to B seconds for 100,000 elements, illustrating its $0(n^2)$ complexity.

#### Table
Below is the dataset representing the average runtime of ```Insertion Sort``` for different dataset sizes, calculated from 10 trials:
![image](https://github.com/Sabircodr/sortAlgo/assets/121866176/22a34f0c-10fb-4fbe-bc65-5e46054111dd)

#### Graph:
The graph below illustrates the runtime of ```Insertion Sort``` against dataset sizes:
![image](https://github.com/Sabircodr/sortAlgo/assets/121866176/d9f11d06-03f5-47e9-badf-f6ad960d5d31)

#### Analysis
##### Runtime Growth:
- ```Insertion Sort``` also exhibits quadratic runtime growth, as evident from the data.
-  However, the rate of increase in runtime is relatively lower compared to ```Bubble Sort``` and ```Selection Sort```.
##### Considerations:
- ```Insertion Sort``` can perform relatively efficiently on nearly sorted datasets, followed by ```Bubble Sort``` and then ```Selection Sort```.
- For small datasets or nearly sorted data, ```Insertion Sort``` might be preferable due to its simplicity and potential efficiency. However, for larger datasets, it may not be suitable choices compared to more efficient algorithms like ```Merge Sort``` or ```Quick Sort```.


## Efficient Sorting Algorithms
Efficient sorting algorithms, such as Merge Sort, Quick Sort, Heap Sort, and Radix Sort, offer superior performance compared to simpler algorithms like Bubble Sort, Insertion Sort, and Selection Sort. These efficient algorithms are capable of sorting large datasets in a fraction of the time, making them essential tools in software development for tasks requiring rapid data processing. By leveraging optimized algorithms, developers can significantly improve the efficiency and scalability of their applications, ensuring smooth performance even with large datasets.





















