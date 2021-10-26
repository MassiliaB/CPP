NAME = karen

SRCS = $(shell find . -name "*.cpp")

OBJS = $(SRCS:.cpp=.o)

CC = clang++ -Wall -Wextra -Werror -std=c++98

RM = rm -rf

.cpp.o:
	@$(CC) -c $< -o ${<:.cpp=.o}

all: ${NAME}

${NAME}: ${OBJS}
	@${CC} ${OBJS} -o ${NAME}

clean:
	@${RM} ${NAME}
	@${RM} ${OBJS}
	@echo "$(_RED) Everything was cleaned. $(_END)"

fclean: clean
	@${RM} ${NAME}

re: fclean all

.PHONY: all clean fclean re
