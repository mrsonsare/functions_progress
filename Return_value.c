#include <stdio.h>
int Area(int);
int main(void) {
  int x,y;
  
  printf("Enter the Radius :");
  scanf("%d",&x);
  
  y= Area(x);
  printf("Area of Circle Is  %d",y);
  return 0;
}

int Area(int r) {
  int a;
  a=3.14*r*r;
  return(a);
}
