#include<stdio.h>
int main(){
    int n,o=0,e=0;
    scanf("%d",&n);
    int arr[n];
    for(int i=0;i<n;i++){
        scanf("%d",&arr[i]);
        if(arr[i] %2==0){
            e+=arr[i];
        }
        else{
            o+=arr[i];
        }
    }
    if(o>e)
        printf("%d",o-e);
    else
        printf("%d",e-o);
}