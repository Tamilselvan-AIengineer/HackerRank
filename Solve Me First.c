/*Complete the function Solve Me First to compute the sum of two integers.

Example
int a= 7
int b = 3
return 10
*/

#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>


int solveMeFirst(int a, int b) {
  return a+b;
}
int main() {
  int num1,num2;
  scanf("%d %d",&num1,&num2);
  int sum; 
  sum = solveMeFirst(num1,num2);
  printf("%d",sum);
  return 0;
}
