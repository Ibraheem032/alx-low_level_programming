#include <stdio.h>
#include "main.h"
/**
 * _strcpy - copies string from one variable to the other
 * @dest: pointer to copy to
 * @src: pointer to copy from
 */
char *_strcpy(char *dest, char *src)
{
	strcpy(dest, src);
	return(dest);
}
