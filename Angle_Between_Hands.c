#include<stdio.h>
#include<math.h>
int main(){
    int h,m;
    scanf("%d: %d",&h,&m);
    double angle=abs((((h%12)+(m/60.0))*30)-(m*6));
    if(angle>180){
    	angle=360-angle;
	}
    printf("%0.1f",angle);
    return 0;
}