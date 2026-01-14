#include<stdio.h>
int main ()
{
int n;
printf("Enter a Number:");
scanf("%d",&n);

if(n==0)
printf("Non Negative");
else if(n>0)
printf("Positive");
else
printf("Negative");

}
