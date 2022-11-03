# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: roda-min <roda-min@student.42lisboa.com    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2022/10/31 11:42:30 by roda-min          #+#    #+#              #
#    Updated: 2022/11/03 15:45:08 by roda-min         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

# NAME = libft.a

# LIBFT = libft.h

# CC = gcc #clang

# CFLAGS = -Wall -Werror -Wextra


# all: $(NAME)

# # -r
# # Eliminate use of the built-in implicit rules
# # also clears out the default list of suffixes for suffix rules

# #-c
# # Change to directory dir before reading the makefiles. 
# # If multiple ‘-C options are specified, each is interpreted 
# # relative to the previous one: ‘-C / -C etc’ is equivalent
# # to ‘-C /etc’. This is typically used with recursive invocations of make

# #-s
# #Silent operation; do not print the recipes as they are executed.


# # c

# # Create the archive. The specified archive is always created if it did not
# # exist, when you request an update. But a warning is issued unless you 
# # specify in advance that you expect to create it, by using this modifier.

# # r

# # Insert the files member... into archive (with replacement). 
# # This operation differs from q in that any previously existing
# # members are deleted if their names match those being added.

# # s

# # Write an object-file index into the archive, or update an existing one,
# #  even if no other change is made to the archive. You may use this
# #   modifier flag either with any operation, or alone.

# # ar -- create and maintain library archives

# $(NAME): $(OBS)
# 	ar -rcs $(NAME) $(OBS)

# clean:
# 	$(RM) $(OBS)

# fclean: clean
# 	$(RM) $(NAME)

# re: fclean all

# .PHONY: all clean fclean re

CC			= gcc
CFLAGS		= -Wall -Wextra -Werror
RM			= rm -f

NAME		= libft.a
INCLUDE		= libft.h

SRCS		= ft_bzero.c ft_calloc.c ft_isalnum.c ft_isalpha.c \
				ft_isascii.c ft_isdigit.c ft_isprint.c ft_memccpy.c \
				ft_memchr.c ft_memcmp.c ft_memcpy.c ft_memmove.c \
				ft_memset.c ft_strchr.c ft_strdup.c ft_strlcat.c \
				ft_strlcpy.c ft_strlen.c ft_strncmp.c ft_strnstr.c \
				ft_strrchr.c ft_tolower.c ft_toupper.c ft_itoa.c \
				ft_putchar_fd.c ft_putendl_fd.c ft_putnbr_fd.c \
				ft_putstr_fd.c ft_split.c ft_strjoin.c ft_strmapi.c \
				ft_strtrim.c ft_substr.c ft_atoi.c

OBJS		= $(SRCS:.c=.o)

BONUS_S		= ft_lstsize.c ft_lstnew.c ft_lstmap.c ft_lstiter.c ft_lstlast.c \
				ft_lstdelone.c ft_lstclear.c ft_lstadd_front.c ft_lstadd_back.c

BONUS_O	=	$(BONUS_S:.c=.o)

all:		$(NAME)

$(NAME):	$(OBJS) $(INCLUDE)
			ar -rcs $(NAME) $(OBJS)
			ranlib	$(NAME)

bonus:		$(NAME) $(BONUS_O)
			ar -rcs $(NAME) $(BONUS_O)

.c.o:
			$(CC) $(CFLAGS) -I$(INCLUDE) -c $< -o $(<:.c=.o)

clean:
			$(RM) $(OBJS) $(BONUS_O)

fclean:		clean
			$(RM) $(NAME)

re:			fclean all

rebonus:	fclean bonus

.PHONY:		all clean fclean re bonus rebonus