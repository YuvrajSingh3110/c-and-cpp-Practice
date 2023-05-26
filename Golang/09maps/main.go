package main

import "fmt"

func main() {
	languages := make(map[string]string)

	//insertion
	languages["Kt"] = "Kotlin"
	languages["JS"] = "Javascript"
	languages["Py"] = "Python"

	fmt.Println("List of all languages: ", languages)
	fmt.Println("Kt stands for: ", languages["Kt"])
	//deletion
	delete(languages, "Py")
	fmt.Println("List of all languages: ", languages)

	//loops
	for key, value := range languages {
		fmt.Printf("For key %v value is %v\n", key, value)  //%v is for value
	}
}