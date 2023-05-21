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
    switch game: {
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
}
```