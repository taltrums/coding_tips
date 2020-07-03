# Csharp Cheatsheet
### Data Structures
---
| Type          | mutable? ordered?| Notes                      |
| ------------- |:-------------:   | :-----------------------:  |
| Array         | Y/Y              | - O(1) lookup time         |
|               |                  | - O(n) append time(if full)|
|               |                  | - Static size              |
|               |                  | - primitive/object data    |
| ArrayList     | Y/Y              | - O(1) lookup time         |
|               |                  | - O(1) append time(average)|
|               |                  | - Dynamic size             |
|               |                  | - object data              |
| String        | N/NA             |                            |

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

### {ArrayList}
---
##### Initializing ArrayList
```csharp
// Creates and initializes a new ArrayList.
ArrayList myAL = new ArrayList();
```

##### Basic Operations
```csharp
myAL.Add("!");                                      //Add new element
var c = myAL.Count;                                 //Count
var cap = myAL.Capacity;                            //Capacity
myAL.Sort();                                        //Sort the elements
var arr =(String[])myAL.ToArray(typeof(string));    //Convert to Array
```

### "String and StringBuilder" 
---
##### String Multiplication 
```csharp
// Stringbuilder creates a resizeable array to mutate strings

// Create "hellohellohellohello"
StringBuilder sb = new StringBuilder();
for(int i = 0; i < 4; i++){
    sb.Append("hello");
}
sb.ToString();
```

##### String Manipulation
```csharp
// Change "Herlo" to "Hello"

// 1st method using substrings
String s1 = "Herlo";
s1 = s1.Substring(0,2) + "l" + s1.Substring(3);

// 2nd method using stringbuilder
String s2 = "Herlo";
StringBuilder sb = new StringBuilder(s2);
sb.Replace('r','l');
s2 = sb.ToString();
```