#include <stdio.h>
#include <string.h>

 struct Std
{
  int r;
  char name[50];
  double per;

  
 };
struct Std s;
int main(void) {
  
  fflush(0);
  printf("Enter the Student Roll no :");
  scanf("%d",&s.r);
  fflush(0);
  printf("\nEnter the Name :");
  scanf("%c",&s.name);
  fflush(0);
  printf("\nEnter the Percentage  :");
  scanf("%lf",&s.per);

  //PRINTF 
  printf("\n%d",s.r);

  printf("\n%c",s.name);

  printf("\n%lf",s.per);
  
  return 0;
}
