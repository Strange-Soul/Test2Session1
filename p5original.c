#include<stdio.h>
int input_array_size()
{
  int n;
  printf("Enter the size of Array \n");
  scanf("%d",&n);
  return n;
}
void init_array(int n, int a[n]
{
  for(int i=0;i,n;i++)
  {
    a[i]=0;
  }
}
void erotosthenes_sieve(int n, int a[n])
{
  int i,j;
  for(i=0;i<n;i++)
    {
      for(j=2;j<n;j++)
        {
          if(a[i]%2==0)
            a[i]=0;
        }
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
  output(n,p);
  return 0;
}