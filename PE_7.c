#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() {

    /* Enter your code here. Read input from STDIN. Print output to STDOUT */
    long int i,j,max=1000001;
    int prime[max];
    
    for(i=0;i<max;i++)
        prime[i]=1;
    prime[0]=0;
    prime[1]=0;
    
    for(i=0;i<sqrt(max);i++){
        if(prime[i]){
            for(j=2;i*j<max;j++){
                prime[i*j]=0;
            }
        }
    }
    
    int t,n;
    scanf("%d",&t);
    
    while(t>0){
        scanf("%d",&n);
        i=0,j=0;
                while(i!=n){
                    if(prime[j])
                        i++;
                    j++;
                }
                printf("%ld\n",j-1);
        t--;
    }
    return 0;
}
