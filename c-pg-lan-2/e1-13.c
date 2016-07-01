#include <stdio.h>

/**
 * Exercise 1-13.
 * Write a program to print a histogram of the lengths of worlds in
 * its input. It is easy to draw the histogram with the bar horizontal; 
 * a vertical orientation is more challenging.
 *
 * 思路：
 * 因为是统计单词长度出现的次数，这里假定单词最长不超过100,符合现有单词长
 * 度限定。定义长度为100的整形数组，其中数组索引代表单词长度，数组存储改长度单词
 * 出现的次数。
 * 画直方图采用扩展ASCII（EASCII）中的特殊字符219(表示一个字符的填充),横坐标表示
 * 单词长度，纵坐标为该长度单词出现次数。
 */

void 
main() {
  int st = 0;
  int c, i;
  int wc[100];
  int num = 0;
  int max = 0;
  for(i = 0; i < 100; i++) wc[i] = 0;
  
  while((c = getchar()) != EOF) {
    if(c == ' ' || c == '\t' || c == '\n') {
      if(st == 1) {
        ++wc[num];
        st = 0;
        num = 0;
      }
    }
    else if(st == 0) {
      ++num;
      st = 1;
    }
    else ++num;
  }

  printf("输出长度--->统计：\n");
  for(i = 0; i < 100; i++) {
    if(wc[i] > max) max = wc[i];
    if(wc[i] > 0) printf("%d ---> %d\n", i, wc[i]);
  }
  
  printf("输出直方图：\n");  //　换行输出结果
  for(i = max; i > 0; i--) {
    printf(" %d", i);
    int j;
    for(j = 1; j < 100; j++) {
      if(wc[j] == 0) continue;
      if(wc[j] >= i) printf("%c", '#');
      else printf(" ");
    }
    printf("\n");
  }
  printf("  ");
  for(i = 1; i < 100; i++) {
    if(wc[i] > 0) printf("%d", i);
  }
  printf("\n");
}
