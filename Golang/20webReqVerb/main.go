package main

import (
	"fmt"
	"io/ioutil"
	"net/http"
	"net/url"
	"strings"
)

func main() {
	//PerformGetRequest()
	//PerformPostJsonRequest()
	PerformPostFormRequest()
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

func PerformPostJsonRequest(){
	const myUrl = "http://localhost:8000/post"

	//fake json payload
	request := strings.NewReader(`
		{
			"coursename":"get going with golang",
			"price":0,
		}
	`)

	response, err := http.Post(myUrl, "application/json", request)
	if err != nil {
		panic(err)
	}

	defer response.Body.Close()

	content, err:= ioutil.ReadAll(response.Body)
	if err != nil {
		panic(err)
	}
	fmt.Println(string(content))
}


func PerformPostFormRequest() {
	const myUrl = "http://localhost:8000/postform"

	//formdata
	data := url.Values{}
	data.Add("name", "Yato")
	data.Add("age", "21")

	response, err := http.PostForm(myUrl, data)
	if err != nil {
		panic(err)
	}

	content, _ := ioutil.ReadAll(response.Body)
	fmt.Println(string(content))
	defer response.Body.Close()
}