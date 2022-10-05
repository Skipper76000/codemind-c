#include<stdio.h>
int main(){
    int n,fi,s,t,fo;
    scanf("%d",&n);
    fo=n%10;
    n/=10;
    t=n%10;
    n/=10;
    s=n%10;
    n/=10;
    fi=n%10;
    if(fi==6){
        fi=9;
    }
    else if(s==6){
        s=9;
    }
    else if(t==6){
        t=9;
    }
    else if(fo==6){
        fo=9;
    }
    printf("%d%d%d%d",fi,s,t,fo);
    return 0;
    }