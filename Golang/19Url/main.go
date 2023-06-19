package main

import (
	"fmt"
	"net/url"
)

func main() {
	const myUrl string = "https://lco.dev:3000/learn?coursename=reactjs&paymentid=ga828tr63"

	result, _ := url.Parse(myUrl)
	fmt.Println(result)
	fmt.Printf("%T\n",result)   //result is of type *url.URL
	fmt.Println(result.Scheme)
	fmt.Println(result.Host)
	fmt.Println(result.Port())
	fmt.Println(result.Path)
	fmt.Println(result.RawQuery)

	qparams := result.Query()
	fmt.Printf("Type of query params is %T\n", qparams)   //url.Values
	fmt.Println(qparams["coursename"])

	for _, values := range qparams{
		fmt.Println("Params is: ", values)
	}

	//to create a url
	partsOfUrl := &url.URL{   //always passs on a reference
		Scheme: "https",
		Host: "lco.dev",
		Path: "/practice",
		RawPath: "user=yato",
	}
	fmt.Println(partsOfUrl.String())
}