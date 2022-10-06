#include<stdio.h>
#include<math.h>
int main(){
    int n;
    int max=0;
    scanf("%d",&n);
    while(n!=0){
        int rem=n%10;
        if(rem>max){
            max=rem;
        }
        n/=10;
    }
    printf("%d",max);
    return 0;
}