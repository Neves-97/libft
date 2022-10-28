#include <stdio.h>
#include <string.h>

// The C library function int memcmp(const void *str1, const void *str2, size_t n)
// compares the first n bytes of memory area str1 and memory area str2.

int ft_memcmp(const void *str1, const void *str2, size_t n)
{
    const unsigned char	*s1;
	const unsigned char	*s2;
	size_t				i;

	i = 0;
	s1 = (const unsigned char *)str1;
	s2 = (const unsigned char *)str2;
	
    if (!s1 || !s2)
    {
        return ;
    }
    
    while (i < n)
	{
		if (s1[i] != s2[i])
        {
			return (s1[i] - s2[i]);
		}
        i++;
}