#include<stdio.h>
int main() {
	int n,o=0,e=0;
	scanf("%d",&n);
	int arr[n];
	for(int i=0; i<n; i++) {
		scanf("%d",&arr[i]);
	}
	int a,b;
	scanf("%d",&a);
	scanf("%d",&b);
	int sum=0;
	    for(int i=0;i<n;i++){
	        if( arr[i]<a || arr[i]>b){
	            sum+=arr[i];
	        }
	    }
	printf("%d",sum);
}