#include<stdio.h>
#include<math.h>
int main(){
    int p,t,r;
    scanf("%d%d%d",&p,&r,&t);
    printf("%.2f",p*pow(1+0.01*r,t));
}