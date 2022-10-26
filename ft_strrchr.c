#include <stdio.h>
#include <string.h>

char *ft_strrchr(const char *str, int c)
{
    int i;

    i = ft_strlen(str);
    
    while (i >= 0)
    {
        if (str[i] == (char)c)
        {
            return ((char *)str + i);
        }
        i--;       
    }
    return (NULL);
    
}

int main()
{
    char d[] = "Ro.dri.go.Neves";

    char e = '.';

    printf("%s\n", ft_strrchr(d, e));
}