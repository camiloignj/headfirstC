#include <stdio.h>
#include <string.h>


char test[3] = "ABC";

void print_reverse(char *s)
{
  size_t len = strlen(s);

  char *t = s + len - 1;
  printf("%c", *s);
  printf("%c", *t); 
  while(t >= s) {
    printf("%c", *t);
  
    t = t - 1;
  }
  puts("");
}

int main() {
  print_reverse(test);
}
