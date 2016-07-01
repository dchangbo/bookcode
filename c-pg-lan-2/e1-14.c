#include <stdio.h>

/**
 * Exercise 1-14.
 * Write a program to print a histogram of the frequencies of 
 * different characters in its input.
 *
 * 思路：
 * 本题较练习1-13难度较小，26个字母采用数组存储,忽略大小写。
 * 对于是否考虑特殊字符问题，由于画直方图时，特殊字符无法用单字符显示
 * 本方案采用的是忽略原则.也可用１，２，３代替。。。
 */

void main() {
  int nc[26];
  int c, i, j;
  int max = 0;
  for(i = 0; i < 26; i++) nc[i] = 0;
  while((c = getchar()) != EOF) {
    if(c >= 'a' && c <= 'z') ++nc[c - 'a'];
    if(c >= 'A' && c <= 'Z') ++nc[c - 'A'];
  }

  for(i = 0; i < 26; i++) if(nc[i] > max) max = nc[i];
  printf("直方图：\n");
  for(i = max; i > 0;i--) {
    printf(" %d", i);
    for(j = 0; j < 26; j++) {
      if(nc[j] == 0) continue;
      if(nc[j] < i) printf(" ");
      else printf("A");
    }
    printf("\n");
  }
  printf("  ");
  for(i = 0; i < 26; i++) if(nc[i] > 0) printf("%c", 'a' + i);
  printf("\n");
}
