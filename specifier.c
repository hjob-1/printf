#include <stdarg.h>
#include "convert.c"
#include "strcpy.c"
#include "strlen.c"
#include "binary.c"

int *_switch(char buff[], int *j, va_list vl, char ch)
{
    char tmp[20];
    char *str_arg;
    int tmpvalue, unsignedvalue;

    switch (ch)
    {
    /* Convert char */
    case 'c':
    {
        buff[*j] = (char)va_arg(vl, int);
        *j++;
        break;
    }
    /* Convert decimal */
    case 'd':
    {
        _itoa(va_arg(vl, int), tmp, 10);
        _strcpy(&buff[*j], tmp);
        *j += _strlen(tmp);
        break;
    }
    /* Convert hex */
    case 'x':
    {
        _itoa(va_arg(vl, int), tmp, 16);
        _strcpy(&buff[*j], tmp);
        *j += _strlen(tmp);
        break;
    }
    /* Convert octal */
    case 'o':
    {
        _itoa(va_arg(vl, int), tmp, 8);
        _strcpy(&buff[*j], tmp);
        *j += _strlen(tmp);
        break;
    }
    /* copy string */
    case 's':
    {
        str_arg = va_arg(vl, char *);
        _strcpy(&buff[*j], str_arg);
        *j += _strlen(str_arg);
        break;
    }
    case '%':
    {
        buff[*j] = ch;
        *j++;
        break;
    }
    case 'i':
    {
        _itoa(va_arg(vl, int), tmp, 10);
        _strcpy(&buff[*j], tmp);
        *j += _strlen(tmp);
        break;
    }
    case 'b':
    {
        tmpvalue = va_arg(vl, int);
        unsignedvalue = tmpvalue < 0 ? -1 * tmpvalue : tmpvalue;
        binarycon(unsignedvalue, tmp, 2);
        _strcpy(&buff[*j], tmp);
        *j += _strlen(tmp);
        break;
    }
    }
}
