package main

import (
	"encoding/json"
	"fmt"
)
type info struct {
	Name     string `json:"identity"`
	Age      int
	Email    string `json:"email,omitempty"` //omiempty omits the empty input and json would not show that input
	Password string `json:"-"`               //- means json would not be showing the password
}

func main() {
	EncodeJSON()
	DecodeJSON()
}

func EncodeJSON() {
	information := []info{
		{"Gintoki", 25, "oddjobsgmail.com", "auw78tq78gf"},
		{"Kagura", 14, "", "awurv8734gf78g"},
		{"Shinpachi", 17, "megane@gmail.com", "nuihf887"},
	}

	//packaging this data as json data

	finaljson, err := json.MarshalIndent(information, "", " ")
	if err != nil {
		panic(err)
	}

	fmt.Printf("%s\n", finaljson)
}

func DecodeJSON() {
	jsonDataFromWeb := []byte(`
	{
		"identity": "Gintoki",
		"Age": 25,
		"email": "oddjobsgmail.com"
	   }
	`)

	var data info

	isValid := json.Valid(jsonDataFromWeb)
	if isValid {
		fmt.Println("JSON is valid")
		json.Unmarshal(jsonDataFromWeb, &data)
		fmt.Printf("%#v\n", data)
	}else{
		println("JSON is not valid")
	}

	//if we want to add data in key value pair instead of struct
	var myData map[string]interface{}  
	//as we are not sure what type of data is received through json so we use interface
	json.Unmarshal(jsonDataFromWeb,&myData)
	fmt.Printf("%#v\n", myData)

	for k,v := range myData{
		fmt.Printf("key is %v, value is %v and type is %T\n", k,v,v)
	}
}
