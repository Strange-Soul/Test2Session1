#include<stdio.h>
#include<math.h>
void input_line(float *x1,float *y1 ,float *x2,float *y2,float *x3,float *y3)
{
  printf("Enter Three points of Triangle \n");
scanf("%f %f %f %f %f %f",x1,y1,x2,y2,x3,y3);
}
int is_triangle(float x1,float y1,float x2,float y2,float x3,float y3 )
{
  int is_tri;
  int d1,d2,d3;
  d1=sqrt(pow((x2-x1),2)+pow((y2-y1),2));
  d2=sqrt(pow((x3-x2),2)+pow((y3-y2),2));
  d3=sqrt(pow((x1-x3),2)+pow((y1-y3),2));
  if(d1+d2>d3 && d2+d3>d1 && d1+d3>d2)
  {
    return 1;
  }
  else
    return 0;
  return is_tri;
}
void output(float x1,float y1,float x2,float y2,float x3,float y3,int is_triangle)
{
   if(is_triangle==1)
   {
     printf("Entered lines having points  (%f,%f)_(%f,%f)_(%f,%f) are in Triangle \n",x1,y1,x2,y2,x3,y3);
   }
  else
     printf("Entered lines having points (%f,%f)_ (%f,%f)_ (%f,%f) are  not in Triangle \n",x1,y1,x2,y2,x3,y3);
}
int main()
{
  float a1,b1,a2,b2,a3,b3;
  input_line(&a1,&b1,&a2,&b2,&a3,&b3);
  int result;
  result=is_triangle(a1,b1,a2,b2,a3,b3);
  output(a1,b1,a2,b2,a3,b3,result);
  return 0;
}