#include <stdio.h>
int main(){
  int a,b,temp;
  printf("Enter a number:");
  scanf("%d",&a);
  printf("Enter another number:");
  scanf("%d",&b);
  printf("a=%d\n",a);
  printf("b=%d\n",b);
  temp=a;
  a=b;
  b=temp;
  printf("after swapping\n");
  printf("a=%d\n",a);
  printf("b=%d\n",b);
  return 0;
}