#include<stdio.h>
void input_string(char *a)
{
  printf("Enter the string \n");
  scanf("%s",a);
}
int str_reverse(char *string,char *substring)
{
  int r,i,j;
  for(int i=0;string[i]!='\0';i++);
   for(int j=0;substring[j]!='\0';j++)
     {
       substring[j]=string[i];
       i--;
     }
  return r;
}
void output(char *string,char *substring,int index)
{
  for(int i=0;string[i]=substring[i];i++)
  if(index)
  {
    printf("%d is index of SubString %s",i,substring);
  }
}
int main()
{
  int result;
  char s[20];
  char sub_s[20];
  input_string(s);
  result=str_reverse(s,sub_s);
  output(s,sub_s,result);
  return 0;
}
