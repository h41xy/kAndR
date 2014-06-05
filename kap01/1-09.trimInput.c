#include <stdio.h>

main() {

  int c;

  while ((c = getchar()) != EOF) {
    if (c == 32) {
      putchar(c);
      while ((c = getchar()) != EOF && c == 32);
    }
    if (c != EOF)
      putchar(c);
  }
}
