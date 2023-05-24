package main

import (
	"bufio"
	"fmt"
	"os"
)

func main() {
	welcome := "welcome to user input"
	fmt.Println(welcome)

	reader := bufio.NewReader(os.Stdin)
	fmt.Println("Give a rating out of 10")


	//comma ok or error ok
	input,_ := reader.ReadString('\n')  //takes input from user and reads until \n arrives
	fmt.Println("Your rating is: ", input)
	fmt.Printf("Type your rating is: %T", input)  //output would come out to be string
}
