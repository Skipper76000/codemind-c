#include<stdio.h>
int main() {
	int n,o=0;
	scanf("%d",&n);
	int arr[n];
	for(int i=0; i<n; i++) {
		scanf("%d",&arr[i]);
		if(arr[i] % 2== 0)
			o=arr[i];
	}
	printf("%d",o);
}