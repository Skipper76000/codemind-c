#include<stdio.h>
int main()
{
    int n,i,se,sum=0,c=0;
    scanf("%d",&n);
    int a[n];
    for(i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
        sum+=a[i];
    }
    se=sum/n;
    for(i=0;i<n;i++)
    {
        if(se==a[i])
        {
            c++;
            break;
        }
    }
    if(c==1)
    {
        printf("True");
    }else
    {
        printf("False");
    }
}
