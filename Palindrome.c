#include<stdio.h>
int main()
{
    int n;
    scanf("%d",&n);
    int m=n,rev=0;
    while(n!=0){
        int rem=n%10;
        rev=rev*10+rem;
        n/=10;
    }
    if(rev==m)
    printf("True");
    else
    printf("False");
}