#include "variadic_functions.h"
/**
 * sum_them_all - function returns the sum of all its parameters.
 * @n: parameter to sum
 * Return: int
 */
int sum_them_all(const unsigned int n, ...)
{

	unsigned int i, sum;

	/* variable ap has a pointer as it type*/
	va_list ap;

	if (n == 0)
		return (0);

	/* n simply means argc i.e the number of arguments*/
	va_start(ap, n);
	sum = 0;
	for (i = 0; i < n; i++)
	{
		sum += va_arg(ap, unsigned int);
		va_end(ap);
	}
	return (sum);
}
