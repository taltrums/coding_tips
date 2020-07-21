# Python Tips 
### Data Structures
---
| Type          | mutable?      | ordered?    |
| ------------- |:-------------:| ----------: |
| List          | mutable       | ordered     |
| String / Int  | immutable     |             |

### [List]
---
##### Sorting
```python
arr.sort(key=len, reverse=True)              # Sorts by length, from longest to shortest
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
