#include <stdio.h>
#include <stdlib.h>
int main()
{
  system("cls");
  printf("\n\t Memory required for short = %d bytes", sizeof(short));
  printf("\n\t Memory required for int = %d bytes", sizeof(int));
  printf("\n\t Memory required for long = %d bytes", sizeof(long));
  printf("\n\t Memory required for float = %d float", sizeof(float));
  printf("\n\t Memory required for double = %d double", sizeof (double));
  printf("\n\t Memory required for long double = %d long double", sizeof (long double));
  printf("\n\t Memory required for void = %d void", sizeof (void));
  printf("\n\t Memory required for char = %d char", sizeof (char));
  return 0;
}
