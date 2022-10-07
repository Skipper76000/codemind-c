#include<stdio.h>
#include<math.h>
bool isprime(int n){
    for(int j=2;j<=sqrt(n);j++){
        if(n%j==0){
            return 0;
        }
    }
    return 1;
}
int main(){
    int a,rev=0;
    scanf("%d",&a);
    if(isprime(a)){
        while(a!=0){
            int rem=a%10;
            rev=rev*10+rem;
            a/=10;
        }
        if(isprime(rev)){
            printf("circular prime");
        }
        else{
            printf("prime but not a circular prime");
        }
    }
    else{
        printf("not prime");
    }
}