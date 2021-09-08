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
  int prev = 0;
  int current = 1;
  int next;

  for (int i = 1; i < term; i++) {
    next = prev + current;
    prev = current;
    current = next;
  }
  return current;
}

int main(void) {
  printf("\nThe 1st Fibonacci Number is: %d", fibonacci3(1));
  printf("\nThe 4th Fibonacci Number is: %d", fibonacci3(4));
  printf("\nThe 7th Fibonacci Number is: %d", fibonacci3(7));
  return 0;
}
