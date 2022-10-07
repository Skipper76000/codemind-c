#include<stdio.h>
int main(){
    int n,o=0;
    scanf("%d",&n);
    int arr[n];
    for(int i=0;i<n;i++){
        scanf("%d",&arr[i]);
        if(i %2==1){
            o+=arr[i];
        }
    }
    printf("%d",o);
}