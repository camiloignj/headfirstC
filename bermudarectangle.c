#include <stdio.h>

void go_south_east(int *lat, int *lon) //will store pointers
{
  *lat = *lat - 1; //*lat can read the old value and set the new value
  *lon = *lon + 1;
}

int main()
{
  int latitude = 32;
  int longitude = -64;
  go_south_east(&latitude, &longitude); //must pass the address
  printf("Avast! Now at: [%i, %i]\n", latitude,longitude);
  return 0;
}
