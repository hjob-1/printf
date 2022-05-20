#include "main.h"

/**
 * _strlen - calculates the length of the string
 * @s: a givem string
 * @flag: is a flag that checks if there is a percentage entry after the specifier
 * Return: string length
 */

int _strlen(const char *s, int flag)
{
  int length;

  for (length = 0; *s != '\0'; s++)
    length++;

  if (flag)
    return (length - 1);
  else
    return (length);
}
