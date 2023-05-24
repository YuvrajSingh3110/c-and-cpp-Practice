package main

import "fmt"

func main() {
	var ptr *int
	fmt.Println("value of ptr is: ", ptr)   //it is nil

	a := 38
	ptr = &a
	fmt.Println("value of ptr is: ", ptr)  //address
	fmt.Println("value of ptr is: ", *ptr) //value will be 38

	*ptr = *ptr + 2
	fmt.Println("value of a is: ", a)  //it will be 40
}