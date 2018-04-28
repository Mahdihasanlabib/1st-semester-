#include<stdio.h>
int main()
{
    int marks[10],i,n,sum=0,average;
    printf("Enter number\n");
    scanf("%d\n",&n);
    for(i=0;i<n;i++)
    {
        printf("Enter a number%d\n",i+1);
        scanf("%d",&marks[i]);
        sum+=marks[i];

    }

    average=sum/n;
    printf("average%d",average);
    return 0;
}



















