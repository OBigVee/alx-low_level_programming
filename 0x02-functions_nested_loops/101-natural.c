#include <stdio.h>

/**
* main - Entry
* Return: 0
*/

int main(void){
int sum_multiple3_5;
int i;
for(i = 0; i < 1024; ++i)
{
if(i % 3 == 0 || i % 5 == 0)
{
sum_multiple3_5 += i;
}
}
printf("%d",sum_multiple3_5);
return (0);
}
