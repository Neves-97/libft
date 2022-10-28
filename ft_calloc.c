#include <stdio.h>
#include <stdlib.h>

// The C library function void *calloc(size_t nitems, size_t size) allocates the 
// requested memory and returns a pointer to it. 
// The difference in malloc and calloc is that malloc does not set the memory to zero
//  where as calloc sets allocated memory to zero.


void *ft_calloc(size_t nitems, size_t size)
{
    void *pointer;

	pointer = malloc(nitems * size);
	if (pointer == NULL)
    {
		return (pointer);
    }
    ft_bzero(pointer, size * nitems);
	return (pointer);
}