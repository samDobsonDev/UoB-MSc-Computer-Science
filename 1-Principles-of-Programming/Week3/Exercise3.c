#include <stdio.h>
#include <string.h>

/*
 * Modify the function below so that it prints out each character in the string
 * on a new line.  Hint: the end of a string is signified by the '\0' char
 */

void printCharsInString(char string[]){ //accepts string of any size as a parameter
  for(int i = 0; i < strlen(string); i++){
    printf("%c\n", string[i]);
  }
}

int main(void) {
  char my_string[] = "This is my solution for Exercise 3";
  printCharsInString(my_string); //passing the string as an argument
  return 0;
}
