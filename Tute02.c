#include<stdio.h>
int Square(int x);
int Cube(int x);
int main ()
{
  int num;

  printf("\nInput the number : ");
  scanf("%d",&num);

  printf("\n%d",Square(num));
  printf("\n%d",Cube(num));


  return 0;
}

int Square(int x)
{
  int num;
  num=x*x;
  return num;
}

int Cube(int x)
{
  int num2;
  num2=x*x*x;
  return num2;
}