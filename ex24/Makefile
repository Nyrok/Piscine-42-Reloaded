# Compiler
CC = cc

# Compiler flags
CCFLAGS = -Wall -Wextra -Werror -g3

SRCDIR = srcs
INCDIR = includes
LIB = libft.a

# Target executable
SRCS =	${SRCDIR}/ft_putchar.c \
	${SRCDIR}/ft_putstr.c \
	${SRCDIR}/ft_swap.c \
	${SRCDIR}/ft_strlen.c \
	${SRCDIR}/ft_strcmp.c

INCLUDES =	${INCDIR}/ft_h.h

OBJS = ${SRCS:.c=.o}

all:	${LIB}

${LIB}:	${OBJS}
	ar rcs ${LIB} ${OBJS}

.c.o:
	${CC} ${CCFLAGS} -I ${INCDIR} -c $< -o $@

clean:
	rm -f ${OBJS}

fclean:	clean
	rm -f ${LIB}

re:	fclean all

.PHONY:	all clean fclean re
