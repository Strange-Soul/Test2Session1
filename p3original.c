#include<stdio.h>

int input_number()
{
  int n;
  printf("Enter the number to find prime or not\n");
  scanf("%d",&n);
  return n;
}
int is_prime(int n)
{
  int i;
  for(i=2;i<n;i++)
    {
      if(n%i==0)
        return 1;
    }
  return 0;
}
void output(int n, int is_prime)
{
  if(n==0 || n==1)
  {
    printf("%d is neither prime nor composite \n",n);
    }
   else if(is_prime==1)
  {
    printf("%d is a composite number \n",n);
  }
  
  else
    printf("%d is a prime number \n",n);
}
int main()
{
  int n=input_number();
  int result=is_prime(n);
  output(n,result);
  return 0;
}