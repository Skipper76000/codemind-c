#include<stdio.h>
int main(){
    int n;
    scanf("%d ",&n);
    int arr[n];
    for(int i=2;i<n;i++){
        arr[0]=0;
        arr[1]=1;
        arr[i]=arr[i-1]+arr[i-2];
    }
    for(int j=0;j<n;j++){
        printf("%d ",arr[j]);
    }
}