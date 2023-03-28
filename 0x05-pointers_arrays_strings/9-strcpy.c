#include "main.h"

/**
 * _strcpy - Copies a string pointed to by @src, including the
 *           terminating null byte, to a buffer pointed to by @dest.
 * @dest: A buffer to copy the string to.
 * @src: The source string to copy.
 *
 * Return: A pointer to the destination string @dest.
 * *_strcpy - copy the string pointed by src, to the buffer pointed to by dest
 * @dest: char pointer
 * @src: char pointer 2
 * Return: dest pointer
 */

char *_strcpy(char *dest, char *src)
{
	int index = 0;
	int len, count;

	while (src[index])
	{
		dest[index] = src[index];
		index++;
	}
	len = 0;

	while (src[len] != '\0')
		len++;
	for (count = 0; count <= len; count++)
	dest[count] = src[count];
	return (dest);
}
