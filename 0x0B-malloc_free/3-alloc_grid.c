#include <stdio.h>
#include <stdlib.h>
#include <string.h>

/**
 * **alloc_grid - function creates an array with init values 
 * and retrun 0 if size == 0
 * @width: size of array
 * @height: char to init
 * Return: pointer to the array init or NULL
 */

int **alloc_grid(int width, int height){
    int row = 0;
    int col = 0;
    int **m;
    width = 0;
    height = 0;
   
    if (width <= 0 || height <= 0){
        return  (NULL);
        }

        /* create a memory */
        m = malloc(sizeof(*m) * height);
        if (!m){
            return (NULL);
        }
        else{
            /*ROW*/
            for(; row < width; ++row){
                /* create or allocate memory for type int * the number of width*/
                    m[row] = malloc(sizeof(** m)*width);
                    if (m[row] == 0){
                        /*free mem*/
                        while(row--){
                            free(m[row]);
                            }
                        free(m);
                        return (NULL);
                        }
                    for (; col < height; ++col){
                        m[row][col] = 0;
                        }
                    }
            }
    return(0);
}
