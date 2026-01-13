#include<stdio.h>
#include<stdbool.h>

int main ()
{
  char Name='S';
  int Age= 21;
  char Section='E';
  float Salary=20000.63;
  double BonusSalary=500.474838;
  bool Single=true;
  
  printf("Name: %c\n",Name);
  printf("Age: %d\n",Age);
  printf("Section: %c\n",Section);
  printf("Salary: %f\n",Salary);
  printf("Bonus Salary: %lf\n",BonusSalary);
  printf("Maritual Status: %d", Single);
  
  return 0;
}
