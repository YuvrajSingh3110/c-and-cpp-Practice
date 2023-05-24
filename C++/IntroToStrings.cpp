#include<iostream>
using namespace std;

/*char lower(char ch){
    if(ch>='a' && ch<='z'){
        return ch;
    }
    else{
        char temp = ch - 'A' + 'a';
        return temp;
    }
    
}

bool palindrome(char ch[] , int n){
    int s=0;
    int e=n-1;
    while(s<e){
        if(ch[s]!=ch[e]){
                    return 0;

        }
        else
        s++;
        e--;

    }
    return 1;
}

int reverse(char ch[] , int n){
   int s=0;
   int e=n-1;
   while(s<e){
       swap(ch[s++],ch[e--]);
   }
   cout<<"After reverse name is "<<ch<<endl;
   return 0;
}

int length(char ch[]){
int cnt = 0;
    for(int i=0; ch[i]!=0 ; i++){
cnt++;
    }
    cout<<"length is "<<cnt<<endl;
    return cnt;
}  */

char maxOccurChar(string s){
int arr[20]={0};

//create an array of count of characters
for(int i=0; i<s.length(); i++){
    char ch=s[i];
    //lowercase
    int temp = 0;
    if(ch>='a' && ch<='z'){
      temp = ch - 'a';
    }
    if(ch>='A' && ch<='Z'){
      temp = ch - 'A';
    }
    arr[temp]++;
}
int maxi = -1, ans = 0;
for (int i = 0; i < 20; i++)
{
    if(maxi < arr[i]){
        ans = i;
        maxi = arr[i];
    }

}
char finalAns = 'a' + ans;
return finalAns;

}

int main(){

    string s;
    cin>>s;
    cout<<maxOccurChar(s)<<endl;
  /*  char ch[10];
    cout<<"Enter name "<<endl;
    cin>>ch;
    // ch[3]='\0';
    // cout<<ch;
int n = length(ch);
reverse(ch,n);
cout<<"Palindrome or not: "<<palindrome(ch,n)<<endl;
cout<<"to lower "<<lower('B')<<endl;   */
return 0;
}