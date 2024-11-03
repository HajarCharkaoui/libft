CC = gcc

CFLAGS = -Wall -Wextra -Werror

TARGET = libft

NAME = libft.a

SRC = ft_isalpha.c \
	  ft_isascii.c \
	  ft_isdigit.c \
	  ft_isprint.c \
	  ft_isalnum.c \
	  ft_toupper.c \
	  ft_tolower.c \
		ft_strlen.c \
		ft_strnstr.c \
		ft_strlcpy.c \
		ft_strlcat.c \
		ft_strchr.c \
		ft_strrchr.c \
		ft_strncmp.c \
		ft_memcpy.c \
		ft_memset.c \
		ft_memmove.c \
		ft_bzero.c \
		ft_memchr.c \
		ft_memcmp.c \
		ft_atoi.c \
		ft_substr.c \
		ft_calloc.c \
		ft_strdup.c \
		ft_strjoin.c \
		ft_strtrim.c \
		ft_split.c \
		ft_itoa.c \
		main.c

OBJ = $(SRC:.c=.o)

all: $(NAME)
#creation de la bibliotheque
$(NAME) : $(OBJ)
	ar rcs $(NAME) $(OBJ)

test: $(NAME) main.c
	$(CC) $(CFLAGS) main.c $(NAME) -o libft_test

run_tests: test
	./libft_test


$ (TARGET) : $(OBJ)
	$(CC) $(OBJ) -o $(TARGET)

#Compilation des fichiers objets
%.o: %.c
	$(CC) $(CFLAGS) -c $< -o $@


clean:
	rm -f $(OBJ) $(TARGET)