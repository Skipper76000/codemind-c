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
	int count=0;
	    for(int i=0;i<n;i++){
	        if( arr[i]<a || arr[i]>b){
	            printf("%d ",arr[i]);
	            count=1;
	        }
	    }
	    if(count==0){
	        printf("-1");
	    }
	
}