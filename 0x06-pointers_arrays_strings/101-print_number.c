#include "main.h"


/**
 * print_number - print numbers with _putchar
 * @n: the number to be printed
*/

void print_number(int n)
{
  int divisor = 1, res;

  if (n < 0) {
    _putchar('-');
    n *= -1;
  }

  while (n / divisor > 9) {
    divisor *= 10;
  }

  while (divisor != 0) {
	res = (n / divisor) % 10;
    _putchar(res + '0');
    divisor /= 10;
  }
}

