package main

import (
	"fmt"
	"io/ioutil"
	"net/http"
)

const url = "https://lco.dev"

func main() {
	response, err := http.Get(url)
	if err!= nil {
		panic(err)
	}
	fmt.Printf("Type of repsonse %T: \n", response)
	fmt.Println(response)

	//make sure to close the response always
	defer response.Body.Close()

	databytes, err := ioutil.ReadAll(response.Body)
	if err!= nil {
		panic(err)
	}
	content := string(databytes)
	fmt.Println(content)
}
