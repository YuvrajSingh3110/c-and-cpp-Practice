package main

import (
	"fmt"
	"sync"
)

func main() {
	myCh := make(chan int)
	wg := &sync.WaitGroup{}
	// myCh <- 5
	// fmt.Println(<-myCh)

	wg.Add(2)
	//R ONLY
	go func(ch <-chan int, wg *sync.WaitGroup) {
		val, isChannelOpen := <-myCh
		fmt.Println(isChannelOpen)
		fmt.Println(val)
		// fmt.Println(<-myCh)
		// fmt.Println(<-myCh)
		wg.Done()
	}(myCh, wg)

	//send ONLY
	go func(ch chan<- int, wg *sync.WaitGroup) {
		close(myCh)
		// myCh<-5
		// myCh<-6
		//close(myCh)
		wg.Done()
	}(myCh, wg)

	wg.Wait()
}
