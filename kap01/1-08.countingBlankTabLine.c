#include <stdio.h>

main() {

  int c;
  int cblank, ctab, cnl;

  cblank = 0;
  ctab = 0;
  cnl = 0;

  while ((c = getchar()) != EOF) {
    if (c == 32) {
      cblank++;
    } else if (c == '\t') {
      ctab++;
    } else if (c == '\n') {
      cnl++;
    }
  }

  printf("Input has %3d blanks, %3d tabs and %3d new lines.\n", cblank, ctab, cnl);
}
