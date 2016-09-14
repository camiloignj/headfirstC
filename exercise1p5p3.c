#include <stdio.h>

/* count lines in input */
main()
{
  int c, n1,blank;
 
  n1 = 0;
  blank = 0;
 
  while ((c = getchar()) != EOF)
    putchar(c);
    if (c == ' ')
      ++blank;
      if(blank > 1)
        
    else if(c != ' ' && blank > 1)
       putchar(c);
       blank = 1;
       
}
