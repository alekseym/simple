#include <stdio.h>

class Simple {
public:
  int val;
public:

Simple(){
  val=0;
}

void show(){
  printf("%d \n",val);
}
};

int main (){
  Simple a;
  a.show();

}