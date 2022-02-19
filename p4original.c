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
 int i,fibbo,x,y,z;
  for(i=0;i<n;i++);
  {
   z=x+y;
   i=x;
   x=y;
   y=z;
  }
  return fibbo;
}
void output(int n,int fibo)
{
  for(int i=0;i<n;i++)
    {
      printf("%d,",i);
    }
  printf("Fibonacci series %d Numbers is %d \n",n,fibo);
}
int main()
{
  int n,result;
  n=input();
  result=find_fibo(n);
  output(n,result);
  return 0;
}
