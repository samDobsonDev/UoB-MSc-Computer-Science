#include <stdio.h>
#include <math.h>

/*
 * Using the math.h library (imported already), 
 * 
 * 1. Complete the pow3 function below so that takes as an argument a double and 
 * returns that value raised to the power of 3 
 * (hint use the pow function in the math library)
 *
 * 2. Create a function that takes as an argument a double and return the natural log 
 * of that value.  
 *
 * Demonstrate your functions by calling them the main function and printing out the
 * values returned 
*/

double pow3(double base){
  double result;
  int power = 3;
  result = pow(base, power);
  printf("%f\n", result);
  return result;
}

double natLog(double value) {
  double result;
  result = log(value);
  printf("%f\n", result);
  return value;
}

int main(void) {
  double base = 3.0;
  double value = 1.5;
  pow3(base);
  natLog(value);
  return 0;
}
