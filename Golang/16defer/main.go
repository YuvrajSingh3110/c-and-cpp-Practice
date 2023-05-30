package main

import "fmt"

func main() {
	myDefer()
	defer fmt.Println("world3")
	defer fmt.Println("world2")
	defer fmt.Println("world1")
	fmt.Println("hello")
	//defer puts whatever line at the very bottom just before } of main
	//defer follows LIFO	
}

func myDefer()  {
	for i := 0; i < 5; i++ {
		defer fmt.Println(i)
	}
}