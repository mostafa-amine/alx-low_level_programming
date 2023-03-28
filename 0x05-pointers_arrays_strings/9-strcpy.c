/**
 * _strcpy -  function that copies the string
 * @dest: array
 * @src: array
 * Return: dest
*/
char *_strcpy(char *dest, char *src)
{
	int i = 0, j;

	if (src == NULL || src[0] == '\0')
	{
		dest[0] = '\0';
		return (dest);
	}

	do {
		i++;
	} while (src[i] != '\0');

	for (j = 0; j <= i; j++)
	{
		dest[j] = src[j];
	}

	return (dest);

}

