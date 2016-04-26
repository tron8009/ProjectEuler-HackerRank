#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;


int main() {
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */
    
    int t;
    long long n,sum, a[3];
    
    cin>>t;
    
    for(int i=0;i<t;i++){
       
       cin>>n;
       a[0]=1,a[1]=2 ,a[2]=a[0]+a[1]; 
       sum=2; 
       while(a[2]<n){
           a[0]=a[1];
           a[1]=a[2];
           a[2]=a[0]+a[1];
           if(a[2]%2==0 && a[2]<n)
              sum=sum+a[2];
              
       }
       cout<<sum<<endl; 
    }
    return 0;
}
