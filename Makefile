NAME = libft.a

CFLAGS = -Wall -Werror -Wextra

FILES = ft_isalpha.c \
				ft_isdigit.c \
				ft_isalnum.c \
				ft_isascii.c \
				ft_isprint.c \
				ft_atoi.c \
				ft_toupper.c \
				ft_tolower.c \
				ft_strncmp.c \
				ft_strlen.c \
				ft_strlcpy.c \
				ft_strlcat.c \
				ft_memset.c \
				ft_calloc.c \
				ft_memcpy.c \
				ft_bzero.c \
				ft_strjoin.c \
				ft_strrchr.c \
				ft_strnstr.c \
				ft_strchr.c \
				ft_strdup.c \
				ft_substr.c \
				ft_strtrim.c \
				ft_split.c \
				ft_memmove.c \
				ft_itoa.c \
				ft_strmapi.c \
				ft_striteri.c \
				ft_putchar_fd.c \
				ft_putstr_fd.c \
				ft_putendl_fd.c \
				ft_putnbr_fd.c \
				ft_memcmp.c \
				ft_memchr.c

BONUS	= 	ft_lstnew.c \
		ft_lstadd_back.c \
		ft_lstadd_front.c \
		ft_lstsize.c \
		ft_lstlast.c \
		ft_lstdelone.c \
		ft_lstclear.c \
		ft_lstiter.c \
		ft_lstmap.c

B_OBJ =	$(BONUS:.c=.o)

OBJ = $(SRC:.c=.o)

all: $(NAME)

bonus: $(NAME)

SRC         =   $(FILES)
ifneq ($(filter bonus,$(MAKECMDGOALS)),)
SRC         +=   $(BONUS)
endif

$(NAME): $(OBJ)
	ar rcs $(NAME) $(OBJ)

clean:
	rm -f $(OBJ) $(B_OBJ)

fclean: clean
	rm -f $(NAME)

re: fclean all

.PHONY: clean fclean all re
