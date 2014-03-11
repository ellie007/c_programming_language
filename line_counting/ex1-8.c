#include <stdio.h>

main()
{
  int c, newLine, blanks, tabs;
  newLine = 0;
  blanks = 0;
  tabs = 0;

  while ((c = getchar()) != EOF)
    if (c == '\n')
      ++newLine;
    else if (c == ' ')
      ++blanks;
    else if (c == '\t')
      ++tabs;
    printf("%d\n%d\n%d\n", newLine, blanks, tabs);
}
