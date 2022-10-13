#include "variadic_functions.h"
#include <string.h>
/**
 *  print_all - prints anything
 * @format: list of types per arguments passed
 * Return: nothing
 */
void print_all(const char * const format, ...)
{
	int i = 0, len, flag;
	char *print;
	va_list p_arg;

	if (format == NULL)
		return;
	len = strlen(format);
	va_start(p_arg, format);
	while (i < len)
	{
		flag = 1;
		while (flag && i < len)
		{
			switch (format[i])
			{
			case 'c':
				printf("%c", (char)va_arg(p_arg, int));
				flag = 0;
				break;
			case 'i':
				printf("%d", (int)va_arg(p_arg, int));
				flag = 0;
				break;
			case 'f':
				printf("%f", (double)va_arg(p_arg, double));
				flag = 0;
				break;
			case 's':
				print = (char *)va_arg(p_arg, char*);
				if (print == NULL)
				{
					printf("(nil)");
					break;
				}
				printf("%s", print);
				flag = 0;
				break;
			default:
				flag = 1;
			}
			if (i < len - 1 && flag == 0)
				printf(", ");
			i++;
		}
	}
	printf("\n");
	va_end(p_arg);
}
