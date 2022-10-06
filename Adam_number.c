#include<stdio.h>
int main()
{
    int num;
    scanf("%d",&num);
    int s=num*num,rev=0,rev1=0;
    while(num!=0){
        int rem=num%10;
        rev=rev*10+rem;
        num/=10;
    }
    int s1=rev*rev;
    while(s1!=0){
        int rem=s1%10;
        rev1=rev1*10+rem;
        s1/=10;
    }
   if(s==rev1)
    printf("True");
   else
    printf("False");
}
