#include <stdio.h>

int main(void) {
  int a,*p;
  a =10;
  p = &a ;
    //then
    printf("%d\n",a);
  printf("%d\n",*p);
  ++*p;
  printf("%d\n",*p);
  return 0;
}
