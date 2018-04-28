#include <stdio.h>

int main()
{
 int code,amount;
 float cost;
 scanf("%d",&code);
 if(code==1)
 {
 scanf("%d",&amount);
 cost=amount*4;
 printf("Total: R$ %.2f\n",cost);
 }
 if(code==2)
 {
 scanf("%d",&amount);
 cost=amount*4.5;
 printf("Total: R$ %.2f\n",cost);
 }
 if(code==3)
 {
 scanf("%d",&amount);
 cost=amount*5;
 printf("Total: R$ %.2f\n",cost);
 }
 if(code==4)
 {
 scanf("%d",&amount);
 cost=amount*2;
 printf("Total: R$ %.2f\n",cost);
 }
 if(code==5){
 scanf("%d",&amount);
 cost=amount*1.5;
 printf("Total: R$ %.2f\n",cost);
 }
    return 0;
}
