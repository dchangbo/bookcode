#include <stdio.h>

/**
 * Exercise 1-17.
 * Write a program to print all input lines that are longer than
 * 80 characters.
 */

#define MAXLINE 1000
#define LIM 10

int getlines(char line[], int maxline);

void main() {
  int len, i;
  char line[MAXLINE];
    while((len = getlines(line, MAXLINE)) > 0) {
      if(len >= LIM) {
        for(i = 0; i < len; i++) putchar(line[i]);
      }
    }
}

int getlines(char line[], int maxline) {
  int len = 0;
  int c;
  while(len < maxline - 1 && (c = getchar()) != EOF && c != '\n')
    line[len++] = c;
  if(c == '\n') {
    line[len] = c;
    ++len;
  }
  line[len] = '\0';
  return len;
}
