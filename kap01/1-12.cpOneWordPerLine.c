#include <stdio.h>

main() {

  int c;

  while ((c = getchar()) != EOF) {

    if (c == '\n' || c == ' ' || c == '\t') {
      putchar('\n');
      while ((c = getchar()) != EOF && c == '\n' || c == ' ' || c == '\t');
      putchar(c);
    } else {
      putchar(c);
    }
  }
}
