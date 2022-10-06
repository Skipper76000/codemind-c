#include<stdio.h>
#include<math.h>
int minAbsDiff(int n)
{
    int left = pow(2, floor(log2(n)));
    int right = left * 2;
    return (n - left)<(right - n)?n-left:right -n;
}
int main()
{
    int n ;
    scanf("%d",&n);
    printf("%d",minAbsDiff(n));
    return 0;
}