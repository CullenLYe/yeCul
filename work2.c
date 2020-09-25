#include <stdio.h>

int main() {

  // Trying out printf and placeholders:
  char chr = 'a';
  int i = 7;
  double d = 3.141592653589793238;
  short s = 12345;
  long l = 123456789;
  float f = 3.141592653589793238;
  printf("char: %c / int: %d / double: %lf\n", chr, i, d);
  printf("short: %d / long: %ld / float: %f\n", s, l, f);
  // I originally got overflow errors for short and long values.
  // Prints out "char: a / int: 7 / double: 3.141593 \n
  // short: 12345 / long: 123456789 / float: 3.141593".
  // The double and float got truncated as expected. They both got truncated to
  // 3.141593.

  // Trying out %p, pointer:
  printf("pointer1: %p\n", chr);
  // Gets 0000000000000061
  printf("pointer2: %p\n", i);
  // Gets 0000000000000007
  printf("pointer2: %p\n", d);
  // Gets 400921FB54442D18
  // idk what's happening tbh

  // Trying out unsigned ints:
  unsigned int u1 = 1000000;
  unsigned int u2 = -333;
  printf("u1: %d, u2: %d\n", u1, u2);
  // Prints out "u1: 1000000, u2: -333", as expected.

  // Trying to go out of bounds:
  char chr1 = 'a'-10;
  printf("Char 'a' minus 10: %c\n ", chr1);
  // Prints "Char 'a' minus 10: W". So it wraps around?

  return 0;

}
