#include<iostream>
#include<vector>
using namespace std;

int compression(char chars[20] , int n){
    int i=0;
    int ansIndex=0;
    while(i<n){
        int j=i+1;
        while(j<n && chars[i]==chars[j]){
            j++;
        }
        //yaha tan aenge when either chars is traversed or a different element is found

        //store old char
        chars[ansIndex++]=chars[i];
        int count = j-i;
        if (count>1)
        {
            //converting count to single digit and saving in answer
            string cnt = to_string(count);
            for (char i:cnt)
            {
                chars[ansIndex++]=i;
            }
            
        }
        //move to next different character
        i=j;
        

    }
    return ansIndex;

}

int main(){
    char arr[20]={'a','a,','b','b','c'};
    cout<<compression(arr,5);
 return 0;
}