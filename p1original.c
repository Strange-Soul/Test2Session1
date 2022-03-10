#include<stdio.h>
#include<math.h>
int input_array_size()
{
  int n;
  printf("Enter the size of Array \n");
  scanf("%d",&n);
  return 0;
}
void init_array(int n,int a[n])
{
  //a[0]=0;
  //a[1]=0;
  for(int i=2;i<n;i++)
    {
      a[i]=i;
    }
}
void erotosthenes_sieves(int n,int a[n])
{
 int i=2;
  while(i<sqrt(n))
    while(a[i]='\0')
      {
    i++;
   for(int j=2*i;j<n;j++)
    {
      a[j]=0;
      a[1]=0;
    }
    i++;
   }
}
void output(int n,int a[n])
{
for(int i=1;i<n;i++)
    if(a[i]!='\0')
    {
     printf("%d",a[i]);
    }
  printf("\n");
}
int main()
{
  int x=input_array_size();
  int p[x];
  init_array(x,p);
  erotosthenes_sieves(x,p);
  output(x,p);
  return 0;
}