#ifndef LIBFT_H
#define LIBFT_H
#include <stdlib.h>
#include <unistd.h>
#include <stdio.h>
#include <stdio.h>

typedef struct	s_list
{
	void	*content;
	struct	s_list *next;
}	t_list;



void	ft_bzero(void *s, size_t n);
void	*ft_calloc(size_t nitems, size_t size);
void	*ft_memchr(const void *str, int c, size_t n);
void	*ft_memcpy(void *dest, const void *src, size_t n);
void	*ft_memmove(void *dest, const void *src, size_t n);
void	*ft_memset(void *str, int c, size_t n);




int	ft_memcmp(const void *str1, const void *str2, size_t n);
int	ft_atoi(const char *str);
int	ft_isalnum(int c);
int	ft_isalpha(int c);
int	ft_isascii(int c);
int	ft_isdigit(int c);
int	ft_isdigit(int c);
int	ft_toupper(int c);
int	ft_tolower(int c);
int	ft_isprint(int c);



char *ft_strrchr(const char *s, int c);
char	*ft_strchr(const char *s, int c);


size_t	ft_strlen(const char *s);

#endif