package main

import (
	"fmt"
	"math/rand"
	"time"
)

func main() {
	rand.Seed(time.Now().UnixNano())
	diceNumber := rand.Intn(6) + 1
	fmt.Println("value of dice is: ",diceNumber)

	switch diceNumber{
	case 1:
		fmt.Println("value is 1")
	case 2:
		fmt.Println("value is 2")
	case 3:
		fmt.Println("value is 3")   //due to falltrhough both 3 and 4 will be printed
		fallthrough
	case 4:
		fmt.Println("value is 4")
	case 5:
		fmt.Println("value is 5")
		fallthrough
	case 6:
		fmt.Println("value is 6")
	default:
		fmt.Println("whatever")
	}
}