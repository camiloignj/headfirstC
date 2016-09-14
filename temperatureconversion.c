#include <stdio.h>

float convert(float f)

main()
{
  int i;

  for (i = 0; i <= 300; i = i + 20)
    printf("%3d %6.1f\n", i, convert(i));  
  return 0;
}

float convert(float fahr)
{
  return fahr = (5.0/9.0) * (fahr-32.0); 
}
