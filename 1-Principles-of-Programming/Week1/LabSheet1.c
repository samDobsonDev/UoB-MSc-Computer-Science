#include <stdio.h>
#include <math.h>

/* 
 * Lab Sheet 1:
 */

 /* Question 1: 
 
 Adapt the “HelloWorld” code below to produce a program that defines a variable capable of holding an integer of your choice. The program should add 3 to that number, multiply the result by 2, subtract 4, subtract twice the original number, add 3, then print the result and a new line.
 */
 
void printHelloWorld(void){
  int i = 1;
  int i2 = i * 2;
  int result = ((i + 3) * 2) - 4 - i2 + 3;
  printf("%d\n", result);
}

 /* Question 2: 
 
 Complete the function below so that it prints every integer from x to x + 10.  Do not use loops. 
 
 Call this function from the main to test your program.
 */

void printXTenTimes(int x){
  printf("%d\n", x);
  printf("%d\n", x+1);
  printf("%d\n", x+2);
  printf("%d\n", x+3);
  printf("%d\n", x+4);
  printf("%d\n", x+5);
  printf("%d\n", x+6);
  printf("%d\n", x+7);
  printf("%d\n", x+8);
  printf("%d\n", x+9);
  printf("%d\n", x+10);
}

 /* Question 3: 
 
 Complete the function below so that it converts the height of a person from centimetres to feet and inches. Use integer division (rounding down is acceptable, which is the default for integer division). 
 
 Hint: 254 cm is exactly 100 inches and 12 inches is exactly 1 foot. 
 
 Call this function from the main to test your program.  For example you could test your program with the follow five values, where "?" replaced with the true value.

 101 cm is 3 feet 3 inches to the nearest inch.
 3 cm is 0 feet 1 inches to the nearest inch.
 15 cm is ? feet ? inches to the nearest inch.
 192 cm is ? feet ? inches to the nearest inch.
 124 cm is ? feet ? inches to the nearest inch.
 */

void convertMetricToImperialHeights(cm){
  int inch = cm / 2.54; //1 inch = 2.54cm
  int feet = inch / 12; //1 foot = 12 inch
  int remainingInches = inch % 12; //remaining inches
  printf("%d cm is %d feet and %d inches (to the nearest inch)\n", cm, feet, remainingInches);
}

 /* Question 4: 
 
 Complete the function below so that it uses three variables (current, previous, next) to calculate and print out the first ten numbers of the Fibonacci sequence, each on a new line: i.e. the first four lines should be as follows:

 0 
 1 
 1 
 2
 
 Call this function from the main to test your program.
 */

 void fibonacci(void){
   int x = 0;
   int y = 1;
   int sum;
   int goal = 10;
   int i;
   printf("%d\n", x);
   printf("%d\n", y);

   for(i=0;i<goal-2;i++) {
     sum = x + y;
     printf("%d\n", sum);
     x = y; //x = 1
     y = sum; //y = 1
   }
 }

 /* Question 5: 
 
 Complete the function below so that it uses two variables: height and radius. Use these two variables and print to the screen, the volume of a cylinder. 

 Call this function from the main to test your program.  For example, you could test your program with the following values, 

 height 7.0cm and radius 4.0cm
 height 20.0cm and radius 3.0cm
 height 14.7cm and radius 5.2cm
 
 Which print out, the cylinder with height 7.0cm and radius 4.0cm has a volume of 351.86cm^3
 
*/

void volumeOfACylinder(){
  float height = 14.7;
  float radius = 5.2;
  float pi = 3.14285714286;
  float volume = pi*(radius*radius)*height;
  printf("A cylinder with height %.1fcm and radius %.1fcm has a volume of %.1fcm^3\n", height, radius, volume);
}

int main(void) {
  printf("Question 1\n");
  printHelloWorld();

  printf("\nQuestion 2\n");
  int x = 5; 
  printXTenTimes(x);

  printf("\nQuestion 3\n");
  int cm = 250;
  convertMetricToImperialHeights(cm);

  printf("\nQuestion 4\n");
  fibonacci();

  printf("\nQuestion 5\n");
  volumeOfACylinder();
  return 0;
}
