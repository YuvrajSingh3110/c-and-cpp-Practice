package main

import (
	"fmt"
	"log"
	"net/http"

	"github.com/YuvrajSingh3110/mongoAPI/router"
)

func main() {
	fmt.Println("Server is getting started...")
	r := router.Router()
	log.Fatal(http.ListenAndServe(":3000", r))
	fmt.Println("Listening at port 3000...")
}