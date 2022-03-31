/*#include<stdio.h>
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
     for(i=0;string[i]!='\0' && string[i]!=substring[0];i++);
      
      if(string[i]=='\0')
        return (-1);
      n=i;
      for(i=0,j=0;string[i]==substring[j] && string[i]!='\0';i++,j++)
        
  if(substring[j]=='\0')
    return n;
  if(string[i]=='\0')
    return -1;

  i++;
      
    }
  i=n+1;
  j=0;
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
}*/




#include<stdio.h>

void input_string(char *a)
{
  printf("Enter the  String \n");
  scanf("%s",a);
}
void input_substring(char *b)
{
  printf("Enter the substring \n");
  scanf("%s",b);
}
int str_reverse(char *string, char *substring)
{
  int i,j=0;
  for(i=0;string[i]!='\0' && substring[j]!='\0';i++)
    {
      if(string[i]==substring[j])
      {
        j++;
      }
      else if(j!=0)
        j=0;
    }
   if(j!=0)
     return i-j;
  return (-1);
  }
void output(char *string, char *substring, int index)
{
  printf("Index of substring : %s in string : %s is %d \n",string,substring,index);
}
int main()
{
  char s1[40],s2[40];
  input_string(s1);
  input_substring(s2);
  int result=str_reverse(s1,s2);
  output(s1,s2,result);
  return 0;
}


