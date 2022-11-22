NAME = libft.a

SRC	=	ft_atoi.c		\
		ft_bzero.c		\
		ft_calloc.c		\
		ft_isalnum.c	\
		ft_isalpha.c	\
		ft_isascii.c	\
		ft_isdigit.c	\
		ft_isprint.c	\
		ft_itoa.c		\
		ft_memchr.c		\
		ft_memcmp.c		\
		ft_memcpy.c		\
		ft_memmove.c	\
		ft_memset.c		\
		ft_putchar_fd.c	\
		ft_putendl_fd.c	\
		ft_putnbr_fd.c	\
		ft_putstr_fd.c	\
		ft_split.c		\
		ft_strchr.c		\
		ft_strdup.c		\
		ft_striteri.c	\
		ft_strjoin.c	\
		ft_strlcat.c 	\
		ft_strlcpy.c	\
		ft_strlen.c 	\
		ft_strmapi.c	\
		ft_strncmp.c	\
		ft_strnstr.c	\
		ft_strrchr.c	\
		ft_strtrim.c	\
		ft_substr.c		\
		ft_tolower.c	\
		ft_toupper.c	\

# In GNU make, $(SRCS:.c=.o) is a substitution reference, and it
# means "the value of the SRCS 
# variable, where .c is replaced by .o when it appears at the end of 
# a word." In your example, SRCS has the value program_1.c 
# program_2.c program_3.c, so $(SRCS:.c=.o) means program_1.o 
# program_2.o program_3.o.

OBJS = $(SRC:.c=.o)

BONUS =	ft_lstadd_back.c	\
		ft_lstadd_front.c	\
		ft_lstclear.c		\
		ft_lstdelone.c		\
		ft_lstiter.c		\
		ft_lstlast.c		\
		ft_lstmap.c			\
		ft_lstnew.c			\
		ft_lstsize.c		\

BONUS_OBJS = $(BONUS:.c=.o)

# ar maintains archive libraries. The archive library is a collection of files, 
# typically object files. Using ar, you can create a new library, add members 
# to an existing library, delete members from a library, extract members from a 
# library, and print a table of contents for a library.
# A library member is an arbitrary file. Typically, these files are object 
# files or side files, suitable for use by a linkage editor.
# If any members of a library are object files, ar creates and maintains an 
# external symbol index for link-editing.
# Member names in an archive are only the final component of any path name. 
# When creating a new library member (member) as given on the command line, 
# ar uses the full path name given. When storing the member name in the library, 
# or comparing a member name, ar uses only the final component.

CC = gcc
CFLAGS = -Wall -Werror -Wextra
RM = rm -rf
AR = ar -crs

$(NAME): $(OBJS) $(BONUS_OBJS)
	$(AR) $@ $^

# The file name of the target of the rule. If the target is an archive member,
# then ' $@ ' is the name of the archive file. 
# In a pattern rule that has multiple targets (see Introduction to Pattern Rules), ' $@ ' 
# is the name of whichever target caused the rule's recipe to be run.


# The names of all the prerequisites, with spaces between them. 
# For prerequisites which are archive members, only the named
# member is used (see Archives). A target has only one prerequisite
# on each other file it depends on, no matter how many times each
# file is listed as a prerequisite. So if you list a prerequisite
# more than once for a target, the value of $^ contains just one
# copy of the name.


# specifies how to make a file n.o, with another file n.c as its prerequisite, 
# provided that n.c exists or can be made.

# "%.o: %.c" means that any file ending in .o depends on the same filename ending in
# .c to be present.

%.o: %.c
	$(CC) $(CFLAGS) -c $^ -o $@

all: $(NAME)

clean:
	$(RM) $(NAME) $(OBJS) $(BONUS_OBJS)

fclean:	clean
	$(RM) $(OBJS)		

re:	fclean all

bonus: $(NAME) $(BONUS_OBJS)
	$(AR) $(NAME)   $(BONUS_OBJS)

.PHONY:	all clean fclean re bonus
