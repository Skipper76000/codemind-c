#include<stdio.h>
int main(){
    int n;
    scanf("%d",&n);
    int sum=0;
    while(sum!=1 && sum!=4){
    sum=0;    
    while(n!=0){
        int rem=n%10;
        sum+=rem*rem;
        n/=10;
    }
    n=sum;
    }
    if(sum==1){
        printf("True");
    }
    else
    {
        printf("False");
    }
    return 0;
}