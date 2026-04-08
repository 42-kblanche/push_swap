NAME = push_swap
CC = cc
MAIN = main.c
DMODE =
CFLAGS = -Wall -Wextra -Werror

CFLAGS += -g
DMODE += (debug mode)

NEUTRAL = \033[0;0m
RED = \033[0;31m
YELLOW = \033[0;33m
BLUE = \033[0;34m

INCLUDES = includes

FT = ft
LIBFT = libft.a
LIBFTDIR = src/libft
INCFT = $(INCLUDES)/$(LIBFT)
SRCFT = $(LIBFTDIR)/$(LIBFT)

SRCS = $(MAIN)
OBJS = $(SRCS:.c=.o)

all: $(NAME)

re: fclean all

$(NAME): $(OBJS) $(INCFT)
	@$(CC) $(CFLAGS) $(OBJS) -L$(INCLUDES) -l$(FT) -o $@
	@printf "${YELLOW}Building ${BLUE}$@ ${YELLOW}${DMODE}\n${NEUTRAL}"

%.o: %.c
	@$(CC) $(CFLAGS) -o $@ -c $^
	@printf "Compiling ${BLUE}$^ ${YELLOW}${DMODE}\n${NEUTRAL}"

$(INCFT):
	@make --silent -C $(LIBFTDIR)
	@mkdir -p $(INCLUDES) && cp $(SRCFT) $(INCLUDES)
	@make --silent -C $(LIBFTDIR) fclean
	@echo "${YELLOW}Copying libft archive to libraries folder\n${NEUTRAL}"

fclean: clean
	@rm -rf $(INCLUDES) $(NAME)
	@printf "${RED}Deleting archives and binaries\n${NEUTRAL}"

clean:
	@rm -f $(OBJS)
	@printf "${RED}Deleting object files\n${NEUTRAL}"

.PHONY: all fclean clean re
