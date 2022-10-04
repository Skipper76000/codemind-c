#include<stdio.h>
void positive_num(int n){
    int sum=0;
    for(int i=1;i<n;i++){
        if(n%i==0){
            sum+=i;
        }
    }
    if(sum==n){
        printf("True");
    }
    else{
       printf("False"); 
    }
}
int main(){
    int a;
    scanf("%d",&a);
    if(a>0){
        positive_num(a);
    }else{
        printf("False");
    }
    return 0;
}