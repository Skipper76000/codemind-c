#include<stdio.h>
#include<math.h>
int main(){
    int a[20],i,o,d;
    scanf("%d",&o);
    i=0;
    d=0;
    while(o>0){   //21
        int rem=o%10;
        d=d+o*pow(8,i);  // 17
        o/=10;
    }
    for(i=0;d>0;i++){
        a[i]=d%2;
        d=d/2;
    }
    i--;
    while(i>=0){
        printf("%d",a[i]);
        i--;
    }
}