
//print numbers 1 to n
#include<stdio.h>

int main ()
{
   int i;
   int num;
   printf("Enter a Number:");
   scanf("%d",&num);
   for ( i=1; i<=num; ++i)
   {
   printf("%d\n", i);
   }
   
   return 0;
}
