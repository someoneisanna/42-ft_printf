# ---------------------------------- VARIABLES ---------------------------------

# Name of the program to be created
NAME = libft.a

# Compiler and flags - subject specifies which to use
CC = cc
CFLAGS = -Wall -Wextra -Werror

# Shell commands to be used
#	rm: remove files or directories
#	-f: ignore nonexistent files and arguments
RM = rm -f

#	ar: creates/modifies/extracts from archives
#	-r: insert the files member into archive (with replacement)
#	-c: creates the archive
#	-s: if you put that, you don't need ranlib
AR = ar -rcs

# Source files - mandatory functions
SRCS = ft_isalpha.c ft_isdigit.c ft_isalnum.c ft_isascii.c ft_isprint.c \
		ft_strlen.c ft_memset.c ft_bzero.c ft_memcpy.c ft_memmove.c \
		ft_strlcpy.c ft_strlcat.c ft_toupper.c ft_tolower.c ft_strchr.c \
		ft_strrchr.c ft_strncmp.c ft_memchr.c ft_memcmp.c ft_strnstr.c \
		ft_atoi.c ft_calloc.c ft_strdup.c ft_substr.c ft_strjoin.c \
		ft_strtrim.c ft_split.c ft_itoa.c ft_strmapi.c ft_striteri.c \
		ft_putchar_fd.c ft_putstr_fd.c ft_putendl_fd.c ft_putnbr_fd.c

# Create the object files
S_OBJS = $(SRCS:.c=.o)

# Bonus files
BONUS = ft_lstnew_bonus.c ft_lstadd_front_bonus.c ft_lstsize_bonus.c \
		ft_lstlast_bonus.c ft_lstadd_back_bonus.c ft_lstdelone_bonus.c \
		ft_lstclear_bonus.c ft_lstiter_bonus.c ft_lstmap_bonus.c

# Create the object (bonus) files
B_OBJS = $(BONUS:.c=.o)

# ------------------------------------ RULES -----------------------------------

# First mandatory rule
all: $(NAME)

# Compiles .c files into .o files provided that %.c exists or can be made
# $<: name of the first prerequisite (the .c file)
# $@: name of the target (the .o file)
# OBS.: you don't nedd this if you use $(SRCS:.c=.o)
%.o : %.c
	$(CC) $(CFLAGS) -c $< -o $@ -I.

# Create the library without bonus (when you run 'make')
$(NAME): $(S_OBJS)
	$(AR) $(NAME) $(S_OBJS)

# Create the library with bonus (when you run 'make bonus')
bonus: $(S_OBJS) $(B_OBJS)
	$(AR) $(NAME) $(S_OBJS) $(B_OBJS)

# Remove the object files
clean:
	$(RM) $(S_OBJS) $(B_OBJS)

# Remove the object files and the library (libft.a)
fclean: clean
	$(RM) $(NAME)

# Remove the object files and the library (libft.a) and recompile
re: fclean all

# Rule to make sure that the rules 'all' and 'bonus' are not associated with a
# file name (in case there is a file named 'all' or 'bonus')
.PHONY: all bonus clean fclean re
