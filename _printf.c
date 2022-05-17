#include <stdio.h>
#include <stdlib.h>
#include <stdarg.h>
#include <string.h>
#include "main.h"

int _printf(char *str, ...)
{
    va_list vl;
    int i = 0, j = 0;
    char buff[1020] = {0}, tmp[20];
    char *str_arg;
    char ch;

    va_start(vl, str);
    while (str && str[i])
    {
        if (str[i] == '%')
        {
            i++;
            ch = str[i];
            switch (ch)
            {
            /* Convert char */
            case 'c':
            {
                buff[j] = (char)va_arg(vl, int);
                j++;
                break;
            }
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
                strcpy(&buff[j], tmp);
                j += strlen(tmp);
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
