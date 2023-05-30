package main

import "fmt"

func main() {
	//no inheritance, super or parent in golang
	yato := User{"Yato", 18, true, "yato@go.dev"}
	fmt.Println(yato)
	fmt.Printf("Details for yato are: %+v\n", yato)
	fmt.Printf("Email of yato is: %v\n", yato.Email)
	yato.GetStatus()
	yato.Newmail()
	fmt.Printf("Email of yato is: %v\n", yato.Email)
}

type User struct { //pay attention to capital letters
	Name   string
	Age    int
	Status bool
	Email  string
}

func (u User) GetStatus() {
	fmt.Println("Is user active: ", u.Status)
}

func (u User) Newmail() {
	u.Email = "yato@gmail.com" //a copy of email is passed and og value is unchanged
	fmt.Println("New email is: ", u.Email)
}
