#include "main.h"

/**
 * leet	- encodes a string into 1337
 * @srt: char
 * Return: srt
*/
char *leet(char *srt)
{
	char spec[] = "aAeEoOtTlL";
	char spec_n[] = "4433007711";
	int i = 0, j;

	for (i = 0; srt[i]; i++)
	{
		for (j = 0; spec[j]; j++)
		{
			if (srt[i] == spec[j])
			{
				srt[i] = spec_n[j];
			}
		}
	}
	srt[i] = '\0';

	return (srt);
}

