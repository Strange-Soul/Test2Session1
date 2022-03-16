#include<stdio.h>

#include<string.h>

void input(char *a,char b[])
{
  printf("Enter the string \n");
  scanf("%s",a);
  printf("Enter the substring \n");
  scanf("%s",b);
}
int str_cmp(char *a,char *b)
{
  for(int i=0; a[i]==b[i] && a[i]!='\0';i++)
    {//w-h=...
      
    }
  return (a[i]-b[i]);

}
int str_index(char *a,char *b)
{
  int l1=strlen(a);
  int l2=strlen(b);
  int k=0;
  for(int i=0;i<l1-l2;i++)
    {
      k=i;
    }
  return k;
}
int main()
{
  char string[20],substring[20];
  input(string,substring);
  printf("Index of substring:%s in string:%s is :%d \n",string,substring,str_index(string,substring));
  return 0;
}