#include "main.h"

/**
 * string_nconcat - concatenates two strings, up to n bytes
 * @s1: string to be concatenated to
 * @s2: string to be added
 * Return: pointer to concatenated string
 * @n: how many bytes of the second string to be copied
 */

char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	char *s3;
	unsigned int i = 0;
	unsigned int j = 0;
	unsigned int x = 0;

	if (s1 == NULL)
		s1 = "";
	if (s2 == NULL)
		s2 = "";

	while (s1[i] != '\0')
		i++;
	i++;

	i = (i + n);

	s3 = malloc(sizeof(char) * (i));

	if ((s3) == (NULL))
		return (NULL);

	while (s1[j] != '\0')
	{
		s3[j] = s1[j];
		i--;
		j++;
	}

	while (i > 0)
	{
		s3[j] = s2[x];
		i--;
		j++;
		x++;
	}
	s3[j] = '\0';
	return (s3);
}
