//to check if one of s1 permutation is a substring of s2

#include<iostream>
using namespace std;

bool checkEqual(int count[26], int count2[26]){
    for (int i = 0; i < 26; i++)
    {
        if (count[i]==count2[i])
        {
            return 1;
        }
        
    }
    return 0;
    

}

bool permutation(string s1, string s2){
    //characrter count array
    int count[26]={0};
    for (int i = 0; i < s1.length(); i++)
    {
        int index = s1[i]-'a';
        count[index]++;
    }
    //traverse s2 string in window of size of s1 and compare
    int i=0;
    int windowSize = s1.length();
    int count2[26]={0};

    //running for first window
     while(i<windowSize && i<s2.length()){
        int index = s2[i]-'a';
        count2[index]++;
        i++;
    }
        if(checkEqual(count,count2)){
            return 1;
        }
         
        //proceed further
        while(i<s2.length()){
            char newChar = s2[i];
            int index = newChar - 'a';
            count2[index]++;

            char oldChar = s2[i-windowSize];
            index = oldChar - 'a';
            count2[index]--;
            i++;
            if(checkEqual(count,count2)){
            return 1;
            }
            else
            return 0;
        }
    

}

int main(){
    string s1,s2;
    cout<<"Enter string 1 "<<endl;
    cin>>s1;
    cout<<"Enter string 2 "<<endl;
    cin>>s2;
    cout<<permutation(s1,s2);
    return 0;
}