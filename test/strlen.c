#include "main.h"

/**
 * _strlen - calculates the length of the string
 * @s: a givem string
 * Return: string length
 */

int _strlen(char *s)
{
    int count = 0;

    while (*s != '\0')
    {
        count++;
        s++;
    }
    return (count);
}