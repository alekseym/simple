#include <stdio.h>

class Simple {
public:
  int val;
public:

Simple(){
  val=0;
  printf ("hello\n");
}

void show()
{
  printf("%d \n",val);
}
};

int main (){
  printf("point1\n");
  Simple a;
  Simple b;
  Simple c;
  printf("point2\n");
  a.show();
  printf("point3\n");
}