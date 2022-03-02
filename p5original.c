#include<stdio.h>
#include<math.h>
int input_array_size()
{
  int n;
  printf("Enter the size of array \n");
  scanf("%d",&n);
  return n;
}
void init_array(int n,int a[n])
{
  for(int i=0;i<n;i++)
    {
      a[i]=i;
      //a[0]=0;
      //a[1]=0;
    }
}
void erotosthenes_sieve(int n,int a[n])
{
  int i=2;
  while(i<sqrt(n))
    {
      while(a[i]==0)
        i++;
      for(int j=i+i;j<n;j+=i)
        {
          a[j]=0;
          a[1]=0;
        }
      i++;
    }
}
void output(int n,int a[n])
{
  int i;
  for(i=0;i<n;i++)
    if(a[i]!='\0')
    {
      printf("%d ",a[i]);
    }
  printf("\n");
}
int main()
{
  int x;
  x=input_array_size();
  int y[x];
  init_array(x,y);
  erotosthenes_sieve(x,y);
  output(x,y);
  return 0;
}
    
  