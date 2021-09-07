#include <stdio.h>

/*
 * The code below contains some errors.
 *
 * Debug the code to get it to run.
 * 
 * Question: what types of errors have been made? logical, runtime or syntax?
*/

// this function takes a double n and returns n multiplied by itself 
int my_function(double n){
  double n2 = n*n;
  //printf("%lf", n2);
  return n2;
}

int main(void) {
  int value = 42;
  double processed_value = my_function(value);
  printf("The initial value was %d", value); 
  printf(" and the processed value is %lf\n", processed_value);
  return 0;
}
