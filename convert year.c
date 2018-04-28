 #include<stdio.h>
 int main()
 {



int nowadays, years , weeks , days;
printf("Enter the totals days\n ");
scanf("%d" , & nowadays);
years=nowadays/365;
weeks=(nowadays%365)/7;
days=(nowadays%365)%7;
printf("%d=years , %d weeks , %d days , nowadays , years , weeks , days");
return 0;








 }
