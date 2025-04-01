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

TEST_NAME	=	unit_tests

TEST_SRCS	=	tests/test_add.c	\
				tests/add_functions.c

TEST_OBJS	=	$(TEST_SRCS:.c=.o)

TEST_FLAGS	=	-lcriterion --coverage

all:	$(NAME)

$(NAME):	$(OBJS)
	$(CC) -o $(NAME) $(OBJS) $(LDFLAGS)

clean:
	rm -f $(OBJS)
	rm -f $(TEST_OBJS)
	rm -f *.gcno
	rm -f *.gcda
	rm -f tests/*.gcno
	rm -f tests/*.gcda
	rm -f unit_tests-*.gc*

fclean: clean
	rm -f $(NAME)
	rm -f $(TEST_NAME)

tests_run: fclean
	@echo "Compiling tests..."
	mkdir -p tests
	$(CC) -o $(TEST_NAME) $(TEST_SRCS) $(CPPFLAGS) $(TEST_FLAGS)
	@echo "Running tests..."
	./$(TEST_NAME)
	@echo "Tests completed successfully"

re:	fclean all
