#include <stdio.h>

int main()
{
  int fahr = 0, celsius = 0;
  int lower, upper, step;

  lower = 0;
  upper = 300;
  step = 20;

  fahr = lower;
  printf("fahr\tcelsirs\n");
  while (fahr < upper)
  {
    celsius = 5 * (fahr - 32) / 9;
    printf("%d\t%d\n", fahr, celsius);
    fahr = fahr + step;
  }

  return 0;
}
