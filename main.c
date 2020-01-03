/**
 * Basic C program - Hello World
 *
 * @author Yusuf Pisan
 * @date 7 Dec 2018
 */

#include <stdio.h>

int main() {
  // unused variable 'i' warning from  -Wall flag
  int i;
  unsigned int x = 10;
  // comparison of unsigned expression warning from -Wextra flag
  if (x < 0) {
    printf("Ouch!\n");
  }
  printf("Hello, World!\n");
  return 0;
}