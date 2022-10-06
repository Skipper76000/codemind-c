#include <stdio.h>

int main(){
    int n,m,sum=0,sum1=0;
    scanf("%d",&n);
    scanf("%d",&m);
    for(int i=1;i<=n/2;i++){
        if(n%i==0){
            sum+=i;
        }
    }
    for(int j=1;j<=m/2;j++){
        if(m%j==0){
            sum1+=j;
        }
    }
    if(m==sum && n==sum1){
        printf("Amicable");
    }
    else{
        printf("Not Amicable");
    }
  
 }