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
for (i = 97; i <= 122; i++)
{
if (((char) i) == 'q' || ((char) i) == 'e')
{
continue;
}
putchar((char) i);
}

putchar('\n');

return (0);
}

