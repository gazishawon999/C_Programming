#include<stdio.h>

int main ()
{
   int number;
   printf("Enter the Number:");
   scanf("%d", &number);
   
   //true if number is less than zero
   
   if(number<0)
   {
   printf("The number is Negative");
   }
   
   else if(number>0)
   {
   printf("The number is Positive");
   }
   
   else
   {
   printf("The number is zero");
   }
   
   return 0;
}
