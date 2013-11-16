#include <stdio.h>
#include "simple.h"


Simple::Simple(){
  val=0;
  printf ("hello\n");
}

Simple::~Simple()
{
  printf("destructor\n");
}

int Simple::getVal()
{
  return val;
}

void Simple::setVal(int ival)
{
  val = ival;
}

void Simple::show()
{
  printf("%d \n",val);
}

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
}

void deleteAll()
{
  for (int i=0; i<100; i++)
    delete arr[i];
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
  deleteAll();
}
