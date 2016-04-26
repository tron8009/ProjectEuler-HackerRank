#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;


int main() {
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */   
    int t,i,m,result,k,n,j;
    
    cin>>t;
    
        for(i=0;i<t;i++){

            cin>>n;

            result=0;
                    k=1;
                    while(result!=1){
                             
                            m=n*k;
                            for(j=1;j<=n;j++){


                                if(m%j!=0){
                                    result=0;
                                    break;
                                }    
                                else
                                    result=1;



                            }k++;
                    }    

            
             if(result==1)
               cout<<m<<endl;

        }
    
    return 0;
}
