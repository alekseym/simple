#include <stdio.h>

class Simple {
public:
  int val;
public:

Simple(){
  val=0;
  printf ("hello\n");
}

~Simple()
{
  printf("destructor\n");
}

int getVal()
{
  return val;
}

void setVal(int ival)
{
  val = ival;
}

void show()
{
  printf("%d \n",val);
}
};


Simple g;



int main (){
  Simple *d;

  d=new Simple();

  printf("d=%d\n", d->getVal());


  d->show();

  printf("point1\n");
  Simple a;
  Simple b;
  Simple c;
  printf("point2\n");
  a.show();
  printf("point3\n");
  delete d;
}