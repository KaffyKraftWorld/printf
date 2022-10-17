#ifndef MAINH
#define MAINH
#include <stdarg.h>
void print_binary(unsigned int n, unsigned int *printed);


typedef struct specifier
{
	unsigned int width;
	unsigned int precision;
	int length;
	char widthflag;
	char precisionflag;
	char left;
	char sign;
	char space;
	char zero;
	char zerox;
	char specifier;
} specifier;

/* from itox.c */
char *itox(va_list list);
char *litox(va_list list);
char *hitox(va_list list);
char *hhitox(va_list list);

/* from itox.c */
char *itoX(va_list list);
char *hitoX(va_list list);
char *hhitoX(va_list list);
char *litoX(va_list list);

/* from itoo.c */
char *itoo(va_list list);
char *litoo(va_list list);
char *hitoo(va_list list);
char *hhitoo(va_list list);

/* from itos.c */
char *itos(va_list list);
char *hitos(va_list list);
char *litos(va_list list);
char *hhitos(va_list list);

/* from uitob.c */
char *uitob(va_list list);
char *luitob(va_list list);
char *huitob(va_list list);
char *hhuitob(va_list list);

#endif

