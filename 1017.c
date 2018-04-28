#include <stdio.h>

int main(){
double  time,speed ,distance;
scanf("%lf %lf",&time,&speed);
distance=((time*speed)/12);
printf("%.3f\n",distance);
    return 0;
}
