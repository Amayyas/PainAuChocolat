##
## EPITECH PROJECT, 2025
## Chocolatine
## File description:
## Makefile
##
################################################################
## █████╗ ███╗   ███╗ █████╗ ██╗   ██╗██╗   ██╗ █████╗ ███████╗#
##██╔══██╗████╗ ████║██╔══██╗╚██╗ ██╔╝╚██╗ ██╔╝██╔══██╗██╔════╝#
##███████║██╔████╔██║███████║ ╚████╔╝  ╚████╔╝ ███████║███████╗#
##██╔══██║██║╚██╔╝██║██╔══██║  ╚██╔╝    ╚██╔╝  ██╔══██║╚════██║#
##██║  ██║██║ ╚═╝ ██║██║  ██║   ██║      ██║   ██║  ██║███████║#
##╚═╝  ╚═╝╚═╝     ╚═╝╚═╝  ╚═╝   ╚═╝      ╚═╝   ╚═╝  ╚═╝╚══════╝#
################################################################

NAME	=	add

SRCS	=	main.c		\

CPPFLAGS	=	-I./include

OBJS	=	$(SRCS:.c=.o)

all:	$(NAME)

$(NAME):	$(OBJS)
	$(CC) -o $(NAME) $(OBJS) $(LDFLAGS)

clean:
	rm -f $(OBJS)

fclean: clean
	rm -f $(NAME)

re:	fclean all
