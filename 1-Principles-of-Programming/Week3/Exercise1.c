#include <stdio.h>

/* 
 Modify the function below so that it prints out the square multiplication tables for any number.  How might you modify this function, or add a new function, so it prints out the multiplication tables for any range of numbers?

 */

void printLine(int currentNumber, int numberofColumns){
  int currentColumn = 1;
  while (currentColumn <= numberofColumns){ // for each column member in the row
    printf("%d\t", currentColumn * currentNumber); // print count * currentNumber
    currentColumn += 1; // go to next member in the row and repeat
  }
  printf("\n");
}

void Table(int numberofRows, int numberOfColumns){
 int currentRow = 1; 
 while(currentRow <= numberofRows){ // for each row...
   printLine(currentRow, numberOfColumns); // print the line of that row
   currentRow += 1; // go to next row and repeat
 }
}

int main(void) {
  Table(3, 10);
  return 0;
}
