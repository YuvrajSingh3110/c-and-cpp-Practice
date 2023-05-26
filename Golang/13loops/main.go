package main

import "fmt"

func main() {
	days := []string{"Friday", "Saturday", "Sunday"}
	fmt.Println(days)

	// for i := 0; i < len(days); i++ {
	// 	fmt.Println(days[i])
	// }

	for i := range days{  //i gives index and not value
		fmt.Println(days[i])
	}

	for key, day := range days{
		fmt.Printf("Index is %v and value is %v\n", key,day)
	}

	for value := 1; value<10; value ++ {
		if value == 2 {
			goto yato
		}
		if value == 5 {
			continue
		}
		if value == 7 {
			break
		}
		fmt.Println(value)
	}
	yato: fmt.Println("value here is 2")
}