#include "variadic_functions.h"
/**
 * format_char- print char
 * @separator: type of separator between them
 * @p: char pointer
 * Return: void.
 */
void format_char(char *separator, va_list p)
{
	printf("%s%c", separator, va_arg(p, int));
}

/**
 * format_int- print numbers
 * @separator: type of separator between them
 * @p: numbers pointer
 * Return: void.
 */
void format_int(char *separator, va_list p)
{
	printf("%s%d", separator, va_arg(p, int));
}

/**
 * format_float- print float numbers
 * @separator: type of separator between them
 * @p: float numbers pointer
 * Return: void.
 */
void format_float(char *separator, va_list p)
{
	printf("%s%f", separator, va_arg(p, double));
}

/**
 * format_string- print string numbers
 * @separator: type of separator between them
 * @p: string pointer
 * Return: void.
 */
void format_string(char *separator, va_list p)
{
	char *s;

	printf("%s%s", separator, (s = va_arg(p, char *)) ? s : "(nil)");
}

/**
 * print_all - print anything
 * @format: type of separatop between them
 * @...: anything
 * Return: void.
 */
void print_all(const char * const format, ...)
{
	int i = 0, j;
	char *separator = "";
	va_list p;

	token_x tokens[] = {
		{"c", format_char},
		{"i", format_int},
		{"f", format_float},
		{"s", format_string},
		{NULL, NULL}
	};
	va_start(p, format);
	while (format && format[i])
	{
		j = 0;
		while (tokens[j].token)
		{
			if (format[i] == tokens[j].token[0])
			{
				tokens[j].f(separator, p);
				separator = ", ";
			}
			j++;
		}
		i++;
	}
	printf("\n");
	va_end(p);
}
