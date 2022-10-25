
#include<stdio.h>
int main()
{
    int n;
    scanf("%d",&n);
    int i;
    int a[n],avg,sum=0;
    for(i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
        sum=sum*10 +a[i];
    }
    int dec=0;
    int base=1;
    while(sum>0){
        int rem=sum%10;
        dec=dec + rem*base;
        sum/=10;
        base=base *2;
    }
    printf("%d",dec);
}