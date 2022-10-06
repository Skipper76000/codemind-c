#include<stdio.h>
#include<math.h>
int main() {
	int n,x=0;
	scanf("%d",&n);
	for(int i=1;i<=n;i++){
	    if(i*i==n){
	        x=1;
	        break;
	    }
	}
	if(x==0){
	    printf("False");
	}else{
	    printf("True");
	}
}