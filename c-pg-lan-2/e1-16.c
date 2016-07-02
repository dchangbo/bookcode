#include <stdio.h>

/**
 * Exercise 1-16.
 * Revise the main routine of the longest-line program so it will
 * correctly print the length of arbitrarily long input lines, and
 * as much as possible of the text.
 * 
 * 思路：
 * 本题意思应该是不需要长度限制，而且只打印每行的长度。
 */

int getlines();

void main() {
  int lid = 1;
  int len;
  while((len = getlines()) != -1) printf("%d --> %d\n", lid++, len);
  return;
}

int getlines() {
  int c;
  int len = 0;
  while((c = getchar()) != EOF && c != '\n') ++len;
  if(c == EOF && len == 0) return -1;
  return len;
}
