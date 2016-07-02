#include <stdio.h>

/**
 * Exercise 1-15.
 * Rewrite the temperature conversion program of Section 1.2 to
 * use a function for conversion.
 */

#define LOWER 0
#define UPPER 300
#define STEP 20

int calculate(int f);

void main() {
  int i;
  for(i = LOWER; i <= UPPER; i = i + STEP) {
    printf("%d  %d\n", i, calculate(i));
  } 
}

int calculate(int f) {
  return 5 * (f - 32) / 9;
}
