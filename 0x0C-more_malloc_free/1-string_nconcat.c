#include "main.h"

/**
 *
 *
 *
 *
 */

char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	char *s3;
	int i = 0;

	if (n < 1)
		return (NULL);

	while (s1)
		i++;
	i++;

	while (n > 0)
	{
		i++;
		n--;
	}

	s3 = (char *)malloc(sizeof(char)*i);

	if ((s3) == (NULL))
	      	 return (NULL);

	while (s1)
	{
		s3 = s1;
		i--;
	}

	while (i > 0)
	{
		s3 = s2;
		i--;
	}

	return (s3);
}
