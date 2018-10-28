/*
 * Filename:    polishcalc.c
 * Author:      Thomas van der Burgt <thomas@thvdburgt.nl>
 * Date:        08-MAR-2010
 *
 * The C Programming Language, second edition,
 * by Brian Kernighan and Dennis Ritchie
 *
 * Exercise 4-3, page 79
 *
 * Given the basic framework, it's straightforward to extend the
 * calculator. Add the modulus (%) operator and provisions for
 * negative numbers.
 */

#include "polishcalc.h"
/* reverse Polish calculator */
int main(void) {
  int type;
  double op2;
  char s[MAXOP];

  while ((type = getop(s)) != EOF) {
    switch (type) {
      case NUMBER:
        push(atof(s));
        break;
      case '+':
        push(pop() + pop());
        break;
      case '*':
        push(pop() * pop());
        break;
      case '-':
        op2 = pop();
        push(pop() - op2);
        break;
      case '/':
        op2 = pop();
        if (op2 != 0.0)
          push(pop() / op2);
        else
          printf("error: zero devisor\n");
        break;
      case '%':
        op2 = pop();
        if (op2 != 0.0)
          push(fmod(pop(), op2));
        else
          printf("error: zero devisor\n");
        break;
      case '\n':
        printf("\t%.8g\n", pop());
        break;
      default:
        printf("error: unknown command %s\n", s);
        break;
    }
  }
  return 0;
}