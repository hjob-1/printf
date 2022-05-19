
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