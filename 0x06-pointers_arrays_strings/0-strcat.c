nclude "holberton.h"                                                                                           
#include <stdio.h>                                                                                               
                                                                                                                 
/**                                                                                                              
 *_strcat: fun which prints the concat of two strings                                                            
 *@dest: pointer  destination                                                                                   
 *@src: ointer source                                                                                           
 */
	
char _strrcat(char *dest, char *src)                                                                             
{                                                                                                              
int a = -1;                                                                                                      
int i;                                                                                                           
for(i=0; dest[i] != '\0'; i++)                                                                                   
do{                                                                                                      
a++ ;
dest[i] = src[a] ;                                                                               
i++ ;
while(src[a] != '\0');                                                                                   
return(dest);
}  
