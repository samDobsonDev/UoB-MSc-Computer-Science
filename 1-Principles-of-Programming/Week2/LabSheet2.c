#include <stdio.h>
#include <math.h>

/* 
 * Lab Sheet 2:
 */

/* Question 1: 
 
 Complete the function below which takes in an integer input between zero and one hundred (0 ≤ n ≤ 100) and prints out the number expressed in English text, with spaces and no dashes (–), e.g. for the number “33”, we would expect to see “thirty three”. Hint: you may want to create additional functions to help.
 
 Call this function from the main to test your program.
 */

void numberToText(int value){

  //character array to represent digits (0-9) - 10 numbers
  //character array to represent teens (10 - 19) - 10 numbers
  //character array to represent tens ("", "", 20, 30, 40, 50, 60, 70, 80, 90)

  //if value < 0
    //print "value must be between 0-99 (inclusive)"
  //else if value < 10
    //print relevant index from digit array[value % 10]
  //else if value < 20
    //print relevant index from teens array[value % 10]
  //else if value < 100
    //int multiple_of_ten = value / 10;
    //print relevant index from tens array[multiple_of_ten] + digit array[value % 10]
  //else
    //print "value must be between 0-99 (inclusive)"

  char *digits[] = {"zero", "one", "two", "three", "four", "five", "six", "seven", "eight", "nine"};
  char *teens[] = {"ten", "eleven", "twelve", "thirteen", "fourteen", "fifteen", "sixteen", "seventeen", "eighteen", "nineteen"};
  char *tens[] = {"", "", "twenty", "thirty", "forty", "fifty", "sixty", "seventy", "eighty", "ninety"}; 
  // need 10 entries so we can divide by 10 to find the relevant index

  if (value < 0) {
    printf("\nvalue must be between 0-99 (inclusive)");
  } else if (value < 10) {
    printf("\n%s\n", digits[value % 10]);
  } else if (value < 20) {
    printf("\n%s\n", teens[value % 10]);
  } else if (value < 100) {
    int multiple_of_ten = value / 10; 
    // working out which index to use in tens array. E.g 90/10 = 9. 9 = "ninety"
    printf("\n%s %s\n", tens[multiple_of_ten], digits[value % 10]);
  } else {
    printf("value must be between 0-99 (inclusive)");
  }
}

/* Question 2: 
 
 Complete the function below that calculates, and returns, the distance between two points.
 
 Call this function from the main to test your program. Hint: may wish to use the following print statement in your main function, or similar: 

 printf("%1.2f\n", calculateDistance(0, 0, 4, 3));
 */

double calculateDistance(int x1, int y1, int x2, int y2){
  // formula: square root: ^2(x2-x1)+^2(y2-y1)
  double xDiff = x2 - x1; 
  double yDiff = y2 - y1;
  double distance = sqrt(pow(xDiff, 2) + pow(yDiff, 2));
  return distance;
}

/* Question 3: 
 
 Complete the function below that is given an integer, n, where 1 ≤ n ≤ 9999 and prints whether it is even, odd, or/and prime.  The output should be whole sentences for example, 

 1 is odd and not prime.
 2 is even and prime.
 3 is odd and prime.
 4 is even and not prime.
 5 is odd and prime
 
 Call this function from the main to test your program.
 */

int primeCheck(int number) {
  for (int i = 2;i < number ;i++) {
    if (number % i == 0) { //divide by i, check if it equals 0. If it doesn't, increase i by 1 until you reach number - 1.
      return 0;
    }
  }
  return 1;
}

void printOddEvenAndOrPrime(int n){
  // is it even or odd? if n % 2 == 0 print even, else print odd
  if (n <= 0) {
    printf("\nvalue must be between 1-9999 (inclusive)");
  } if (n % 2 == 0) { //if its even
      if (n == 2) { //if its 2
        printf("\n%d is even and prime", n); 
      } else {
        printf("\n%d is even and not prime", n);
      }
    }

    if (n % 2 != 0) { //if its odd
      if (primeCheck(n) == 1) { //give the number to the primeCheck function. if it returns 1...
        printf("\n%d is odd and prime", n); 
      } else {
        printf("\n%d is odd and not prime", n);
      }
    }
}

int main(void){
  numberToText(33);
  printf("\n%1.2f\n", calculateDistance(0, 0, 4, 3)); // printf width = 1, precision = 2
  printOddEvenAndOrPrime(9463);
  return 0;
}
