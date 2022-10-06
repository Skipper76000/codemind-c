#include<stdio.h>
int main() {
	int n,i,j,k,np,sp,c=0,d,e,t;
	scanf("%d",&t);
	while(t--){
	scanf("%d",&n);
	for(j=n;; j--) {
		c=0;
		for(k=2; k<=j; k++) {
			if(j%k==0) {
				c++;
			}
		}
		if(c==1) {
			np=j;
			d=n-np;
			break;
		}
	}
	for(j=n;; j++) {
		c=0;
		for(k=2; k<=j; k++) {
			if(j%k==0) {
				c++;
			}
		}
		if(c==1) {
			sp=j;
			e=sp-n;
			break;
		}
	}
	if(e<d) {
		printf("%d
",sp);
	} else {
		printf("%d
",np);
	}
}
return 0;
}
