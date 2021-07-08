#include "holberton.h"


/** 
* _strlen_recursion - returns the len of string
* @s: string to check 
* Return: string legth 
*/


 int _strlen_recursion(char *s)
 {
 if(*s == '\0')
 {
 return(0);
 }
 return(1+_strlen_recursion(s+1));
 }
