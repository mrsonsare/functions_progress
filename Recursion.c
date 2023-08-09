#include <stdio.h>
void display();
int main(void) {
  int n ;
printf("Enter the Number :");
scanf("%d",&n);
  display(n);
  
  return 0;
}
void display(int n){
  static int i=1;
  if(i>n)
  return 0;
  
printf("%d\n",i);
  ++i;
  display(n);
  
  
}
