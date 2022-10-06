#include<stdio.h>
int main() {
	int n,c=0;
	scanf("%d",&n);
	int a[100];
	for(int i=0; i<=100; i++) {
		a[i]=i*(i+1);
	}
	for(int j=0; j<=100; j++) {
		if(a[j]==n) {
			c++;
		}
	}
	if(c==0) {
		printf("NO");
	} else {
		printf("YES");
	}
	return 0;
}