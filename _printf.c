<<<<<<< HEAD
#include <stdio.h>
#include <stdlib.h>
#include <stdarg.h>
#include <string.h>
#include "main.h"
=======
#include <stdarg.h>
#include <string.h>
#include "main.h"
#include "convert.c"
#include "strcpy.c"
#include "strlen.c"
#include "binary.c"
/**
 * The above function converts an integer to a string.
 *
 * @param i The integer to convert
 * @param strout The output string.
 * @param base The base of the number.
 *
 * @return The address of the first character in the string.
 */
>>>>>>> 0cc37ade7a5d5a2f02231b3838a23018639b8ee6

int _printf(char *str, ...)
{
    va_list vl;
    int i = 0, j = 0;
<<<<<<< HEAD
    char buff[1020] = {0}, tmp[20];
    char *str_arg;
    char ch;
=======
    char buff[1024] = {0}, tmp[20];
    char *str_arg;
    char ch;
    int unsignedvalue;
    int tmpvalue;
>>>>>>> 0cc37ade7a5d5a2f02231b3838a23018639b8ee6

    va_start(vl, str);
    while (str && str[i])
    {
        if (str[i] == '%')
        {
            i++;
            ch = str[i];
<<<<<<< HEAD
            // int x = _switch(&buff, &j, vl, ch);
            switch (ch)
            {
            /* Convert char */
=======
            switch (ch)
            {
>>>>>>> 0cc37ade7a5d5a2f02231b3838a23018639b8ee6
            case 'c':
            {
                buff[j] = (char)va_arg(vl, int);
                j++;
                break;
            }
<<<<<<< HEAD
            /* Convert decimal */
            case 'd':
            {
                _itoa(va_arg(vl, int), tmp, 10);
                strcpy(&buff[j], tmp);
                j += strlen(tmp);
                break;
            }
            /* Convert hex */
            case 'x':
            {
                _itoa(va_arg(vl, int), tmp, 16);
                strcpy(&buff[j], tmp);
                j += strlen(tmp);
                break;
            }
            /* Convert octal */
            case 'o':
            {
                _itoa(va_arg(vl, int), tmp, 8);
                strcpy(&buff[j], tmp);
                j += strlen(tmp);
                break;
            }
            /* copy string */
            case 's':
            {
                str_arg = va_arg(vl, char *);
                strcpy(&buff[j], str_arg);
                j += strlen(str_arg);
=======
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
>>>>>>> 0cc37ade7a5d5a2f02231b3838a23018639b8ee6
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
<<<<<<< HEAD
                strcpy(&buff[j], tmp);
                j += strlen(tmp);
=======
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
>>>>>>> 0cc37ade7a5d5a2f02231b3838a23018639b8ee6
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
