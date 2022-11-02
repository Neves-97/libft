# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: roda-min <roda-min@student.42lisboa.com    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2022/10/31 11:42:30 by roda-min          #+#    #+#              #
#    Updated: 2022/11/02 11:58:03 by roda-min         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = libft.a

LIBFT = libft.h

CC = gcc #clang

CFLAGS = -Wall -Werror -Wextra


all: $(NAME)

# -r
# Eliminate use of the built-in implicit rules
# also clears out the default list of suffixes for suffix rules

#-c
# Change to directory dir before reading the makefiles. 
# If multiple ‘-C options are specified, each is interpreted 
# relative to the previous one: ‘-C / -C etc’ is equivalent
# to ‘-C /etc’. This is typically used with recursive invocations of make

#-s
#Silent operation; do not print the recipes as they are executed.


# c

# Create the archive. The specified archive is always created if it did not
# exist, when you request an update. But a warning is issued unless you 
# specify in advance that you expect to create it, by using this modifier.

# r

# Insert the files member... into archive (with replacement). 
# This operation differs from q in that any previously existing
# members are deleted if their names match those being added.

# s

# Write an object-file index into the archive, or update an existing one,
#  even if no other change is made to the archive. You may use this
#   modifier flag either with any operation, or alone.

# ar -- create and maintain library archives

$(NAME): $(OBS)
	ar -rcs $(NAME) $(OBS)

clean:
	$(RM) $(OBS)

fclean: clean
	$(RM) $(NAME)

re: fclean all

.PHONY: all clean fclean re