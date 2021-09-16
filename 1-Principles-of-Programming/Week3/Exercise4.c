#include <stdio.h>
#include <string.h>

/* 
 * Modify the function below so that it copies the string from string1 into
 * string2 and prints out string2 in reverse.
 */

char string2[11];
int i;

void copyAndPrintArray(char string1[]){
  strcpy(string2, string1);
  for(i = strlen(string2); i >= 0; i--){
    printf("%c", string2[i]);
  }
  printf("\n%s", string2);
}

int main(void) {
  char string1[11] = "Hi there!";
  copyAndPrintArray(string1);
  return 0;
}
