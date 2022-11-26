/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line.h                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: roda-min <roda-min@student.42lisboa.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/26 16:15:34 by roda-min          #+#    #+#             */
/*   Updated: 2022/11/26 18:27:13 by roda-min         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef GET_NEXT_LINE_H
# define GET_NEXT_LINE_H
# include <stdlib.h>
# include <unistd.h>
# include <string.h>
# include <stdio.h>
# include <fcntl.h>

# ifndef BUFFER_SIZE
#  define BUFFER_SIZE 5
# endif

char	*ft_substr(char const *s, unsigned int start, size_t len);
char	*ft_strjoin(char const *s1, char const *s2);
char	*ft_strdup( const char *s);
char	*ft_strchr(const char *str, int c);
size_t	ft_strlen(const char *s);

char	*get_next_line(int fd);
char	*ft_allocate(char *str);
char	*ft_save(char *str);
char	*ft_read_line(int fd, char *buf, char *new, char *txt);
#endif
