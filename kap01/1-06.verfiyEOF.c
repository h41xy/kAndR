#include <stdio.h>

main() {
  
  int c;

  while ((c = getchar()) != EOF) {
    if (c != '\n')
      printf("%d\n", (c != EOF));
  }
  printf("%d\n", (c != EOF));
}

