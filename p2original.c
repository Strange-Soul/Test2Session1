#include<stdio.h>
#include<math.h>

void input_line(float *x, float *y)
{
  printf("Enter the x and y of point \n");
  scanf("%f %f",x,y);
}
int is_triangle(float x1, float y1, float x2, float y2,float x3, float y3)
{
  float a=sqrt(pow((x2-x1),2)+pow((y2-y1),2));
  float b=sqrt(pow((x3-x2),2)+pow((y3-y2),2));
  float c=sqrt(pow((x1-x2),2)+pow((y1-y2),2));
  if(a+b>c || a+b>c || c+a>b )
    return 1;
  else
    return 0;
}
void output(float x1, float y1, float x2, float y2,float x3, float y3, int istriangle)
{
  if(istriangle==1)
    printf("Entered points form triangle \n");
  else
    printf("Entered points don't form triangle \n");
}

int main()
{
  float a1,b1,a2,b2,a3,b3;
  input_line(&a1,&b1);
  input_line(&a2,&b2);
  input_line(&a3,&b3);
  int r=is_triangle(a1,b1,a2,b2,a3,b3);
  output(a1,b1,a2,b2,a3,b3,r);
  return 0;
}