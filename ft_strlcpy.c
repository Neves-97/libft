#include <stdio.h>
#include <string.h>


size_t	ft_strlcpy(char *dst, const char *src, size_t dstsize)
{
	size_t	i;

	if (!dst || !src)
		return (0);
	i = 0;
	while (src[i])
		i++;
	if (dstsize == 0)
		return (i);
	i = 0;
	while (src[i] && i < dstsize - 1)
	{
		dst[i] = src[i];
		i++;
	}
	dst[i] = '\0';
	i = 0;
	while (src[i])
		i++;
	return (i);
}

int main()
{
    char d[] = "Gandamocaboy";
    char e[] = "qualquercen";

    printf("MINE\n");
    printf("\n");
    printf("\n");
    printf("\n");
    printf("%ld\n", ft_strlcpy(d, e, 5));
    printf("\n");
    printf("\n");
    printf("\n");
    printf("ORIGINAL\n");
    printf("\n");
    printf("\n");
    printf("\n");
    printf("%s\n", strcpy(e, d));
}