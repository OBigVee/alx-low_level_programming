#include <stdio.h>
#include <stdlib.h>
/**
*create_array - function creates an array with init values 
*and retrun 0 if size == 0
*@size: size of array
*@c: char to init
*Return: poonter to the array init or NULL
*/

char *create_array(unsigned int size, char c)
{
char *array = malloc(size);
if (size == 0)
return (0);

while (size--)
array[size] = c;
return (array);
}
