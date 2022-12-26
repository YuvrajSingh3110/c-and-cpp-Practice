#include <iostream>
#include<climits>
using namespace std;

int main() {
	int t;
	cin>>t;
	while(t != 0){
	    int n;
	    cin>>n;
	    int arr[n];
	    for(int i=0; i<n; i++){
	        cin>>arr[i];
	    }
	    int cnt = 0;
	    int mini = INT_MAX;
	    int maxi = INT_MIN; 
	    for(int i = 0; i<n; i++){
	        mini = min(arr[i],mini);
	        maxi = max(arr[i],maxi);
	    }
        cout<<maxi<<mini<<endl;
	    while(maxi != mini){
	       for(int i = 0; i<n; i++){
	        arr[i] /= mini;
	       } 
	       mini = INT_MAX;
	       for(int i = 0; i<n; i++){
	        mini = min(arr[i],mini);
	    }
        cout<<mini<<endl;
	       cnt++;
           
	    }
	    cout<<cnt;
	    t--;
	}
	return 0;
}
