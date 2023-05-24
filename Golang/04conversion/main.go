package main

import (
	"bufio"
	"fmt"
	"os"
	"strconv"
	"strings"
)

func main() {
	fmt.Println("Rate our app")

	reader := bufio.NewReader(os.Stdin)
	input, _ := reader.ReadString('\n')
	//input and _ works as try and catch
	//_can be also named as err
	fmt.Println("Thanks for rating: ", input)

	numRating, err := strconv.ParseFloat(strings.TrimSpace(input),50)
	if err != nil {
		fmt.Println(err)
	}else{
		fmt.Println("After adding 1: ",numRating+1)
	}
}