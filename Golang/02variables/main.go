package main

import "fmt"

const loginToken = "hheggffayuhj"

func main() {
	var userName string = "Yato"
	fmt.Println(userName)
	fmt.Printf("varibale is of type: %T \n", userName)

	var isLoggedIn bool = true
	fmt.Println(isLoggedIn)
	fmt.Printf("varibale is of type: %T \n", isLoggedIn)

	var smallVal uint8 = 255 //uint8 limit is 255 (2^8 - 1 = 255)
	fmt.Println(smallVal)
	fmt.Printf("varibale is of type: %T \n", smallVal)

	var smallFloat float32 = 256.897643156
	fmt.Println(smallFloat)
	fmt.Printf("variable is of type: %T \n", smallFloat)

	//deafult values and aliases
	var variable int
	fmt.Println(variable)  //by defalut int is 0

	var word string
	fmt.Println(word)  //by default string is empty

	//implicit type
	var line = "watashiwa kitaa"
	fmt.Println(line)

	//no var style
	number := 50    //not allowed outside any method like globa variable
	fmt.Println(number)

	fmt.Println(loginToken)
}
