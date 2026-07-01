#include <stdio.h>
int main(){
  int a,b,c,sum,avg;
  printf("1st=");
  scanf("%d",&a);
  printf("2nd=");
  scanf("%d",&b);
  printf("3rd=");
  scanf("%d",&c);
  sum=a+b+c;
  printf("Sum of these numbers is %d\n",sum);
  avg=sum/3;
  printf("avg of 3 numbers is %d",avg);
  return 0;

}