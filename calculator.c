 #include<stdio.h>
 int main()
 {

     int a,b;
     char ch;
     printf("What you want to calculate");
    printf("add\n ,  substitution \n , multiplication\n , division\n");
    do{
        printf("Enter your first letter");
        ch=getche();


    }


while(ch!='a'&& ch!='s'&& ch!='m'  &&ch!='d');
{

float c,d;
printf("Enter two number");
scanf("%d %d" , &a , &b);
if(ch=='a')
    printf("%d" , a+b);
if (ch=='s')
    printf("%d" , a-b);
if (ch=='m')
    printf("&d", a*b);
if (ch=='d')
    printf("%d", a/b);}
return 0;
 }
