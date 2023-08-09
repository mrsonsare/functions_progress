#include <stdio.h>
void swap();
int main(void) {
  int a,b;
  printf("Enter the Values of A & B :");
  scanf("%d%d",&a,&b);
  printf("Before Swaping a= %d b= %d \n",a,b);
 swap(&a,&b);
  printf("\nAfter Swaping a= %d b= %d",a,b);
  return 0;
}
void swap(int *a,int *b)
{ 
  int c;
printf("%d%d",*a,*b);
  c=*b;
  *b=*a;
  *a=c;
}
