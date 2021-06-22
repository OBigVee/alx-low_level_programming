# digging further into C


## what is an header file?

files with the extension ```.h``` in ```C``` are called header files.
they contain function declarations which can be use in the main C program.
e.g to use the ```printf()``` function in ```C``` you need to include the ```stdio.h``` header
```
  #include <stdio.h>
  int main(){
  //your code here
  }
```
## how do you create and use an header file for your task?
note that the header files generally contain definitions of data types, function prototypes and C prprocessor commands.
* step 1:
  let's create an header file named holberton.h
``` #include <unistd.h>

/**
 * _putchar - writes the character c to stdout
 * @c: The character to print
 *
 * Return: On success 1.
 * On error, -1 is returned, and errno is set appropriately.
 */
int _putchar(char c)
{
	return (write(1, &c, 1));
}
````

* step 2
include the .h file in other program, you can either the .h file in two different ways
```
#include "holberton.h"
```
or 
```
#include <holberton>
```
the only caveat to first methos is make sure the .h file is present in the same folder with your program because the ``` ""``` will instruct the preprocessor to look into the present folder and into the standard folder of all the header.
if you use the ``` < >  angular ``` method you need to save it in the standard header files folder

* step 3: use the header file you create to carry your task.

```
#include <stdio.h>
#inlcude "holberton.h"

int main()
{
char name = "Holberton";

_putchar(name);
print("/n");
return (0);
}

```
