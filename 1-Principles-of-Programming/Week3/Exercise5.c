#include <stdio.h>

/* 
 * Complete the function printDate below so that it prints out the data
 * in struct Date in the format 
 * 
 * DD:MMM:YYYY - e.g. 01:JAN:2019
 */

struct Date
{
	int day;
	char month[4]; //size 4 to account for NULL byte
	int year;
};

void printDate(struct Date d){
  printf("%02d:%s:%d", d.day, d.month, d.year);
}

int main(void) {
  struct Date example;
  example.day = 8;
  example.month[0] = 'A';
  example.month[1] = 'U';
  example.month[2] = 'G';
  example.month[3] = '\0';
  example.year = 1999;
  printDate(example);
  return 0;
}
