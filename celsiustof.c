#include <stdio.h>

int main()
{
  float cels;

  for (cels = 0.0; cels <= 100.0; cels = cels + 10.0)
  {
    printf("%3.1f %3.1f\n", cels, (9.0/5.0) * cels + 32);
  }
}
