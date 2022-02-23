#include<stdio.h>
int input_array_size()
{
  int x;
  printf("enter the size of array\n");
  scanf("%d",&x);
  return x;
}
int is_prime(int n)
{
  int i,c=0;
  for (i=2;i<n;i++)
    {
      if (n%i==0)
      {
        c=1;
        break;
      }
    }
  return c;
}
void init_array(int n, int a[n])
{
  printf("enter the values\n");
  for(int i=0;i<n;i++)
  {
    scanf("%d",&a[i]);
  }
}
void erotosthenes_sieve(int n, int a[n])
{
  int c=0;
  char b[];
  for(int i=0;i<n;i++)
  {
    if (is_prime(a[i])==1)
    {
      scanf("s",b[i]);
    }
  }
  return b;
}
void output(int n,int b[i])
{
  printf("the prime numbers of the entered numbers are",);
}
int main()
{
  int n ,sum;
  n = input_array_size();
  int a[n];
  input_array(n,a);
  output();
  return 0;
}