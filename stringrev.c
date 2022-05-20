<<<<<<< HEAD
#include <stdlib.h>
=======

/**
 * It reverses a string.
 *
 * @param str This is the string that will be reversed.
 *
 * @return The address of the first character in the string.
 */
>>>>>>> 0cc37ade7a5d5a2f02231b3838a23018639b8ee6

char *_strrev(char *str)
{
    int i;
    int len = 0;
    char c;
    if (!str)
<<<<<<< HEAD
        return NULL;
=======
        return "error";
>>>>>>> 0cc37ade7a5d5a2f02231b3838a23018639b8ee6
    while (str[len] != '\0')
    {
        len++;
    }
    for (i = 0; i < (len / 2); i++)
    {
        c = str[i];
        str[i] = str[len - i - 1];
        str[len - i - 1] = c;
    }
    return str;
}