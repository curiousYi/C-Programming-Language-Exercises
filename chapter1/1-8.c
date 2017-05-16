#include <stdio.h>
"Probably a better way of writing this is to use ASCII numbers to get around the multichar issue for C
int main()
{
  int c, numb;

  c = getchar();
  numb = 0;
  while( c != EOF)
    if (c == '  ')
      ++numb;
    else
      if( c == ' ' )
        ++numb;

    if( c== '\n')
      ++numb;

    printf("%d\n", numb);
}
