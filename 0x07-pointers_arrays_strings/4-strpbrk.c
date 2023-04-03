/**
 * _strpbrk -  function that gets the length of a prefix substring
 * @s: char
 * @accept: char
 * Return: memory adress of the first occurence
*/
char *_strpbrk(char *s, char *accept)
{
	int i, j;

	for (i = 0; s[i] != '\0'; i++)
	{
		for (j = 0; accept[j] != '\0'; j++)
		{
			if (s[i] == accept[j])
			{
				return (&s[i]);
			}
		}
	}
	return (NULL);
}

