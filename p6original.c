#include<stdio.h>
#include<string.h>

void input_string(char *a)
{
  printf("Enter the string \n");
  scanf("%s",a);
}
int str_index(char *string, char *substring)
{
  int i=0,j=0,n;
  while(string[i]!='\0')
    {
     for(;string[i]!='\0' && string[i]!=substring[0];i++)
       {
         n=i;
       }
      if(string[i]=='\0')
        return (-1);
      for(;string[i]==substring[j] && string[i]!='\0';)
        {
          i++;
          j++;
        }
  if(substring[j]=='\0')
    return n;
  if(string[i]=='\0')
    return -1;

  i++;
      
    }
  return 0;
}
void output(char *string,char *substring,int index)
{
  if(index==-1)
    printf("Index of substring : %s in string : %s not found \n",substring,string);
  else
    printf("Index of substring : %s in String : %s is : %d \n",string,substring,index+1);
}
int main()
{
  char s1[30],s2[30];
  input_string(s1);
  input_string(s2);
  int result=str_index(s1,s2);
  output(s1,s2,result);
  return 0;
}
