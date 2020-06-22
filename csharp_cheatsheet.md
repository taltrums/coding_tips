# **Csharp Cheatsheet**
### Data Structures
---
| Type       | mutable? ordered?| Notes                       |
| ---------- | :--------------: | :-------------------------: |
| Array      | Y/Y              | - O(1) lookup time          |
|            |                  | - O(n) append time(if full) |
|            |                  | - Static size               |
|            |                  | - primitive/object data     |


### {Array}
---
##### Initializing Arrays and Operations
```csharp
// Declaration = Initialization
String[] greetStr = {"Hello", "Hi", "How are you"} ;
String[] greetStr = new String[5] ;
String[] greetStr = new String[]{"Hello", "Hi", "How are you"} ;

// when returning value, no need for declaration
return new int[]{5,6} ;
```
##### Basic Operations
```csharp
arr.Length                                        // returns the length of an array
Arrays.Copy(arr, copyarr, 5)                      // copies subarray starting from first element
Arrays.ConstrainedCopy(arr, 5, concopyarr, 0, 5)  // copies subrarry from  source, source index 5, dest, dest index 0, length 5
```


