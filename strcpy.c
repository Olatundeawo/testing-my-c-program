#include <stdio.h>
#include <string.h>
/**
 * _strncpy - copy string
 *
 * @dest: chr
 * @src: source
 *
 * Return: return dest
 */

char _strncpy(char dest[], char src[])
{
	dest = "dest is the first character";
	src = "src is the last character";

	strcpy(dest, src);

	printf("added src character:%s'\n'", dest);

	return (0);
}
