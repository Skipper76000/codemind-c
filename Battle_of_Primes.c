#include<stdio.h>
int main() {
	int m,n,i,q,s,res=0,re;
	scanf("%d",&m);
	scanf("%d",&n);
	res=m+n;
	re=res*10;
	for(i=res+1;i<re;i++){
	    s=1;
	    for(int j=2;j<i;j++){
	        if(i%j==0){
	            s=0;
	            break;
	        }
	    }
	    if(s==1){
	        printf("%d",i-res);
	        break;
	    }
	}
}