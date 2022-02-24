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
  int p;
  if(p==0 || p==1)
  {
    return p;
  }
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
    printf("%d is neither prime nor composite \n",n);
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