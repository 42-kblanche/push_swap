NAME = push_swap
CC = cc
AR = ar rcs
test: DEBUG = -g
all: DEBUG =
CFLAGS = -Wall -Wextra -Werror
NEUTRAL = \033[0;0m
RED = \033[0;31m
YELLOW = \033[0;33m
BLUE = \033[0;34m

SRCS = libft/ft_atoi.c \
	   libft/ft_calloc.c \
	   libft/ft_isalnum.c \
	   libft/ft_isalpha.c \
	   libft/ft_isascii.c \
	   libft/ft_isdigit.c \
	   libft/ft_isprint.c \
	   libft/ft_isspace.c \
	   libft/ft_itoa.c \
	   libft/ft_itoh.c \
	   libft/ft_memcpy.c \
	   libft/ft_ptoh.c \
	   libft/ft_putstr_fd.c \
	   libft/ft_strdup.c \
	   libft/ft_strfind.c \
	   libft/ft_strlcpy.c \
	   libft/ft_strlen.c \
	   libft/ft_strncmp.c \
	   libft/ft_tolower.c \
	   libft/ft_toupper.c \
	   ft_ilist/ft_ilist_delete.c \
	   ft_ilist/ft_ilist_new.c \
	   ft_ilist/ft_ilist_push.c
OBJS = $(SRCS:.c=.o)

all: $(NAME)

debug: $(NAME)

re: fclean all

$(NAME): $(OBJS) main.c
	@$(CC) $(CFLAGS) $(DEBUG) $^ -o $(NAME)
	@printf "${YELLOW}Building executable ${BLUE}${NAME}\n${NEUTRAL}"

%.o: %.c
	@$(CC) $(CFLAGS) $(DEBUG) -o $@ -c $^

fclean: clean
	@rm -f $(NAME)
	@printf "${RED}Deleting executable\n${NEUTRAL}"

clean:
	@rm -f $(OBJS)
	@printf "${RED}Deleting object files\n${NEUTRAL}"

.PHONY: all fclean clean re
