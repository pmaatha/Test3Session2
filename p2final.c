#include<stdio.h>
struct_fraction
{
  int num,den;
};
typedef struct_fraction Fraction
Fraction Largest_fraction( Fraction f1,Fraction f2,Fraction f3)
{
  if(f1>f2)
  {
    if(f1>f3)
    {
      return f1;
    }
    else
    {
      return f3;
    }
  }
  else
  {
    if (f2>f3)
    {
      return f2;
    }
    else
    {
      return f3;
    }
  }
  }
Fraction input()
{
  printf("enter the numbers\n");
  scanf("%d/%d,%d/%d,%d/%d",f1,f2,f3);
}
void output(Fraction f1,Fraction f2,Fraction f3,Fraction largest)
{
  printf("%d/%d is the largest number\n");
}
int main()
{
  int f1,f2,f3,largest;
  printf("enter the number\n");
  f1=input();
  f2=input();
  f3=input();
  largest=largest_fraction(f1,f2,f3);
  output(f1,f2,f3,largest);
  return 0;
}
