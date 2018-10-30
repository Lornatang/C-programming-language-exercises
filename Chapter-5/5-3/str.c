/*
 * Filename:    strcat.c
 * Author:      Thomas van der Burgt <thomas@thvdburgt.nl>
 * Date:        04-MAR-2010
 *
 * The C Programming Language, second edition,
 * by Brian Kernighan and Dennis Ritchie
 *
 * Exercise 5-3, page 107
 *
 * Write a pointer version of the function strcat that we showed in
 * Chapter 2: strcat(s,t) copies the string t to the end of s.
 */
#include "str.h"
#include <stdio.h>
#include <stdlib.h>

int main(void) {
  int length = 0;
  char s[100] = "ab\0c";
  char t[100] = "def";
  strCat(s, t);
  puts(s);
  length = strLen(s);
  printf("This char length: %d", length);
  return 0;
}
