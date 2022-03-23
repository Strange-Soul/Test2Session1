/*#include<stdio.h>
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

struct _polygon
{
 int n;
 Line l[100];
 float perimeter;
};
typedef struct _polygon Polygon;

int input_n()
{
  int n;
  printf("Enter the Number of Sides forming a polygon \n");
  scanf("%d",&n);
  return n;
}

Point input_point()
{
  Point p;
  printf("Enter the Points of Line X & Y \n");
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
  l.distance=sqrt(pow((p2.x-p1.x),2)+pow((p2.y-p1.y),2));
  return l;
}
void input_n_lines(int n,Line l[n])
{
  for(int i=0;i<=n;i++)
    {
      l[i]=input_line();
    }
}
void input_polygon(int n,Polygon *p)
{
  printf("Enter the Polygon \n");
  p->n=n;
  input_n_lines(n,p->l);
}
/*void find_n_length(int n,Line *l[n])
{
for(int i=0;i<n;i++)
  l->distance=sqrt(pow((p2.x-p1.y),2)+pow(p2.y-p1.y),2);
}*/
/*void find_perimeter(int n,Polygon *p)
{
 p->perimeter =0;
  for(int i=0;i<n;i++)
  p->perimeter += p->l[i].distance;
}
void output(Polygon p)
{
  printf("Perimeter of Polygon is %f \n",p.perimeter);
}
int main()
{
  int n=input_n();
  Polygon p;
  if(n==2 || n==1 || n==0)
  {
    printf("It does not form's a Polygon \n");
  }
  else
  {
    input_polygon(n,&p);
  find_perimeter(n,&p);
  output(p);
  }
  return 0;
}*/



#include<stdio.h>

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

struct _polygon
[
 int n;
Line[100];
float perimeter;
];
typedef struct _polygon Poly;


int input_n()
{
  int n;
  printf("Enter the  number of Sides \n");
  scanf("%d",&n);
  return n;
}
int input_polygon(int n,Polygon *p)
{
  Poly num=
}




