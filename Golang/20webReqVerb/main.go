package main

import (
	"fmt"
	"io/ioutil"
	"net/http"
	"strings"
)

func main() {
	PerformGetRequest()
}
func PerformGetRequest() {
	const myUrl = "http://localhost:8000/get"

	response, err := http.Get(myUrl)
	if err != nil {
		panic(err)
	}

	defer response.Body.Close()

	fmt.Println("Status code: ", response.StatusCode)
	fmt.Println("Content length: ", response.ContentLength)

	var responseString strings.Builder
	//alternatively we can also use strings library which is considered very strong
	content, _ := ioutil.ReadAll(response.Body)
	byteCnt ,_ := responseString.Write(content) 
	//through responseString we are having the raw data all the time which is very useful
	fmt.Println("Byte count: ",byteCnt)
	fmt.Println(responseString.String())

	//println(string(content))
}