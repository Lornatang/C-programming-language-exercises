#include "str.h"
#include <stdio.h>

int main(void) {
  int i = 0;
  char s[100] = "abc";
  char t[100] = "def";
  char s2[100] = "acd";
  char s3[100];
  printf("Strncat string: ");
  strnCat(s, t, 2);
  puts(s);
  printf("Strncmp string value: ");
  i = strnCmp(s, s2, 2);
  printf("%d", i);
  printf("Strncpy string: ");
  strnCpy(s3, s, 7);
  puts(s3);
  return 0;
}
