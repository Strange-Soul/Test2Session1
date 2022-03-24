#include<stdio.h>
#include<math.h>


int input_array_size()
{
  int n;
  printf("Enter the size of array \n");
  scanf("%d",&n);
  return n;
}
void init_array(int n, int a[n])
{
  for(int i=0;i<n;i++)
    a[i]=i;

}
void erotosthenes_sieves(int n, int a[n])
{
  int i=2;////bec a[0]=0 & a[1]=0 bec not prime
  while(i<sqrt(n))
    {
      while(a[i]==0)
        i++;
      for(int j=i+i;j<n;j+=i)
        {
          a[j]=0;
          a[0]=0;
          a[1]=0;
        }
      i++;
    }
}
void out_put(int n, int a[n])
{
  for(int i=0;i<n;i++)
    {
      if(a[i]!=0)
        printf("%d \t",a[i]);
    }
}
int main()
{
  int n=input_array_size();
  int p[n];
  init_array(n,p);
  erotosthenes_sieves(n,p);
  out_put(n,p);
  return 0;
}


