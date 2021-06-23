#include <stdio.h>

/**
* main - Entry
* Return: 0
*/

int main(void){
int sum3;
int sum5;
int i;
for(i=0; i<1024; ++i)
{
if(i%3 == 0){
sum3 += i;
}
else if (i%5 == 0)
{
sum5 += i;
}
}
printf("sum of multiple of 3 is %d\n",sum3);
printf("sum of multiple of 5 is %d\n",sum5);
return (0);

}
