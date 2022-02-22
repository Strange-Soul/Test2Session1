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
  for(i=0;i<n;i++)
    {
      fibo=y+i-x;
      x=y;
      y=fibo;
    }
   fibo++;
  return fibo;
}
void output(int n,int fibo)
{
  printf("Fibonacci Series of %d number is \n",n);
  for(int i=0;i<n-1;i++)
    {
      printf("%d \t",i);
      printf("%d \t",n-1);
    }
    
 printf(" Sum of %d Fibonacci Series is: %d \n",n,fibo);
}
 
int main()
{
  int n,result;
  n=input();
  result=find_fibo(n);
  output(n,result);
  return 0;
}
