package main

import (
	"fmt"
	"time"
)

func main() {
	presentTime := time.Now()
	fmt.Println(presentTime)
	fmt.Println(presentTime.Format("01-02-2006 15:04:05  Monday"))  //01-02-2006 is necessary to print only the date 
	//15:04:05 to display the time
	//Monday to diplay the day

	createdDate := time.Date(2022, time.March, 31, 11, 59, 59, 0, time.UTC)
	fmt.Println(createdDate.Format("02-01-2006 Monday"))
}