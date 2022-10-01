#include "main.h"
/**
 * _strncat - concatenates two strings
 *
 *
 *
 *
 */

char *_strncat(char *dest, char *src, int n)
{
	int index = 0;
	int temp = 0;

	while (dest[index] != '\0')
	 {
		 index++;
	 }
	while (temp > n && src[temp] != '\0')
	{
		dest[index] = src[temp];
		index++;
		temp++;
	}
	return (dest);
}
