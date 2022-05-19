
/**
 * It converts an integer to a string in any base
 *
 * @param i The number to convert
 * @param strout The string to output to.
 * @param base The base of the number you want to convert to.
 *
 * @return The address of the first character in the string.
 */
char *binarycon(int i, char *strout, int base)
{
    char *str = strout;
    int sign = 0;
    if (i < 0)
    {
        sign = 1;
        i *= -1;
    }
    while (i)
    {
        *str = i % base;
        i = i / base;
        str++;
    }
    if (sign)
    {
        *str++ = '-';
    }
    *str = '\0';
    _strrev(strout);
    return strout;
}