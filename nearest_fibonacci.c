#include<stdio.h>
int main()
{
    int n,f,s,sum=0;
    scanf("%d",&n);
    f=0;
    s=1;
    for(int i=f;i<=n;i++){
        sum=f+s;
        f=s;
        s=sum;
        if ((s>n) && (s-n)>(n-f)){
            printf("%d",f);
            break;
        } 
        else if ((s>n) && (s-n)<(n-f)){
            printf("%d",s);
            break;
        }
         else if(s>n){
            printf("%d %d",f,s);
            break;
        }
    }    
}