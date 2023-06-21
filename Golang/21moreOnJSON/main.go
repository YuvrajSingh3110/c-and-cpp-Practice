package main

import (
	"encoding/json"
	"fmt"
)

type info struct {
	Name     string `json:"identity"`
	Age      int
	Email    string `json:"email,omitempty"`  //omiempty omits the empty input and json would not show that input
	Password string `json:"-"`  //- means json would not be showing the password
}

func main() {
	EncodeJSON()
}

func EncodeJSON() {
	information := []info{
		{"Gintoki", 25, "oddjobsgmail.com", "auw78tq78gf"},
		{"Kagura", 14, "", "awurv8734gf78g"},
		{"Shinpachi", 17, "megane@gmail.com", "nuihf887"},
	}

	//packaging this data as json data

	finaljson, err := json.MarshalIndent(information, "", " ")
	if err != nil{
		panic(err)
	}

	fmt.Printf("%s\n", finaljson)
}