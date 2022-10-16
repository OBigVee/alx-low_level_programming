#include "3-calc.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * get_op_func - function selects function to perform operation asked by a
 * user.
 * @s: operator
 * Return: integer result of the computation
 */
int (*get_op_func(char *s))(int, int)
{
	int i;

	op_t ops[] = {
		{"+", op_add},
		{"-", op_sub},
		{"*", op_mul},
		{"/", op_div},
		{"%", op_mod},
		{NULL, NULL}
	};

	i = 0;
	while (ops[i].op != NULL && *(ops[i].op) != *s)
	{
		i++;
	}
	return (ops[i].f);

	/*
	 *
	 *if (s.op == '+')
	 *{
	 *	return (s.f(op_add));
	 *} else if (s.op == '-')
	 *{
	 *	return (s.f(op_sub));
	 *} else if (s.op == '*')
	 *{
	 *	return (s.f(op_mul));
	 *} else if (s.op == '/')
	 *{
	 *	if (b != 0)
	 *	{
	 *		return (s.f(op_div));
	 *	}
	 *	printf("Error");
	 *	exit(100)
	 *
	 *} else if (s.op == '%')
	 *{
	 *	if (b != 0)
	 *	{
	 *		return (s.f(op_mod));
	 *	}
	 *	printf("Error\n");
	 *	exit(100)
	 *} else
	 *{
	 *	printf("Error\n");
	 *	exit(99);
	 *}
	 */
}
