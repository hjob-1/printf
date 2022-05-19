#include <stdarg.h>
#include <stdio.h>
#include "main.h"

/**
 * The above function converts an integer to a string.
 *
 * @param i The integer to convert
 * @param strout The output string.
 * @param base The base of the number.
 *
 * @return The address of the first character in the string.
 */

int _printf(char *str, ...)
{
    va_list vl;
    int i = 0, j = 0;
    char buff[1024] = {0}, tmp[20];
    char *str_arg;
    char ch;
    int unsignedvalue;
    int tmpvalue;

    va_start(vl, str);
    while (str && str[i])
    {
        if (str[i] == '%')
        {
            i++;
            ch = str[i];
            switch (ch)
            {
            case 'c':
            {
                buff[j] = (char)va_arg(vl, int);
                j++;
                break;
            }
            case 'd':
            {
                _itoa(va_arg(vl, int), tmp, 10);
                _strcpy(&buff[j], tmp);
                j += _strlen(tmp);
                break;
            }
            case 'x':
            {
                _itoa(va_arg(vl, int), tmp, 16);
                _strcpy(&buff[j], tmp);
                j += _strlen(tmp);
                break;
            }
            case 'o':
            {
                _itoa(va_arg(vl, int), tmp, 8);
                _strcpy(&buff[j], tmp);
                j += _strlen(tmp);
                break;
            }
            case 's':
            {
                str_arg = va_arg(vl, char *);
                _strcpy(&buff[j], str_arg);
                j += _strlen(str_arg);
                break;
            }
            case '%':
            {
                buff[j] = ch;
                j++;
                break;
            }
            case 'i':
            {
                _itoa(va_arg(vl, int), tmp, 10);
                _strcpy(&buff[j], tmp);
                j += _strlen(tmp);
                break;
            }
            case 'b':
            {
                tmpvalue = va_arg(vl, int);
                unsignedvalue = tmpvalue < 0 ? -1 * tmpvalue : tmpvalue;
                binarycon(unsignedvalue, tmp, 2);
                _strcpy(&buff[j], tmp);
                j += _strlen(tmp);
                break;
            }
            }
        }
        else
        {
            buff[j] = str[i];
            j++;
        }
        i++;
    }
    fwrite(buff, j, 1, stdout);
    va_end(vl);
    return j;
}
