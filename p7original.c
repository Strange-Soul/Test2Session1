#include<stdio.h>
#include<math.h>

struct _point
{
 float x,y;
};
typedef struct _point Point;

struct _line
{
 Point p1,p2;
 float distance;
};
typedef struct _line Line;

Point input_point()
{
  Point p;
  printf("Enter the x and y of points \n");
  scanf("%f %f",&p.x,&p.y);
  return p;
}
Line input_line()
{
  Line l;
  Point p1,p2;
  p1=input_point();
  p2=input_point();
  l.p1=p1;
  l.p2=p2;
  return l;
}
void find_length(Line *l)
{
 l->distance=sqrt(pow((l->p2.x-l->p1.x),2)+pow((l->p2.y-l->p1.y),2));
}

void output(Line l)
{
  printf("Length of line is %f \n",l.distance);
}
int main()
{
  Line l;
  l=input_line();
  find_length(&l);
  output(l);
  return 0;
}