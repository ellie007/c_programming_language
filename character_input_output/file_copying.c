#include <stdio.h>

main()
{
  int c = getchar() != EOF;

  if (c==0)
    printf("zero");

  else if (c==1)
    printf("one");

  // int c = EOF;
  // printf("%d\n", c);
}
