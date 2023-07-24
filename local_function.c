#include <stdio.h>
void display();
void addition();
int main(void) {
  display();
  addition();
  printf("Hello World\n");
  
  return 0;
}

void display() {
  printf("Hii Harshal Here\n");
}

void addition (){
  int a,b;
  printf("Enter the Two Number :");
  scanf("%d%d",&a,&b);

  printf("%d\n",a+b);
}
