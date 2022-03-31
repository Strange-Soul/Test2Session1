#include<stdio.h>
int input_array_size()
{
  int n;
  printf("Enter the size of Array \n");
  scanf("%d",&n);
  return n;
}
void init_array(int n, int a[n])
{
  for(int i=0;i,n;i++)
  {

    a[i]=i;
  }
}
void erotosthenes_sieve(int n, int a[n])
{
  int i=2;
  while(a[i]!='\0')
    {
      
    }
}
void out_put(int n, int a[n])
{
  for(int i=0;i<n;i++)
    {
      if(a[i]!=0)
      {
        printf("%d \t",a[i]);
      }
    }
}
int main()
{
  int n=input_array_size();
  int p[n];
  init_array(n,p);
  erotosthenes_sieve(n,p);
  out_put(n,p);
  return 0;
}