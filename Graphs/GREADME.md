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
| Size   | 1        | 2        | 3        | 4        | 5        | 6        | 7        | 8        | 9        | 10       | Average Time |
|--------|----------|----------|----------|----------|----------|----------|----------|----------|----------|----------|--------------|
| 15000  | 0.460763 | 0.44407  | 0.496484 | 0.52683  | 0.43695  | 0.432668 | 0.430203 | 0.458332 | 0.4551   | 0.437348 | 0.4578748    |
| 20000  | 0.759683 | 0.781085 | 0.841861 | 0.9588   | 0.784282 | 0.723502 | 0.772542 | 0.804413 | 0.816516 | 0.800382 | 0.8043066    |
| 25000  | 1.274201 | 1.264302 | 1.270889 | 1.308522 | 1.238804 | 1.19739  | 1.205294 | 1.243793 | 1.286278 | 1.301446 | 1.2590919    |
| 30000  | 1.807746 | 1.75454  | 1.796503 | 1.867195 | 1.722867 | 1.753902 | 1.755562 | 1.857825 | 1.796101 | 1.832553 | 1.7944794    |
| 35000  | 2.487112 | 2.398331 | 2.379142 | 2.30668  | 2.323879 | 2.336351 | 2.396902 | 2.410587 | 2.417681 | 2.56782  | 2.4024485    |
| 40000  | 3.079568 | 3.104637 | 3.155966 | 3.117074 | 3.054492 | 3.101729 | 3.122742 | 3.224712 | 3.250072 | 3.417162 | 3.1628154    |
| 45000  | 3.928373 | 3.945342 | 4.017841 | 3.907402 | 3.939192 | 4.135984 | 3.739048 | 3.968892 | 4.837573 | 4.402792 | 4.0822439    |
| 50000  | 4.881017 | 4.969585 | 5.246214 | 4.887346 | 5.022052 | 4.920632 | 4.896358 | 4.910863 | 5.713635 | 5.340015 | 5.0787717    |
| 55000  | 5.901018 | 6.081317 | 7.977345 | 6.03005  | 6.246271 | 6.005179 | 5.725051 | 6.049733 | 5.896153 | 6.093521 | 6.2005638    |
| 60000  | 6.671858 | 7.26466  | 6.943736 | 7.203539 | 7.570487 | 7.171013 | 6.848236 | 6.92685  | 7.083817 | 7.368176 | 7.1052372    |
| 65000  | 8.195884 | 8.732889 | 8.242692 | 8.465079 | 9.41184  | 8.2872   | 8.402329 | 8.314791 | 8.269    | 8.464365 | 8.4786069    |
| 70000  | 9.621568 | 9.820535 | 9.774854 | 9.781979 | 9.678077 | 9.378199 | 9.097713 | 9.79705  | 9.648012 | 9.755783 | 9.635377     |
| 75000  | 10.990839| 11.288935| 11.255826| 11.413014| 10.935624| 11.152365| 10.811481| 12.387824| 11.246024| 11.302699| 11.2784631   |
| 80000  | 12.252489| 12.500894| 12.869422| 14.407482| 12.510617| 12.8231  | 12.468449| 13.245922| 12.650073| 12.867132| 12.859558    |
| 85000  | 15.785861| 14.683501| 14.314455| 14.293782| 13.854616| 14.296123| 14.181323| 15.42038 | 14.305282| 14.938943| 14.6074266   |
| 90000  | 15.538252| 17.662599| 16.097117| 16.038624| 16.147369| 15.56681 | 15.757812| 15.933245| 15.466926| 16.467893| 16.0676647   |
| 95000  | 17.923266| 19.293269| 18.7257  | 18.123608| 16.992329| 16.814141| 16.965031| 17.345497| 17.859836| 18.298899| 17.8341576   |
| 100000 | 19.706668| 19.845784| 19.070703| 19.506343| 19.069447| 18.917378| 19.095725| 19.633393| 19.870241| 20.922639| 19.5638321   |

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
| Size   | 1        | 2        | 3        | 4        | 5        | 6        | 7        | 8        | 9        | 10       | Average Time |
|--------|----------|----------|----------|----------|----------|----------|----------|----------|----------|----------|--------------|
| 15000  | 0.066063 | 0.054295 | 0.053822 | 0.068017 | 0.061846 | 0.04816  | 0.058038 | 0.049549 | 0.085719 | 0.065788 | 0.0611297    |
| 20000  | 0.113873 | 0.115976 | 0.089775 | 0.102958 | 0.110979 | 0.106623 | 0.10569  | 0.078085 | 0.154716 | 0.098826 | 0.1077501   |
| 25000  | 0.191859 | 0.155216 | 0.133733 | 0.157945 | 0.167463 | 0.167492 | 0.155034 | 0.159466 | 0.23474  | 0.159357 | 0.1682305   |
| 30000  | 0.272295 | 0.225801 | 0.218182 | 0.229883 | 0.232793 | 0.239118 | 0.21962  | 0.224401 | 0.420706 | 0.244844 | 0.2527643   |
| 35000  | 0.37037  | 0.316203 | 0.320429 | 0.312477 | 0.330741 | 0.323881 | 0.313146 | 0.293321 | 0.451898 | 0.321821 | 0.3354287   |
| 40000  | 0.492772 | 0.388445 | 0.467363 | 0.438688 | 0.452714 | 0.445733 | 0.445521 | 0.401459 | 0.64164  | 0.46072  | 0.4635055   |
| 45000  | 0.615631 | 0.533048 | 0.567278 | 0.509031 | 0.518833 | 0.548727 | 0.487214 | 0.550968 | 0.819629 | 0.634162 | 0.5784521   |
| 50000  | 0.760729 | 0.619092 | 0.691517 | 0.633938 | 0.624893 | 0.662726 | 0.6318   | 0.643765 | 0.859509 | 0.693506 | 0.6821475   |
| 55000  | 0.936576 | 0.774432 | 0.697344 | 0.798495 | 0.739909 | 0.809247 | 0.767221 | 0.756264 | 0.960313 | 0.761444 | 0.8001245   |
| 60000  | 1.198494 | 0.904412 | 0.750587 | 0.844319 | 0.958683 | 1.013489 | 0.847973 | 0.937544 | 1.068085 | 1.024603 | 0.9548189   |
| 65000  | 1.395628 | 1.059565 | 0.937838 | 0.917337 | 0.984491 | 1.102153 | 0.958742 | 1.112163 | 0.998222 | 1.182986 | 1.0649125   |
| 70000  | 1.519775 | 1.258138 | 1.166216 | 1.087563 | 1.254874 | 1.365604 | 1.261657 | 1.127503 | 1.338111 | 1.295834 | 1.2675275   |
| 75000  | 1.510944 | 1.467004 | 1.495476 | 1.188429 | 1.53018  | 1.617543 | 1.258649 | 1.38694  | 1.472233 | 1.650568 | 1.4577966   |
| 80000  | 1.71926  | 1.69448  | 1.707353 | 1.570505 | 1.641286 | 1.701013 | 1.724486 | 1.448935 | 1.733292 | 1.612806 | 1.6553416   |
| 85000  | 2.052597 | 1.988137 | 2.043953 | 1.99361  | 1.846471 | 1.951021 | 1.886404 | 1.939076 | 2.123746 | 1.700489 | 1.9525504   |
| 90000  | 2.274434 | 2.125457 | 2.34125  | 1.714428 | 2.050762 | 2.095237 | 1.801192 | 2.026818 | 2.315935 | 2.174224 | 2.0919737   |
| 95000  | 2.374969 | 2.64176  | 2.643807 | 2.065796 | 2.422538 | 2.291082 | 2.050424 | 2.550149 | 2.566007 | 2.298143 | 2.3904675   |
| 100000 | 2.443464 | 2.818455 | 2.609339 | 2.5849   | 2.759484 | 2.652914 | 2.427593 | 3.231022 | 2.623219 | 2.219456 | 2.6369846   |


#### Graph:
The graph below illustrates the runtime of ```Bubble Sort``` against dataset sizes:
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





















