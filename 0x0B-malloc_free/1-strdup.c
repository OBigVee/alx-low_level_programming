#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "holberton.h"

/**
* *_strdup - function return a pointer to a newly allocated
* space in memory, which contains a copy of the string given
* @str: the strings that will be copied the pointer
* Return : pointer with a new allocated memory space.
*/

char *_strdup(char *str){
  int i, size;
  i = 0;
  size = 0;
  for(;str[size] != '\0; size++);
  char *m = malloc(size*sizeof(str)+'\0');
  
  if(str=='/0'){
      return(NULL);
  }
  while(str--)
  strcpy(m,str);
  
   return (m);
}
