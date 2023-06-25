package controller

import (
	"context"
	"fmt"
	"log"

	"github.com/YuvrajSingh3110/mongoAPI/model"
	"go.mongodb.org/mongo-driver/bson"
	"go.mongodb.org/mongo-driver/bson/primitive"
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

//update 1 record
func updateOneMovie(movieId string)  {
	id, _ :=primitive.ObjectIDFromHex(movieId)
	filter := bson.M{"_id": id}   //bson.M is a non-ordered representaion
	update := bson.M{"$set": bson.M{"watched": true}}
	
	result, err := collection.UpdateOne(context.Background(), filter, update)
	if err != nil {
		log.Fatal(err)
	}
	fmt.Println("Modified count: ", result.ModifiedCount)
}

//delete 1 record
func deleteOneMovie(movieId string)  {
	id, _ := primitive.ObjectIDFromHex(movieId)
	filter := bson.M{"_id": id}

	deleteCount, err := collection.DeleteOne(context.Background(), filter)
	if err != nil {
		log.Fatal(err)
	}
	fmt.Println("Movie got deleted with delete count: ",deleteCount)
}

//delete all records
func deleteAllMovie()  {
	//bson.D is an ordered representaion. {} means no id is given and everything is selected for deletion
	deleteResult, err := collection.DeleteMany(context.Background(), bson.D{{}})
	if err != nil {
		log.Fatal(err)
	}
	fmt.Println("Records deleted with delete count: ", deleteResult.DeletedCount)
}