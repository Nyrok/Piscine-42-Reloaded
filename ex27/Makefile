# Compiler
CC = cc

# Compiler flags
CCFLAGS = -Wall -Wextra -Werror -g3

SRCDIR = srcs
INCDIR = includes
BINARY_OUTPUT = ft_display_file

# Target executable
SRCS =	${SRCDIR}/ft_display_file.c \
	${SRCDIR}/main.c

INCLUDES =	${INCDIR}/ft_file.h

all:	${BINARY_OUTPUT}

${BINARY_OUTPUT}:
	${CC} ${CCFLAGS} -I ${INCDIR} ${SRCS} -o ${BINARY_OUTPUT}

clean:
	rm -f *.o

fclean:	clean
	rm -f ${BINARY_OUTPUT}

re:	fclean all

.PHONY:	all clean fclean re
