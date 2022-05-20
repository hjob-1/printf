<<<<<<< HEAD
char *_itoa(int i, char *strout, int base)
{
    char *str = strout;
    int digit, sign = 0;
    if (i < 0)
    {
        sign = 1;
        i *= -1;
    }
    while (i)
    {
        digit = i % base;
        *str = (digit > 9) ? ('A' + digit - 10) : '0' + digit;
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
=======
#include "main.h"
#include "strrev.c"
/*
 * _itoa -function which convert intiger to any base
 * @i:intiger
 * @strout:
 * @base: base
 * return: strout
 */

char *_itoa(int i,char *strout,int base)
{
	char *str = strout;
	int digit, sign = 0;
	if (i < 0)
	{
		sign = 1;
		i *= -1;
	}
	while (i)
	{
		digit = i % base;
		*str = (digit > 9) ? ('A' + digit - 10) : '0' + digit;
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
>>>>>>> 0cc37ade7a5d5a2f02231b3838a23018639b8ee6
}
