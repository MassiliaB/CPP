NAME = megaphone

SRCS = megaphone.cpp \

OBJS = $(SRCS:.c=.o)

CC = clang++ -Wall -Wextra -Werror

RM = rm -rf

.o.c = $(CC) -c $< -o ${$<.c=.o}

all: ${NAME}

clean:
	@${RM} ${NAME}
	@echo "$(_RED) Everything was cleaned. $(_END)"

fclean: clean
	@${RM} ${NAME}

re: fclean all

.PHONY: all clean fclean re%