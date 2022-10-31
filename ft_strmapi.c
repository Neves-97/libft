/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strmapi.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: roda-min <roda-min@student.42lisboa.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/31 11:42:09 by roda-min          #+#    #+#             */
/*   Updated: 2022/10/31 11:43:00 by roda-min         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <stdlib.h>

/*
** Applies the function f to each character of the string passed
** as argument by giving its index as first argument to create a
** “fresh” new string (with malloc(3)) resulting from the successive
** applications of f.
** Param. #1 The string to map.
** Param. #2 The function to apply to each character of s and its index.
** Return value The “fresh” string created from the successive applications of
** f.
** Libc functions malloc(3)
*/

char *ft_strmapi(char const *s, char (*f)(unsigned int, char))
{

}