#include <stdio.h>

size_t strlen(const char *str)
{
    size_t i;

    i = 0;

    while (str[i])
    {
        i++;
    }
    return (i);
}