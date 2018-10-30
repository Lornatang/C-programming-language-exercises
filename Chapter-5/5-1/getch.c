/*
 * Filename:    getch.c
 * Author:      Thomas van der Burgt <thomas@thvdburgt.nl>
 * Date:        01-MAR-2010
 *
 * The C Programming Language, second edition,
 * by Brian Kernighan and Dennis Ritchie
 *
 * Exercise 5-1, page 97
 *
 * As written, getint treats a + or - not followed by a digit as a valid
 * representation of zero. Fix it to push such a character back on the
 * input.
 */

#include <stdio.h>

#define BUFSIZE 100

char buf[BUFSIZE]; /* buffer for ungetc */
int bufp = 0;      /* next free position in buf */

/**
 * get a (possibly pushed-back) character
 */
int getch(void) { return (buf > 0) ? buf[--bufp] : getchar(); }

/**
 * push charcter back on input
 */
void ungetch(int c) {
  if (bufp >= BUFSIZE)
    printf("ungetch: too many characters\n");
  else
    buf[bufp++] = c;
}
