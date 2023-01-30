#include "main.h"
/**
 * get_flags - Calculates active flags
 * @format: Formatted string in which to print the arguments
 * @i: take a parameter.
 * Return: Flags
 */

int get_flags(const char *format, int *i)
{
	int q, curr_i;
	int flags = 0;
	const char FLAGS_CH[] = {'-', '+', '0', '#', ' ', '\0'};
	const int FLAGS_ARR[] = {F_MINUS, F_PLUS, F_ZERO, F_HASH, F_SPACE, 0};

	for (curr_i = *i + 1; format[curr_i] != '\0'; curr_i++)
	{
		for (q = 0; FLAGS_CH[q] != '\0'; q++)
		{
			if (format[curr_i] == FLAGS_CH[q])
			{
				flags |= FLAGS_ARR[q];
				break;
			}
		}
		if (FLAGS_CH[q] == 0)
			break;
	}
	*i = curr_i - 1;

	return (flags);
}
