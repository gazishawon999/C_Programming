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
  
  printf("Name:%c\n Age:%d\n Section:%c\n Salary:%f\n Bonus Salary: %lf\n Single:%d",Name,Age,Section,Salary,BonusSalary,Single);
  return 0;
}
