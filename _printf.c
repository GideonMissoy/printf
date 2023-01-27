#include "main.h"

void print_buffer(char buffer[], int *buff_ind);

/**
<<<<<<< HEAD
 * _printf - Printf function
 * @format: format.
 * Return: Printed chars.
 */
=======
 * _printf - print function
 * @format: formats
 * Return: chars printed
 */

>>>>>>> 2b9489aba6b424433c01d25142ff65ed7ad6b4e5
int _printf(const char *format, ...)
{
	int i, printed = 0, printed_chars = 0;
	int flags, width, precision, size, buff_ind = 0;
	va_list list;
	char buffer[BUFF_SIZE];

	if (format == NULL)
		return (-1);

	va_start(list, format);

	for (i = 0; format && format[i] != '\0'; i++)
	{
		if (format[i] != '%')
		{
<<<<<<< HEAD
			buffer[buff_ind++] = format[i];
			if (buff_ind == BUFF_SIZE)
				print_buffer(buffer, &buff_ind);
			/* write(1, &format[i], 1);*/
=======
			buffer[bff_ind++] = format[i];
			if (buff_ind == BUFF_SIZE)
				print_buffer(buffer, &buff_ind);
>>>>>>> 2b9489aba6b424433c01d25142ff65ed7ad6b4e5
			printed_chars++;
		}
		else
		{
			print_buffer(buffer, &buff_ind);
			flags = get_flags(format, &i);
			width = get_width(format, &i, list);
			precision = get_precision(format, &i, list);
			size = get_size(format, &i);
<<<<<<< HEAD
			++i;
			printed = handle_print(format, &i, list, buffer,
				flags, width, precision, size);
=======
			i++;
			printed = handle_print(format, &i, list, buffer,
					flags, width, precision, size);
>>>>>>> 2b9489aba6b424433c01d25142ff65ed7ad6b4e5
			if (printed == -1)
				return (-1);
			printed_chars += printed;
		}
	}
<<<<<<< HEAD

	print_buffer(buffer, &buff_ind);
=======
	printed_buffer(buffer, &buff_ind);
>>>>>>> 2b9489aba6b424433c01d25142ff65ed7ad6b4e5

	va_end(list);

	return (printed_chars);
}

/**
<<<<<<< HEAD
 * print_buffer - Prints the contents of the buffer if it exist
 * @buffer: Array of chars
 * @buff_ind: Index at which to add next char, represents the length.
 */
=======
 * print_buffer - print contents of existing buffer
 * @buffer: array f chars
 * @buff_ind: Index to add the next char
 */

>>>>>>> 2b9489aba6b424433c01d25142ff65ed7ad6b4e5
void print_buffer(char buffer[], int *buff_ind)
{
	if (*buff_ind > 0)
		write(1, &buffer[0], *buff_ind);
<<<<<<< HEAD

=======
>>>>>>> 2b9489aba6b424433c01d25142ff65ed7ad6b4e5
	*buff_ind = 0;
}
