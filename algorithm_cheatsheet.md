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

##### Selection Sort
```python
# Finds minimum element and places them in the beginning 
# Time Complexity : O(n^2)   Space Complexity : O(1)
def selectionSort(arr):
    for i in range(len(arr)-1):
        minIndex = i
        for j in range(i+1,len(arr)):
            if arr[j] < arr[minIndex]:
                minIndex = j
        arr[i],arr[minIndex] = arr[minIndex],arr[i]      
```

### Search Algorithms
---
##### Binary Search 
```python
# Search with two pointers to converge faster than one pointer
def binary(arr):
    left, right = 0, len(arr)-1

    while l <= r:
        mid = (l+r)//2
        if arr[mid] < target:
            left = mid + 1
        elif arr[mid] > target:
            right = mid - 1
        else:
            return True
    return False
```              
