#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <string.h>


/**
 * main - entry point
 * @void: void
 * Return: 0
*/
int main(void)
{
int i;

for (i = 48; i < 58; i++)
{

if (i != 57)
{
putchar(i);
putchar(',');
putchar(' ');
}
else {
putchar(i);
}
}

return (0);
}

