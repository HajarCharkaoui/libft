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
		ft_strmapi.c \
		ft_itoa.c \
		ft_striteri.c \
		ft_putchar_fd.c \
		ft_putstr_fd.c \
		ft_putendl_fd.c \
		ft_putnbr_fd.c \
		#main.c

BONUS_SRC = ft_lstnew.c ft_lstadd_front.c ft_lstsize.c ft_lstlast.c ft_lstadd_back.c ft_lstdelone.c

OBJ = $(SRC:.c=.o)
BONUS_OBJ = $(BONUS_SRC:.c=.o)

all: $(NAME)
#creation de la bibliotheque
$(NAME) : $(OBJ) $(BONUS_OBJ)
	ar rcs $(NAME) $(OBJ) $(BONUS_OBJ)

test: $(NAME) main.c
	$(CC) $(CFLAGS) main.c $(NAME) -o libft_test


run_tests: test
	./libft_test


$(TARGET) : $(OBJ)
	$(CC) $(OBJ) -o $(TARGET)

#Compilation des fichiers objets
%.o: %.c
	$(CC) $(CFLAGS) -c $< -o $@


clean:
	rm -f $(OBJ) $(TARGET) $(BONUS_OBJ)

fclean : clean
	rm -f $(NAME) 

re: fclean all