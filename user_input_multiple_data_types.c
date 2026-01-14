#include<stdio.h>

int main ()
{
  char Name;
  int num1;
  float num2;
  double num3;
  
  printf("Enter Integar Number:");
  scanf("%d", &num1);
  
  printf("Enter Float Number:");
  scanf("%f" ,&num2);
  
  printf("Enter Double Number:");
  scanf("%lf", &num3);
  
  printf("Enter Your Character:");
  scanf( " %c", &Name);
  
  
  
  printf("Integar Number:%d\n",num1);
  printf("Float Number:%f\n",num2);
  printf("Double Number:%lf\n",num3);
  printf("My Character:%c\n",Name);
  
  return 0;
}
