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