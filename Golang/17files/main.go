package main

import (
	"fmt"
	"io"
	"io/ioutil"
	"os"
)

func main() {
	content := "This is a file"
	file, err :=os.Create("./Golang/17files/myfile.txt")
	if err != nil {
		panic(err) //panic will shutdown the execution of the program and will show the error
	}
	length, err := io.WriteString(file, content)
	if err != nil {
		panic(err)
	}
	fmt.Println(length)
	defer file.Close()  //recommended to use defer
	readFile("./Golang/17files/myfile.txt")
}

//reading a file
func readFile(filename string){
	databyte, err :=ioutil.ReadFile(filename)
	if err != nil {
		panic(err)
	}
	fmt.Println(databyte)
}