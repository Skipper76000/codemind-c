#include<stdio.h>
#include<math.h>
int main(){
    int n,sum=0;
    scanf("%d ",&n);
    int i=0,m=n,l=n;
    while(m!=0){
       int rem=m%10;
       m/=10;
       i++;
   }
   while(l!=0){
       int rem=l%10;
       sum=sum+pow(rem,i);
       l/=10;
       i--;
   }
   if(sum==n)
   printf("True");
   else
   printf("False");
}