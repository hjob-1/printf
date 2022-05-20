#include <stdarg.h>
<<<<<<< HEAD

int _switch(char *buff, int *j, va_list vl, char ch)
{
    char tmp[20];
    char *str_arg;
=======
#include "convert.c"
#include "strcpy.c"
#include "strlen.c"
#include "binary.c"

int *_switch(char buff[], int *j, va_list vl, char ch)
{
    char tmp[20];
    char *str_arg;
    int tmpvalue, unsignedvalue;
>>>>>>> 0cc37ade7a5d5a2f02231b3838a23018639b8ee6

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
<<<<<<< HEAD
        strcpy(&buff[*j], tmp);
        *j += strlen(tmp);
=======
        _strcpy(&buff[*j], tmp);
        *j += _strlen(tmp);
>>>>>>> 0cc37ade7a5d5a2f02231b3838a23018639b8ee6
        break;
    }
    /* Convert hex */
    case 'x':
    {
        _itoa(va_arg(vl, int), tmp, 16);
<<<<<<< HEAD
        strcpy(&buff[*j], tmp);
        *j += strlen(tmp);
=======
        _strcpy(&buff[*j], tmp);
        *j += _strlen(tmp);
>>>>>>> 0cc37ade7a5d5a2f02231b3838a23018639b8ee6
        break;
    }
    /* Convert octal */
    case 'o':
    {
        _itoa(va_arg(vl, int), tmp, 8);
<<<<<<< HEAD
        strcpy(&buff[*j], tmp);
        *j += strlen(tmp);
=======
        _strcpy(&buff[*j], tmp);
        *j += _strlen(tmp);
>>>>>>> 0cc37ade7a5d5a2f02231b3838a23018639b8ee6
        break;
    }
    /* copy string */
    case 's':
    {
        str_arg = va_arg(vl, char *);
<<<<<<< HEAD
        strcpy(&buff[*j], str_arg);
        *j += strlen(str_arg);
        break;
    }
    }
    return j;
}
=======
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
>>>>>>> 0cc37ade7a5d5a2f02231b3838a23018639b8ee6
