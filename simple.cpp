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


Simple *arr[100];

void init(){
  printf("Init fuction has turned on \n");
  for (int i=0; i<100; i++)
    arr[i] = NULL;
}

void testfill()
{
  for (int i=0; i<100; i++)
    arr[i] = new Simple ();
}

void showAll()
{
  for (int i = 0; i<100; i++)
    arr[i]->show();

    //else
}

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
  init();
  testfill();
  showAll();
}