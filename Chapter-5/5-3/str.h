/* Imitate the strcat function in C */
void strCat(char *s, const char *t) {
  while (*s) s++;
  while (*t) *s++ = *t++;
  *s = '\0';
}

int strLen(const char *s) {
  int i = 0;
  while (*s) {
    i++;
    s++;
  }
  return i;
}
