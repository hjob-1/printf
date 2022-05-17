#include <stdarg.h>
#include "convert.c"
#include "strcpy.c"
#include "strlen.c"

/*
 * _switch - switch format
 * @buff: holds value temporarly
 * @j:
 * @vl:
 * @ch:
 *return:j
 */

int _switch(char *buff, int *j, va_list vl, char ch)
{
	char tmp[20];
	char *str_arg;

	switch (ch)
	{
		case 'c': /*convert char*/
			{
				buff[*j] = (char) va_arg(vl, int);
				*j++;
				break;
			}
		case 'd': /*convert decimal*/
			{
				_itoa(va_arg(vl, int), tmp, 10);
				strcpy(&buff[*j], tmp);
				*j += strlen(tmp);
				break;
			}
				case 'x': /*convert hexadecimal*/
				{
				_itoa(va_arg(vl, int),tmp, 16);
				strcpy(&buff[*j], tmp);
				*j += strlen(tmp);
				break;
			}
				case 'o': /* convert octal*/
				{
					_itoa(va_arg(vl, int), tmp, 8);
					strcpy(&buff[*j], tmp);
					*j +=strlen(tmp);
					break;
				}
				case 's': /*copy string*/
				{
					str_arg = va_arg(vl, char *);
					strcpy(&buff[*j], str_arg);
					*j += strlen(str_arg);
					break;
				}
	}
	return j;
}

