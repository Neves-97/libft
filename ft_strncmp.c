#include <stdio.h>

int ft_strncmp(const char *str1, const char *str2, size_t n)
{
    size_t i;

    i = 0;

    if (n == 0)
    {
        return (0);
    }

    while (str1[i] && str2[2] && str1[i] == str2[i] && i < n)
    {
        i++;
    }
    return(str1[i] - str2[i]);
}

int main()
{
    char d[] = "nemoatuafrenteeutouatrasdeti";
    char e[] = "nemoatuafrenaginateisto";

    printf("%d\n", ft_strncmp(d, e, 20));
}