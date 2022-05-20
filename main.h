<<<<<<< HEAD
#include <stdarg.h>
int _printf(char *str, ...);
int _strlen(char *s);
char *_strcpy(char *dest, char *src);
int _switch(char *buff, int *j, va_list vl, char ch);
char *_strrev(char *str);
char *_itoa(int i, char *strout, int base);
=======
#ifndef MAIN_H
#define MAIN_H
int _putchar(char c);
int strlen(char *s);
char *_strcpy(char *dest, char *src);
int _switch(char *buff, int *j, va_list vl, char ch);
char *_itoa(int i, char *strout, int base);
char *_strrev(char *str);
void _puts(char *str);
char *binarycon(int i, char *strout, int base);
#endif
>>>>>>> 0cc37ade7a5d5a2f02231b3838a23018639b8ee6
