#include <stdio.h>
#include <string.h>
#include <math.h>

  /* 
  * Lab Sheet 3
  */

  /* Question 1
  
  Complete the function below which converts a hexadecimal string into its decimal value. (Do not use a C standard library function.) 

  The main function calls this function with an example hexadecimal value. Change this value to test your program.
  */

struct HexDec {
  char hex;
  int dec;
};

struct HexDec HexDecPopulate[] = {
  {'0', 0},
  {'1', 1},
  {'2', 2},
  {'3', 3},
  {'4', 4},
  {'5', 5},
  {'6', 6},
  {'7', 7},
  {'8', 8}, 
  {'9', 9},
  {'A', 10},
  {'B', 11},
  {'C', 12},
  {'D', 13},
  {'E', 14},
  {'F', 15}
};

int getDecfromHex(char hex) {
  for (int i = 0; i <= 15; i++) {
    if (HexDecPopulate[i].hex == hex) {
      return HexDecPopulate[i].dec;
    }
  }
  return -1;
}


int hexToDec(char hex[]){
  int total = 0;
  int mult = 1;
  for (char * c = (hex + strlen(hex) - 1); c != hex - 1; c--) {
    int dec = getDecfromHex(*c);
    if (dec == -1) {
      printf("\nInvalid Hex character %c\n", *c);
      return -1;
    }

    total += dec * mult;

    mult *= 16;
  }

  return total;
}

/* Question 2
 Complete the function below that print out a tree shape such as the following: 

    *
   ***
  *****
 *******
*********
   ***
   ***
   ***
   ***

  Note you can (and probably should) implement additional functions to help.

  You can assume that the width of the tree will be odd and hence every line will have an odd number of asterisks. The trunk will always have a width of three.

  Call this function from the main to test your program.
*/

void printSpaces(int num) { // print specified amount of spaces
  for(int s = 0; s < num; s++) {
    printf(" ");
  }
}

void printStars(int totalStars) { // print specified amount of stars
  for(int st = 0; st < totalStars; st++) {
    printf("*");
  }
}

void printTrunk(int num3) {
  printSpaces((num3 - 3) / 2); // take the trunk width (3) from the width and half it to get the space for each side of the trunk
  printStars(3);
  printSpaces((num3 - 3) / 2);
  printf("\n");
}

void printTree(int width, int trunkLength){
  int spaces = (width - 1) / 2; // subtract 1 as there is 1 star at the beginning and half it to get space for each side
  int stars = 1; // always 1 star at the beginning
  for(int c = 1; c <= ceil(width / 2); c++) {
    printSpaces(spaces);
    printStars(stars);
    printSpaces(spaces);
    printf("\n");
    spaces -= 1; // 1 less space each side of the tree
    stars += 2; // add 2 more with each row
  }
  for(int t = 0; t < trunkLength; t++) {
    printTrunk(width);
  }
}

int main(void) {
  char hex[4] = "FF38";
  printf("The hex value %s is %d in decimal\n", hex, hexToDec(hex));
  printTree(15, 4);
  return 0;
}
