#include <stdio.h>

/*
 * Complete the fibonacci function below such that it calculates the 
 * nth term of the Fibonacci sequence using iteration.
 * 
 * The first 4 terms of the Fibonacci sequence in this example 
 * are  1, 1, 2, 3
 *
 * For example if we call fibonacci(1) we should get the value 1 returned,
 * if we call fibonacci(4) we should get the value 3 returned. 
 */

int fibonacci3(int term){
  int x = 0;
  int y = 1;
  int sum;

  for (int i = 1; i < term; i++) {
    sum = x + y;
    x = y;
    y = sum;
  }
  return sum;
}

int main(void) {
  printf("\n\nThe 4th Fibonacci Number is: %d", fibonacci3(4));
  printf("\nThe 7th Fibonacci Number is: %d", fibonacci3(7));
  return 0;
