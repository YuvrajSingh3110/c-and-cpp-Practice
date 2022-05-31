#include<iostream>
using namespace std;

// void print(int *p){
//     cout<<*p<<endl;
// }
void update(int *p){
    // p = p+1;
    // cout<<"inside- "<<p<<endl;
    *p = *p+1;
}

int size(int *arr, int n){
    //or use (int arr[], int n) both are same
    cout<<"size- "<<sizeof(arr)<<endl;
}

int main(){
    int value = 5;
    int *p = &value;
   // print(p);
    update(p);
    // cout<<"after update- "<<p<<endl;
    cout<<"value after update- "<<*p<<endl;

// Here in update func the address is not updated (although it is call by value), whereas tha value is updated to 6;

int arr[5]={1,2,3,4,5};
size(arr,5);

    return 0;
} 