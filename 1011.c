#include<stdio.h>
int main()
{
    char name;
    double a,b,total;
    scanf("%s",&name);
    scanf("%lf %lf",&a,&b);
    total=a+(b*15/100);
    printf("TOTAL = %.2lf\n",total);
    return 0;
}
