# go basics

### Basic Syntax

```go
package main

import "fmt"

func main() {

    // variable declaration
    var name string = "tom"
    fmt.Println(name)

    // short variable declaration
    age := 28
    fmt.Println(age)


    // for loop
    for i := 1; i <= 5; i++ {
        fmt.Println(i)
    }

    // Switch statement
    game := "Fifa"
    switch game {
        case "Fifa":
            fmt.Println("It's Fifa time!")
        case "Mortal Kombat 1":
            fmt.Println("Mortal Kombattttt!!!")
        default:
            fmt.Println("Spider Man 2")
        }
    
    // Arrays
    numbers := [5]int{1, 2, 3, 4, 5}
    fmt.Println(numbers)

    // Slices
    numberSlice := numbers[1:3]
    fmt.Println("Number Slice", numberSlice)

    // Maps
    person := map[string]string{
        "name": "tom",
        "age": "28",
        }

    fmt.Println(person)

    // Structs

    type Person struct {
        Name string
        Age int
    }

    p := Person{Name: "tom", Age: 28}
    fmt.Println(p)

}
```

### Functions

```go
func gameFn(name string){
  fmt.Println(name + " "+ "is Awsome!")
}

// Multiple return values
func swap(a, b int) (int, int) {
    return b, a
}

// Multiple return value
func swap(a, b int) (int, int) {
    return b, a
}

// Variadic function
func sum(nums ...int) int {
  total := 0
  for _, num := range nums {
    total += num
  }
  return total
}

func main() {
    gameFn("Fifa")

    x, y := swap(5, 7)
    fmt.Println(x, y)
  
    total := sum(1, 2, 3, 4, 5)
    fmt.Println(total)

  // Anonymous function
  func() {
    fmt.Println("This is an anonymous function")
  }()
}
```


### Pointers

```go
var num int = 42
var ptr *int

ptr = &num

fmt.Println("Value of num:", num)
fmt.Println("Address of num:", &num)
fmt.Println("Value of ptr:", ptr)
fmt.Println("Dereferencing ptr:", *ptr)
```
### Methods

```go
type Circle struct {
  radius float64
}

func (c Circle) Area() float64 {
  return 3.14 * c.radius * c.radius
}

func main() {
      circle := Circle{radius: 10}

  // Method Call
  area := circle.Area()
  fmt.Println("Area:", area)
}
```

### Interfaces

```go
type Shape interface {
  Area() float64
}

type Circle struct {
  radius float64
}

type Rectangle struct {
  width float64
  height float64
}

// Implementing area for rectangle interface
func (r Rectangle) Area() float64 {
  return r.width * r.height
}

// Implemment area for circle interface
func (c Circle) Area() float64 {
  return 3.14 * c.radius * c.radius
}

func main() {
    
    rect := Rectangle{width: 10, height: 5}
    circ := Circle{radius: 5}

	// Using the interface
    shapes := []Shape{rect, circ}

	for _, shape := range shapes {
		area := shape.Area()
		fmt.Println("Area:", area)
	}
}
```

### Concurrency

```go
package main

import (
  "fmt"
  "sync"
  )

// Go Routine
func greet(wg *sync.WaitGroup) {
  defer wg.Done()
  fmt.Println("Hello World from go routine!")
}

func main() {
  var wg sync.WaitGroup
  wg.Add(1)

  // go routine
  go greet(&wg)

  // wait for go routine to finish
  wg.Wait()

  fmt.Println("Hello World from Main!")
}

```


