#include<stdio.h>
int main()
{
    int a,s,d,f,g,h;
    scanf("%d",&a);
    for(s=1;s<=a;s++)
    {
        d=1;
        scanf("%d",&f);
        for(g=1;g<=f;g++){
          d=d*g;
        }
        printf("%d
",d);
    }
}
