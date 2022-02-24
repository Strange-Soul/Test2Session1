#include<stdio.h>
#include<math.h>gcc -g p5ori
int input_array_size()
{
  int n;
  printf("Enter size of array \n");
  scanf("%d",&n);
  return n;
}
void init_array(int n,int a[n])
{
  for(int i=0;i<n;i++)
    {
      a[i]=i;
      a[0]=0;
      a[1]=0;
    }
}
void erotosthenes_sieve(int n,int a[n])
{
  int i,j;
  while(i<sqrt(n))
    {
      while(a[i]==0) i++;
      for(j=2*i;j<n;j=j+i)
          {
            a[j]=0;
          }
      i++;
      }
}
void out_put(int n,int a[n])
{
  for(int i=0;i<n;i++)
    {
      if(a[i]!=0)
      {
        printf("%d ",a[i]);
      }
      printf("\t");
    }
}
int main()
{
  int x,y,result;
  x=input_array_size();
  int p[x];
  init_array(x,p);
  erotosthenes_sieve(x,p);
  out_put(x,p);
  return 0;
}