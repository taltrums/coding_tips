### Sorting Algorithms
---
##### Bubble Sort
```python
# Swaps adjacent elements if they are in wrong order 
# Time Complexity : O(n^2)   Space Complexity : O(1)
def bubbleSort(arr):
    for i in range(len(arr)-1):
        for j in range(len(arr)-1-i):
            if arr[j] > arr[j+1]:
                arr[j],arr[j+1] = arr[j+1],arr[j]
```