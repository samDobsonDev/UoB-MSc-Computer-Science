#include <stdio.h>
#include <stdbool.h>

/*
 * Write a function which returns true if a number is divisible by 3 and  
 * false if it is not.  Hint: use the modulo (%) operator.
 *
 * Modify your code so that your function now returns true if a number is divisible 
 * by 3 or 5 and false if it is not.
 *
*/

bool check (int number){
  if (number % 3 == 0) {
    return true;
  }
  else {
    return false;
  }
}

bool check2 (int number) {
  if ((number % 3 == 0) || (number % 5 == 0)) {
    return true;
  }
  else {
    return false;
  }
}

int main(void) {
  int number = 22;
  printf("%d\n", check(number));
  printf("%d\n", check2(number));
  return 0;
}
