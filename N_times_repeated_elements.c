#include<stdio.h>
int main()
{
    int n,a[100],i,j,c,d=0,b[100];
    float v,sum=0;
    scanf("%d",&n);
    for(i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
    }
    int k;
    scanf("%d",&k);
    for(i=0;i<n;i++)
    { c=1;
        for(j=0;j<n;j++)
        {
            if(i!=j)
            {
                if(a[i]==a[j])
                {   a[j]=1000;
                    c++;
                }
            }
        }
        if(c==k && a[i]!=1000)
        {
            b[d]=a[i];
            d++;
        }
    }
    if(d==0)
    {
        printf("-1");
    }
  else
  {
    for(i=0;i<d;i++)
    {
        printf("%d ",b[i]);
    }
  }
}