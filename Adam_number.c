#include<stdio.h>
int main(){
    int m;
    scanf("%d",&m);
    int rev,rev1,sq=m*m;
    while(m!=0){//12
        int rem=m%10;
        rev=rev*10+rem;//21
        m/=10;
    }
    int sq1=rev*rev;
    while(sq1!=0){
        int rem=sq1%10;
        rev1=rev1*10+rem;
        sq1/=10;
    }
    if(sq==rev1)
    printf("True");
    else
    printf("False");
    
}