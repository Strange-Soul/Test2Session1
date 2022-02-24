#include<stdio.h>
#include<math.h>
void input_line(float *x1,float *y1)
{
  printf("Enter First point (x1,y1)\n");
  scanf("%f %f",x1,y1);
}
int is_triangle(float x1,float y1,float x2,float y2,float x3,float y3)
{
   float a,b,c;
  a=sqrt(pow((x2-x1),2)+pow((y2-y1),2));
  b=sqrt(pow((x3-x2),2)+pow((y3-y2),2));
  c=sqrt(pow((x1-x3),2)+pow((y1-y3),2));
  if((a+b)>c && (b+c)>a && (c+b)>a)
    return 1;
  else
    return 0;
}
void output(float x1,float y1,float x2,float y2,float x3,float y3 ,int is_triangle)
{
  if(is_triangle)
  {
    printf("Enter points  Form Triangle\n");
  }
  else
    printf("Enter points  don't form Triangle\n");
}
int main()
{
  float a1,b1,a2,b2,a3,b3,result;
  input_line(&a1,&b1);
  input_line(&a2,&b2);
  input_line(&a3,&b3);
  result=is_triangle(a1,b1,a2,b2,a3,b3);
  output(a1,b1,a2,b2,a3,b3,result);
  return 0;
}