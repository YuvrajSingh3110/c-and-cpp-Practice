#include<iostream>
using namespace std;

long long int sqrt(int n){
    int s=0;
    int e=n;
    long long int mid = s + (e-s)/2;
    long long int ans = -1;
    while(s<e){
        long long int square = mid*mid;
        if(square==n){
            return mid;
        }
        if(square<n){
            ans = mid;
            s = mid + 1;
        }
        else{
            e = mid - 1;            
        }
        mid = s + (e-s)/2;
    }
    return ans;
}

double precision(int n, int pre, int tempsqrt){
double fac = 1;
double ans = tempsqrt;
for (int i = 0; i < pre; i++)
{
    fac = fac/10;
    for(double j=ans; j*j<n; j = j+fac){
        ans = j;
    }

}
return ans;

}

int main(){
    int n;
    cout<<"Enter the number \n";
    cin>>n;
    int tempsqrt = sqrt(n);

   cout<<"Square root of the number is "<<precision(n, 3, tempsqrt)<<endl;
   return 0;
}