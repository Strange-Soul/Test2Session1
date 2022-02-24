#include<stdio.h>
#include<math.h>
int input_number()
{
  int n;
  printf("Enter any Number \n");
  scanf("%d",&n);
  return n;
}
int is_prime(int n)
{
  for(int i=2;i<sqrt(n);i++)//sqrt(n)=n/sqrt(n);
    {
      if((n%i)==0)
        return 1;
    }
  return 0;
}
void output(int n,int is_prime)
{
  if(n==0 || n==1)
  {
    printf("%d is not a prime number \n",n);
  }
  else if(is_prime==1)
  {
    printf("%d is not Prime Number \n",n);
  }
  else
    printf("%d is Prime Number \n",n);
}
int main()
{
 int n,result;
  n=input_number();
  result=is_prime(n);
  output(n,result);
  return 0;
}