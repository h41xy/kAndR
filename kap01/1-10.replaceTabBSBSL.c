#include <stdio.h>

main() {

  int c;

  while ((c = getchar()) != EOF) {
    if (c == '\t') {
      putchar(92); // ascii (\)
      putchar(116); // ascii (t)
    } else if (c == '\b') {
      putchar(92);
      putchar(98); //ascii (b)
    } else if (c == '\\') {
      putchar(92);
      putchar(92);
    } else {
      putchar(c);
    }
  }
}
