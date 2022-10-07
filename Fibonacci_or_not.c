#include<stdio.h>
int main(){
    int n;
    scanf("%d ",&n);
    int arr[30];
    for(int i=2;i<30;i++){
        arr[0]=0;
        arr[1]=1;
        arr[i]=arr[i-1]+arr[i-2];
    }
    int check =0;
    for(int j=0;j<=30;j++){
        if(arr[j]==n){
            check=1;
        }
    }
    if(check)
    printf("True");
    else
    printf("False");
}