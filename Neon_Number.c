#include<stdio.h>
int main(){
    int n;
    scanf("%d",&n);
    int s=n*n;
    int sum=0;
    while(s!=0)
    {
        int rem = s%10;
        sum+=rem;
        s/=10;
    }
    if(n==sum){
        printf("Neon Number");
    }
    else
    {
        printf("Not Neon Number");
    }
}