# dart tips

### Data Structures

| Type          | mutable?      | ordered?    |
| ------------- |:-------------:| ----------: |
| List          | mutable       | ordered     |
| Set           | mutable       | not ordered |
| Map           | mutable       | not ordered |
| String / Int  | immutable     |             |

### [List]
```dart
var planets = ['Mercury', 'Venus', 'Earth', 'Mars'];
print(planets[0]); // Mercury
planets[0] = 'Saturn';
print(planets[0]); // Saturn
planets.removeAt(0);
```
Creating an empty, growable list
```dart
var list = List();
list.add('Mercury');
list.add('Venus'); 
```
Null safe list
```dart
var nullSafeList = List.empty(growable: true);
```
List with fixed length
```dart
var list = List.filled(3, 0);
```
Creating list with item of same types
```dart
var intList = List<Int>.filled(3, 1);
```
Iterating a list
```dart
var iterator = planets.iterator;
while(iterator.moveNext()){
    print(iterator.current);
}
```

### [Map]
```dart
var planetsMap = {1 : "Mercury", 2 : "Venus", 3 : "Earth", 4 :  "Mars"};
planetsMap[5] = "Jupitor";
```
Adding a collection
```dart
planetsMap.addAll({6 : "Saturn", 7 : "Uranus", 8 : "Neptune"});
```
Adding if key does not exists
```dart
planetsMap.putIfAbsent(1, () => "Mercury");
```
Removing
```dart
planetsMap.remove(1);

planetsMap.removeWhere((key, value) => value.startsWith('M'));
```
Map with specific data type
```dart
Map<int, String> planetMaps = {1 : 'Mercury', 2 : 'Venus', 3 : 'Earth'};
```
Iterating a map
```dart
for(int i in planetsMapat.keys){
    print(planetsMap[i]);
}
```

### [Set]
```dart
Set hashSet = HashSet(); // no specified order
Set linkedHashSet = LinkedHasSet(); // insertation based on the order the items
var splayTreeSet = SplayTreeSet(); // store data that is comparable, no null values permitted
```
Adding an item
```dart
var set = <int> {1, 2, 3, 4, 5};
set.add(6);
print(set);
```
Updating the set
```dart
var newSet = set.map((e) => e == 1 ? 11 : e).toSet();
```
Removing an item
```dart
set.remove(5)
```
Iterating on a set
```dart
set.forEach((element) {
    print(element);
});
```
### [String Interpolation]
```dart
'${5 + 7}' // 12
'${"hello".toUpperCase()}' // HELLO
'$5' // 5.toString()
```

### [Nullable variables]
```dart
int i = null; // invalid
int? i = null; // valid
int? i; // value is null initially
```
### [Null-aware operator]
```dart
i ??= 5; // value updates to 5
i ??= 7; // value is still 5
```

### [Functions]
### Null Saftey
```dart
printEmployee(String name, {required String department, required bool isActive}) {

}
// positional arg name 
// required arg department and isActive
printEmployee("", isActive: false, department: "IT");
```

### Lambda function
```dart
Functionn lambdaFunction = {int number, String name} {
};
var lambdaFunction2 = {double number, String name} {
};
```
### Arrow function
```dart
Function arrowFunction = (int a, int b) => a + b;

Function arrowFunction2 = (int a, int b) => a + b;

// same as above with different syntax
Function arrowFunction2 = (int a, int b){
return a + b;
};
```