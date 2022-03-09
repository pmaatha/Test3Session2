#include <stdio.h>
struct_fraction
{
  int num,den;
};
typedef_fraction Fraction;
int find_gcd(int a,int b);
{
  int t;
  while(b!=0)
    {
      t=b;
      b=a%b;
      a=t;
    }
  return a;
}
int input_n()
{
  printf("enter n\n");
  scanf("%d%d",&f.num,&f.den);
  return n;
}
void input_in_fractions(int n,Fraction f[n])
{
  for(int=0;i<n;i++)
    {
      f[i]=input_fraction();
    }
}
Fraction add_fractions(Fraction f1,Fraction f2)
{
Fraction sum;
  sum.num=f1.num*f2.den+f2.num*f1.den;
  sum.den=f1.den*f2.den;
  int g=find_gcd(sum.num,dum.den);
  sum.num=sum.num/g;
  sum.den=sum.den/g;
  return sum;
}
Fraction add_n_fractions(int n,Fraction f[n])
{
  Fraction sum;
  sum=f[0];
  for(int i=1;i<n;i++)
    {
      sum=add_fractions(sum,f[i]);
    }
}
void ouput(Fraction f1,Fraction f2,Fraction sum)
{
  printf("the sum of fractions %d/%d and %d/%d is %d/%d",f1.num,f1.den,f2.num,f2.den,sum.num,sum.den);
}
void output(Fraction f1,Fraction f2,Fraction sum)
{
  for(int i=0;i<n;i++)
    {
      printf("%d/%d+",f[i].num,f[i].den)
    }
  printf("%d/%d",f[i].num,f[i].den);
  printf("is %d/%d\n",sum.num,sum.den);
}
int main()
{
  int n,sum;
  n=input_n();
  Fraction f[n],sum;
  input_n_fraction(n,f);
  sum=add_n_fractions(n,f);
  output_n_fractions(n,f,sum);
  return 0;
}