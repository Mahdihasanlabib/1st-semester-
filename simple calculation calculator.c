#include<stdio.h>
int main()
{
    int a,b;
    char ch;
    printf("What operation do you want to calculate?\n");
    printf("Add,Substraction,Multiplication,Division:\n");
    printf("Enter the first letter:\n");
    ch=getchar();
    printf("\n");
    printf("Enter two  integer number:\n");
    scanf("%d%d" , &a, &b);
    if(ch=='a') printf("%d", a+b);
    if(ch=='s') printf("%d", a-b);
    if(ch=='m') printf("%d", a*b);
    if(ch=='d') printf("%d", a/b);
    return 0;

}
