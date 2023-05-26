package main

import "fmt"

func main() {
	loginCnt := 25
	var result string
	if loginCnt < 10 {
		result = "Regular User"
	} else if loginCnt > 10 {
		result = "Not a regular user"
	}
	fmt.Println(result)

	if num := 3; num<10 {
		fmt.Println("num is less than 10")
	}
}
