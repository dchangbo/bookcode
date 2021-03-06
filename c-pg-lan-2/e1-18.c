#include <stdio.h>

/** 
 * Exercise 1-19.
 * Write a program to remove trailing banks and tabs from
 * each line of input, and to delete entirely blank lines.
 */

#define MAXLINE 1000

int getlines(char line[], int maxline);

void main() {
  char line[MAXLINE];
  int len, i;
  while((len = getlines(line, MAXLINE)) >= 0)
    if(len > 0) 
      for(i = 0; i < len; i++)
        putchar(line[i]);
  return;
}

int getlines(char line[], int maxline) {
  int c;
  int len = 0;
  while(len < maxline - 1 && (c = getchar()) != EOF && c != '\n')
    line[len++] = c;
  while(len > 0 && (line[len - 1] == ' ' || line[len - 1] == '\t')) --len;
  if(c == EOF && len == 0) return -1;
  if(len == 0) return 0;
  if(c == '\n') line[len++] = '\n';
  line[len] = '\0';
  return len;
}
