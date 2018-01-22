#include<stdio.h>
int main()
{
int n;
printf("\nenter the year:");
scanf("%d",&n);
if(n%400==0)
printf("\nit is leap year%d",n);
elseif(n%100==0)
printf("\nit is not leap year%d",n);
elseif(n%4==0)
printf("\nit is leap year%d",n);
return 0;
}
