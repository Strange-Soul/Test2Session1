#include<stdio.h>
#include<math.h>

/*Point Declaration*/
struct_point
{
  float x,y;
};
typedef struct_point Point;
/*Line Declaration*/
struct _line
{
Point p1,p2;
float distance;
};
typedef struct_line Line;

Point input_point()
{
  Point p;
  printf("Enter a Point");
  scanf("%f %f",p.x,p.y);
  return p;
}
Line input_line()
{
  Line l;
  printf("Enter the Line \n");
  scanf("%f %f",l.p1,l.p2);
  return l;
}
void find_length(Line *l)
{
  l->length=sqrt(pow(())
}
void output(Line l)
{
  printf("Length of Line is %f \n",l.p1,l.p2);
}
int main()
{
  Point x,y;
  Line z;
  x=input_point();
  y=input_point();
  z=input_line();
  find_length(&y);
  output(y);
  return 0;
}