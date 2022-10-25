
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
        sum+=a[i];
    }
    avg=sum/n;
    int cnt=0;
    for(i=0;i<n;i++){
        if(a[i]<=avg){
            cnt++;
        }
    }
    printf("%d",cnt);
}