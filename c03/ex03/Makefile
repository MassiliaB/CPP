NAME = diamondtrap

SRCS = $(shell find . -name "*.cpp")

OBJS = $(SRCS:.cpp=.o)

CC = c++ -Wall -Wextra -Werror -std=c++98 #-Wshadow and -Wno-shadow

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
