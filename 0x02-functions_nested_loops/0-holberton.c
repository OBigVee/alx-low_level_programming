#include"holberton.h"

/** 
 * main - Entry point
 * Return:0
 */

 int main(void)
 {
 char str[10] = "Holberton";
 int idx = 0;
 while (idx < 9)
 {
 _putchar(str[idx]);
 idx++;
 }
 _putchar('\n');
 return (0);
 }
