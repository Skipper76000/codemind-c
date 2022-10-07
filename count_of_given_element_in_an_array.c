#include<stdio.h>
int main() {
	int n,o=0;
	scanf("%d",&n);
	int arr[n];
	for(int i=0; i<n; i++) {
		scanf("%d",&arr[i]);
	}
	int c;
	scanf("%d",&c);
	for(int i=0; i<n; i++) {
		if(arr[i] == c )
			o++;
	}
	printf("%d",o);
}