#include<stdio.h>
int selfdiv(int c){
    
		int num=c;
	while(c>0){
		if(c%10==0 || num %(c%10)!=0){
			return 0;
		}
		else{
			c/=10;
		}
}
return 1;
}
int main(){
    int a,b;
    scanf("%d",&a);
    scanf("%d",&b);
    for(int i=a;i<=b;i++){
        if(i>=a && i<=9){
            printf("%d ",i);
        }
        if(i>=10 && i<=b){
        	if(selfdiv(i)>0){
        		printf("%d ",i);
			}
		}
    }
    return 0;
}