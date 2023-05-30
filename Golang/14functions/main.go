package main

import "fmt"

func main() {
	greet()
	result := adder(4,6)
	fmt.Println(result)
	proRes, message := proadder(1,2,3,4,5,6,7,8,9)
	fmt.Println(proRes)
	fmt.Println(message)
}

func greet() {
	fmt.Println("Hello")
}

func adder(a int, b int) int {
	return (a+b)
}

func proadder(values ...int) (int,string) {  //values is a slice
	total := 0
	for _,val := range values{
		total += val
	}
	return total, "hi"
}