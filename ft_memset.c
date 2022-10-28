#include <stdio.h>
#include <string.h>

// The C library function void *memset(void *str, int c, size_t n) 
// copies the character c (an unsigned char) 
// to the first n characters of the string pointed to, by the argument str.

void *ft_memset(void *str, int c, size_t n)
{
    unsigned char *pointer;
    size_t  i;

    
    i = 0;
    pointer = (unsigned char *) str;

    while (i < n)
    {
        i++;
        pointer = (unsigned char) c;
    }
    return (str);
}