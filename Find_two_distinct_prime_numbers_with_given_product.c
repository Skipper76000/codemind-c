#include<stdio.h>
#include<math.h>
int isprime(int n){
        for(int j=2;j<sqrt(n);j++){
        if(n%j==0){
            return 0;
        }
    }
    return 1;
}
int main(){
    int n;
    scanf("%d",&n);
    int f =0,s=0;
for(int i=2;i<n;i++){
         if(n%i==0){
           f=i;
            s=n/i;
            }
}
    if(isprime(f) && isprime(s) && f!=s){
    printf("%d %d",s,f);
    }else{
        printf("-1");
    }
    return 0;
}