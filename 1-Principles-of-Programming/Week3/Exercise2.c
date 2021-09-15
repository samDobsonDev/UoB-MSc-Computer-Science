#include <stdio.h>

/* Modify the function below so that it populates the array evenNumbers with
 * calculated value rather than printing it out.  
 * 
 * Now create a function that prints out this evenNumbers array and call it from
 * the main function
 */

int amountOfEvenNumbers = 10;
int evenNumbers[10];

void populateArray(){
  for(int i=0; i<amountOfEvenNumbers; i++){ 
    evenNumbers[i] = ((i + 1) * 2);
    // [0] = 2
    // [1] = 4
    // [2] = 6
    // etc
  }
}

void printingArray(){
  for(int i=0; i<amountOfEvenNumbers; i++){
    printf("Array Element %d = %d\n", i+1, evenNumbers[i]);
    // Array Element 1 = 2
    // Array Element 2 = 4
    // etc
  }
}

int main(void) {
  populateArray();
  printingArray();
  return 0;
}
