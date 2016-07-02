#include <stdio.h>

/** 
 * Exercise 1-20.
 * Write a program detab that replaces tabs in the input with the proper
 * number of blanks to space to the next tab stop. Assume a fixed set of 
 * tab stops, say every n columns. Should n be a variable or a symbolic 
 * parameter?
 * 
 * 思路：
 * 一开始并不是很明白题目最后说的关于n的变量问题，后来通过google知道了原来 
 * 制表符'\t'每次移动的字符长度并不同，需要计算每次'\t'移动的字符数。
 * 亲测ubuntu 14.04上vi环境输入a'\t'移动７个字符, aa'\t'移动６个，aaa'\t'移动
 * ５个，即每次想显示８个字符长度。
 */
	
#define MAXLINE 1000
#define TAB '\t'
#define BLANK ' '

int getlines(char line[], int maxline);

void main() {
  char line[MAXLINE];
  int len, i, j, k;
  int tabsize = 8;
  while((len = getlines(line, MAXLINE)) > 0) {
    for(i = 0, j = 0; i < len; i++) {
      if(line[i] == '\t') {
        k = tabsize - j % tabsize;
        while(k-- > 0) {
          putchar(BLANK);
          ++j;
        }
      }
      else {
        putchar(line[i]);
        ++j;
      }
    }
  }
  return;
}
	
int getlines(char line[], int maxline) {
  int c;
  int len = 0;
  while(len < maxline - 1 && (c = getchar()) != EOF && c != '\n')
    line[len++] = c;
  if(c == '\n') line[len++] = '\n';
  line[len] = '\0';
  return len;
}
