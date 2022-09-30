#include<stdio.h>
int gcd(int a,int b){
	if(a%b==0){
		return b;
	}
	return gcd(b,a%b);
}
int main() {
	int i,j,g,l,n,a[100];
	scanf("%d
",&n);
	for(i=0; i<n; i++) {
		scanf("%d",& a[i]);
	}
	g=a[0];
	l=a[0];
	for(i=1;i<n;i++){
		g=gcd(a[i],l);
		l=(l*a[i])/g;
	}
	printf("%d",l);
	return 0;
}