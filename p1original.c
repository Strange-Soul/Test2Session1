#include<stdio.h>
#include<math.h>
void input(float *x1,float *y1,float*x2,float *y2)
{
  printf("Enter first Points To Find Distance \n");
  scanf("%f %f",x1,y1);
  printf("Enter second Points To Find Distance \n");
  scanf("%f %f",x2,y2);
}
void find_distance(float x1,float y1,float x2,float y2,float *area)
{
  *area=sqrt((x2-x1)*(x2-x1)+(y2-y1)*(y2-y1));
  //*area=sqrt(pow(x2-x1,2)+pow(y2-y1,2)*1.0)
}
void output(float x1,float y1,float x2,float y2,float area)
{
  printf("Distance between point (%f , %f) and (%f , %f)is : %f \n",x1,y1,x2,y2,area);
}
int main()
{
  float a1,b1,a2,b2,result;
  input(&a1,&b1,&a2,&b2);
  find_distance(a1,b1,a2,b2,&result);
  output(a1,b1,a2,b2,result);
  return 0;
}