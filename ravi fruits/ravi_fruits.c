#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>


int solveMeSecond(int a, int b) {
  return (a*(a+1)*(a+2))/6;
}
int main() {
  int t,i;
  scanf("%d",&t);
  int num1,num2;
  int sum;
  for ( i = 0;i < t; i++ ) {
    scanf("%d %d",&num1,&num2);
    sum = solveMeSecond(num1,num2);
    printf("%d\n",sum%num2);

  }
  return 0;
}
