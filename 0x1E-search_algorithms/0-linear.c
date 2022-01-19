#include "search_algos.h"
/**
 * linear_search - search for a value in an array of intergers
 * @array: pointer to the first element of the array to search in
 * @size: number of elements is array
 * @value: value to search for
 *
 * Return: first index where @value is located
 *          if @value is not present in @array or if @array is
 *          NULL returns -1
 *
 * Everytime a value is compare in the array to the value you are searching the
 * the function prints the value
 */
int linear_search(int *array, size_t size, int value)
{
    size_t i = 0;
    if (array == NULL || size == 0){
        return -1;
    }
    while(i < size)
    {
        printf("Value checked array[%lu] = [%d]\n", i, array[i]);
        if(array[i] == value)
            return i;
            i++;
    }
    return -1;
}
