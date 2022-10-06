//#include<stdio.h>
//int gcd(int a,int b){
//	if(a%b==0){
//		return b;
//	}
//	return gcd(b,a%b);
//}
//int main() {
//	int i,j,g,l,n,a[100];
//	scanf("%d
",&n);
//	for(i=0; i<n; i++) {
//		scanf("%d",& a[i]);
//	}
//	g=a[0];
//	l=a[0];
//	for(i=1;i<n;i++){
//		g=gcd(a[i],l);
//		l=(l*a[i])/g;
//	}
//	printf("%d",l);
//	return 0;
//}
#include<stdio.h>
int main() {
	int l,r;
	scanf("%d %d",&l,&r);
	if(r%l==0) {
		printf("%d
",r);
	} else {
		int a[r];
		int arr[l];
		for(int i=1; i<=r; i++) {
			a[i]=i*l;
		}
		for(int i=1; i<=l; i++) {
			arr[i]=i*r;
		}
		int cnt=0;
		for(int i=1; i<=r; i++) {
				if(cnt ==1){
					break;
				}
			for(int j=1; j<=l; j++) {
				if(a[i]==arr[j]) {
					cnt=1;
					printf("%d
",a[i]);
					break;
				}
			}
		}
	}
	return 0;
}