#include <stdio.h>
#include <limits.h>

void main() {
  // char
  printf("the ranges of char is: %d - %d\n", CHAR_MIN, CHAR_MAX);
  printf("the ranges of signed char is: %d - %d\n", SCHAR_MIN, SCHAR_MAX);
  printf("the ranged of unsigned char is: %d - %u\n", 0, UCHAR_MAX);

  // short int, int, long int
  printf("the ranges of signed short int is: %d - %d\n", SHRT_MIN, SHRT_MAX);
  printf("the ranges of unsigned short int is: %d - %u\n", 0, USHRT_MAX);
  printf("the ranged of signed int is: %d - %d\n", INT_MIN, INT_MAX);
  printf("the ranges of unsigned int is: %d - %u\n", 0, UINT_MAX);
  printf("the ranges of signed long int is: %ld - %ld\n", LONG_MIN, LONG_MAX);
  printf("the ranged of unsigned long int is: %ld - %lu\n",(unsigned long)0, ULONG_MAX);
}
