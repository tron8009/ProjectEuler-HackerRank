#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;


int main() {
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */
    int t;
    long n,n3,n5,n15,sum3,sum5,sum15;
    cin>>t;
    for(int i=0; i<t; i++){
        cin>>n;
        n3=(n-1)/3;
        n5=(n-1)/5;
        n15=(n-1)/15;
        
        sum3=3*(n3*(n3+1)/2);
        sum5=5*(n5*(n5+1)/2);
        sum15=15*(n15*(n15+1)/2);
        
        cout<<sum3+sum5-sum15<<endl;
    }
    return 0;
}
