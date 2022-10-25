
#include<stdio.h>
int main()
{
    int n;
    scanf("%d",&n);
    int i;
    int a[n],cnt=0;
    for(i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
        if(a[i]!=1 && a[i]!=0){
            cnt++;
        }
    }
    if(cnt==0)
    printf("True");
    else
    printf("False");
}