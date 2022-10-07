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
    int a,b;
    scanf("%d",&a);
    scanf("%d",&b);
    int cnt=0;
    for(int i=a;i<=b;i++){
        if(i==1){
            continue;
        }
        if(isprime(i)){
        printf("%d
",i);
        }
    }
}