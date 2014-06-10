#include <stdio.h>

float calctemp(float fahr);

main(){
  float fahr, celsius;
  int lower, upper, step;

  lower = 0;
  upper = 300;
  step = 20;

  fahr = lower;
  printf("Fahr\tCel\n");
  while (fahr <= upper) {
    printf("%3.0f %6.1f\n", fahr, calctemp(fahr));
    fahr = fahr + step;
  }
}

float calctemp(float fahr) {
    return ((5.0/9.0) * (fahr-32.0));
}
