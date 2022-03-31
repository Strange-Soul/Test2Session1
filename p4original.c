#include<stdio.h>
int input()
{
  int n;
  printf("Enter Any Number To Find Fibonaci series \n");
  scanf("%d",&n);
  return n;
}
int find_fibo(int n)
{
 int i,fibo;
 int x=0;
  int y=1;
  for(i=2;i<n;i++)
    {
      fibo=x+y;
      x=y;
      y=fibo;
    }
  
  return y;
}
void output(int n,int fibo)
{
 printf("Fibonacci series is %d \n",fibo);
}
int main()
{
  int n,result;
  n=input();
  result=find_fibo(n);
  output(n,result);
  return 0;
}
