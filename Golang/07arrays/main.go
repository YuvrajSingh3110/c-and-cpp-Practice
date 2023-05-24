package main

import "fmt"

func main() {
	var list [4]string

	list[0] = "car"
	list[2] = "bike"
	list[3] = "truck"

	fmt.Println("list is: ", list)
	fmt.Println("length of list is: ", len(list))

	var listTwo = [3]string {"potato", "onion", "tomato"}

	fmt.Println("list is: ", listTwo)
	fmt.Println("length of list is: ", len(listTwo))
}