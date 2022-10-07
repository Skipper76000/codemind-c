#include<stdio.h>
int main(){
    int a,b;
    scanf("%d %d",&a,&b);
    int max=0;
    int c=a>b?a:b;
    for(int i=1;i<=c;i++){
        if(a%i==0 && b%i==0){
            max=i;
        }
    }
    if(max==0){
    printf("1");}
    else{
    printf("%d",max);
}
}