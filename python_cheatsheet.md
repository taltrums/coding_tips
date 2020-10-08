# Python Tips 
### Data Structures
---
| Type          | mutable?      | ordered?    |
| ------------- |:-------------:| ----------: |
| List          | mutable       | ordered     |
| Tuple         | immutable     | ordered     |
| Set           | mutable       | not ordered |
| Dictionary    | mutable       | not ordered |
| String / Int  | immutable     |             |

### [List]
---
##### Sorting
```python
arr.sort(key=len, reverse=True)              # Sorts by length, from longest to shortest
```
##### Searching
```python
max(arr,key=len)                             # Find the longest element in list

for i in range(len(nums)-1,-1,-1)            # Following two are equivalent
for i in reversed(range(len(nums))
```

##### Operations
```python
arr.insert(index,element)
del arr[index]
arr.remove(element)

nums = nums[::-1]                 # nums changes its reference
nums.reverse()                    # nums reverses the array its referencing
```

##### Multiple Assignment
```python
results = [1] * 10
results = [1 for _ in range(10)]
results[0:10:2] = [0]*len(results[0:10:2])  # [0,1,0,1,0,1,0,1,0,1]
```

### {Dictionary}
---
##### Searching
```python
max(counter.keys(), key = counter.get)     # Find the highest value out of keys
```

#### Deleting mappings
```python
del dict[some_item]
```

### [Other Data Structures]
---
##### Set
```python
set.add(4)
set.union(set2)
```


### "String"
---
##### Replace / Find / Count
```python
s = s.replace("h","w",3)      # Creates a copy of string and replaces first 3 "h"s to "w"
s.find("ll",5)                # Returns the index of where "ll" is in string after index 5
s.lower().count("e")          # Creates a copy as lowercases and then counts number of "e"s
```


##### Operations
```python
s.capitalize()          # First letter is capitalized
s.isalnum()             # Checks alphanumeric character
s.isalpha()             # Checks alphabet character
s.isdecimal()           # Checks decimal character
s.isnumeric()           # Checks numeric
```

### Python Things
---
##### List Comprehension
```python
l = [i for i in range(5)]
```

##### Multiple Inheritance
```python
class ArcticBear(Arctic, Bear, Land):
```

##### Split / Join
```python
strs = "hello there"    
strs = strs.split(" ")              # ["hello","there"]
strs = " ".join(strs)               # "hello there"
```

##### Zip
```python
a = [1,2,3] 
b = [4,5,6]
for i in zip(a,b):
    print(i)     # [(1,4),(2,5),(3,6)]
```

##### Map
```python
nums = [1,2,3,4]
k = map(lambda x : x**2, nums)
print(list(k))     # [1,4,9,16]
```