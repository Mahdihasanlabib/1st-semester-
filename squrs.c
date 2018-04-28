#include<stdio.h>
int main()
{
    int sqrs [10];
    int i;
    for(i=0;i<=9;i++)
        sqrs[i-1]=i*i;
    for(i=9;i<=0;i++)
        printf("%d\n",sqrs[i]);
    return 0;
}
