#include<iostream>
using namespace std;

int palindrome(string& str, int i, int j){
    if(i>j){
        return 0;
    }
    if(str[i]==str[j]){
        return 1;
    }
    i++;
    j--;
    palindrome(str,i,j);
    return 0;
}

int main(){
    string name = "level";
    
    int p = palindrome(name,0,name.length()-1);
    if(p==1){
        cout<<"palindrome";
    }
    else
    cout<<"not palindrome";
    return 0;
}