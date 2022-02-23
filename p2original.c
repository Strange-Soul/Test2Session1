#include<stdio.h>
#include<math.h>
void input_line(float *x1,float *y1,float *x2,float *y2,float *x3,float *y3)
{
  printf("Enter First point (x1,y1)\n");
  scanf("%f %f",x1,y1);
  printf("Enter Second point (x2,y2)\n");
  scanf("%f %f",x2,y2);
  printf("Enter Third point (x3,y3)\n");
  scanf("%f %f",x3,y3);
}
int is_triangle(float x1,float y1,float x2,float y2,float x3,float y3)
{
  int d,a;
  d=(x1*(y2-y3)+x2*(y3-y1)+x3*(y1-y2));
  return d;
}
void output(float x1,float y1,float x2,float y2,float x3,float y3 ,int is_triangle)
{
  if(is_triangle==0)
  {
    printf("Enter points  do not Form Triangle\n");
  }
  else
    printf("Enter points  form Triangle\n");
}
int main()
{
  float a1,b1,a2,b2,a3,b3,result;
  input_line(&a1,&b1,&a2,&b2,&a3,&b3);
  result=is_triangle(a1,b1,a2,b2,a3,b3);
  output(a1,b1,a2,b2,a3,b3,result);
  return 0;
}