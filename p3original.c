#include<stdio.h>
int input_number()
{
  int n;
  printf("Enter Any Number To Check Whether it is Prime or Not\n");
  scanf("%d",&n);
  return n;
}
int is_prime(int n)
{
  for(int i=2;i<n;i++)
    {
      if((n%i)==0)
      return 1;
    }
  return 0;
}
void output(int n,int is_prime)
{
  if(is_prime==1)
    printf("%d is Not Prime number\n",n);
  else
    printf("%d is  Prime Number \n",n);
}
int main()
{
  int n,result;
  n=input_number();
  result=is_prime(n);
  output(n,result);
  return 0;
  }