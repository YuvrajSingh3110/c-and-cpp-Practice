package controller

import (
	"context"
	"fmt"
	"log"

	"github.com/YuvrajSingh3110/mongoAPI/model"
	"go.mongodb.org/mongo-driver/mongo"
	"go.mongodb.org/mongo-driver/mongo/options"
)

const connectionString = "mongodb+srv://Yuvraj:yato@cluster0.t8gentf.mongodb.net/?retryWrites=true&w=majority"
const dbName = "netflix"
const colName = "watchlist"

// most IMP
var collection *mongo.Collection

//connect with mongoDB

func init()  {
	//client option
	clientOption := options.Client().ApplyURI(connectionString)

	//connect to mongoDB
	client, err := mongo.Connect(context.TODO(), clientOption)

	if err != nil{
		log.Fatal(err)
	}
	fmt.Println("Successfully connected to MongoDB")
	collection = client.Database(dbName).Collection(colName)

	//collection instance
	fmt.Println("Collection instance is ready")
}

//MongoDB helpers - file

//insert 1 record
func insertOneMovie(movie model.Netflix){
	inserted, err := collection.InsertOne(context.Background(), movie)
	if err != nil{
		log.Fatal(err)
	}
	fmt.Println("Inserted one movie in db with id: ", inserted.InsertedID)
}