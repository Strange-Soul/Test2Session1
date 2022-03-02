#include<stdio.h>
#include<math.h>

/*Point Declaration*/
struct _point
{
  float x,y;
};
typedef struct _point Point;
/*Line Declaration*/
struct _line
{
Point p1,p2;
float distance;
};
typedef struct _line Line;

Point input_point()
{
  Point p;
  printf("Enter a Point");
  scanf("%f %f",&p.x,&p.y);
  return p;
}
Line input_line()
{
  Line l1,l2;
  printf("Enter the Line \n");
  l1=input_point();
  l2=input_point();
  return l;
}
void find_length(Line *l1,line l2)
{
  l->distance=sqrt(pow((l2->p2.x-l1->p1.x),2)+(l2->p2.y-l1->p1.y),2);
}
void output(Line l1,Line l2)
{
  printf("Length of Line from the points %f %f and  %f %f is\n",l.p1.x,l.p1.y,l.p2.x,l.p2.y);
  printf("%f \n",distance);
}
int main()
{
  Point x,y;
  Line p,q;
  x=input_point();
  y=input_point();
  p=input_line();
  q=input_line(&p,&q);
  find_length(p,q);
  output(z);
  return 0;
}