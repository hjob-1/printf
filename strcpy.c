#include "main.h"

/**
 * _strcpy - copies the string pointed to by src
 * @dest: a pointer to a character
 * @src: a pointer to a character
 * Return: returns a character array
 */
char *_strcpy(char *dest, char *src)
{
    int i = 0;
    while (src[i] != '\0')
    {
        dest[i] = src[i];
        i++;
    }
    dest[i] = src[i];
    return (dest);
}