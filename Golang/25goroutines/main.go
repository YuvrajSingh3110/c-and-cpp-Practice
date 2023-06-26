package main

import (
	"fmt"
	"net/http"
	"sync"
)

var wg sync.WaitGroup  //pointer
var mut sync.Mutex  //pointer

var signal = []string{"test"}

func main() {
	// go greetings("hey")
	// greetings("yo")

	websiteList := []string{
		"https://go.dev",
		"https://google.com",
		"https://github.com",
	}
	for _, web := range websiteList{
		go getStatusCode(web)
		wg.Add(1)  //1 is no. of calls that is happening
	}
	wg.Wait() //always at the end of func
	fmt.Println(signal)
}

// func greetings(s string) {
// 	for i := 0; i < 3; i++ {
// 		time.Sleep(3 * time.Second)
// 		fmt.Println(s)
// 	}
// }

func getStatusCode(endPoint string)  {
	defer wg.Done()

	res, err := http.Get(endPoint)
	if err != nil {
		fmt.Println("Oops...")
	}
	mut.Lock()
	signal = append(signal, endPoint)
	mut.Unlock()
	fmt.Printf("%d status code for %s\n", res.StatusCode, endPoint)
}