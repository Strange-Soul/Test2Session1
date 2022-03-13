#include<stdio.h>
#include<string.h>

void input_strings(char *string,char *substring)
{
  printf("Enter the String \n");
  scanf("%s",string);
  printf("Enter the Substring \n");
  scanf("%s",substring);
}
int str_index(char *string,char *substring)
{
  int i=0,j=0,value;
  while(string[i]!='\0')
    {
      while(substring[j]!='\0')
        {
          if(substring[j]==string[i])
          {
            i++;
            j++;
            value=i-strlen(substring);
          }
          else
          {
            i++;
          }
        }
    }
  return value;
}
void output(char *string,char *substring,int index)
{
  printf("Index of Substring:%s in String %s is : %d\n",string,substring,index);
}
int main()
{
  char s1[30],s2[30];
  input_strings(s1,s2);
  int n=str_index(s1,s2);
  output(s1,s2,n);
  return 0;
}