package main

import (
	"fmt"
	"sort"
)

func main() {
	var list = []string{"potato", "onion", "tomato"}

	fmt.Println("list is: ", list)
	fmt.Printf("Type of list is: %T \n", list)  //[]string
	fmt.Println("length of list is: ", len(list))

	//to add in a slice
	list = append(list, "brinjal")
	fmt.Println("list is: ", list)

	list = append(list[1:])  //starts from pos 1 to end
	fmt.Println("list is: ", list)

	list = append(list[1:3])  //starts from pos 1 to pos 3
	fmt.Println("list is: ", list)

	highscore := make([]int, 4)

	highscore[0] = 678
	highscore[1] = 345
	highscore[2] = 567
	highscore[3] = 234

	highscore = append(highscore, 444, 555, 666) //append reallocates memory

	fmt.Println(highscore)

	sort.Ints(highscore)  //sorts
	fmt.Println(highscore)
	fmt.Println(sort.IntsAreSorted(highscore))  //gives boolean

	//removing a value in slices based on index
	var courses = []string{"kotlin", "flutter", "golang", "web dev"}
	fmt.Println(courses)
	var index = 2
	courses = append(courses[:index], courses[index+1:]...)  //last index is non-inclusive
	fmt.Println(courses)

}
