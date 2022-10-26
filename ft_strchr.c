#include <stdio.h>
#include <string.h>

char *ft_strchr(const char *str, int c)
{
    while (*str != (char)c && *str)
    {
        str++;
    }
    if (*str == (char)c)
    {
        return ((char *)str);
    }
    return (NULL);
    
}

int main()
{
    char d[] = "Ro.dri.go.Neves";

    char e = '.';

    printf("%s\n", ft_strchr(d, e));
}