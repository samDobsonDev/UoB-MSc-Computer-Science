#include <stdio.h>

/* 
 * Complete the recursive function below which performs multiplication of two 
 * numbers without using the inbuilt * sign
 */

int multiply(int number, int by) {
  if (by == 0) {
      return 0;
  }
  else {
    return number + multiply(number, by - 1);
  }
}

int main(void) {
  printf("The multiplication of 2 by 3 is %d\n", multiply(2,3));
  return 0;
}

/*

 * 1st Function Call (Line 18): number = 2, by = 3 ---> returns 6
 * 2nd Function Call (Line 13): number = 2, by = 2 ---> returns 4
 * 3rd Function Call (Line 13): number = 2, by = 1 ---> returns 2
 * 4th Function Call (Line 13): number = 2, by = 0 ---> returns 0

*/
