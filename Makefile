##
## EPITECH PROJECT, 2019
## Makefile
## File description:
## make
##

SRC 		=	src/my_str_to_word_array.c \
				src/my_tabstr_to_tabint.c  \
				src/find_coordonates.c  \
				src/tab_init.c  \
				src/error_cases.c  \
				src/error_fd.c  \
				src/find_min.c

SRC_M 		= 	main.c

SRC_UT		=	utility/my_printf/my_printf_main.c \
				utility/my_printf/my_printf_special.c \
				utility/my_printf/my_printf.c \
				utility/my_print_tab.c \
				utility/my_put_nbr.c \
				utility/my_putchar.c \
				utility/my_putstr.c \
				utility/my_tablen.c

SRC_TEST	=	tests/test_myprintf_main.c \
				tests/test_myprintf.c	\
				tests/test_my_tablen.c

OBJ			=	$(SRC:.c=.o)

OBJ_M		=	$(SRC_M:.c=.o)

OBJ_TEST	=	$(SRC_TEST:.c=.o)

OBJ_UT		=	$(SRC_UT:.c=.o)

INCLUDE		=	-I ./include

NAME		=	bsq

NAME_UT		=	unit_tests

CFLAGS		=	-W -Werror -Wall -Wextra -I./include -lm

CFLAGS_UT	=	-lcriterion --coverage

LIB			=	-l

RM			=	rm -rf

all:			$(NAME)

$(NAME):    	$(OBJ_M) $(OBJ) $(OBJ_UT)
				gcc -o $(NAME) $(SRC) $(SRC_M) $(SRC_UT) $(INCLUDE) $(LIB_M) $(CFLAGS)

tests_run:		fclean all
				gcc -o $(NAME_UT) $(SRC) $(SRC_TEST) $(SRC_UT) $(INCLUDE) $(CFLAGS_UT)
				./$(NAME_UT)
				gcovr --exclude tests -b

clean:
				$(RM) $(OBJ)
				$(RM) $(OBJ_M)
				$(RM) $(OBJ_UT)
				$(RM) src/*.c~
				$(RM) utility/*.c~
				$(RM) include/*.h~
				$(RM) *.c~
				$(RM) *~

fclean:			clean
				$(RM) $(NAME)
				$(RM) $(NAME_UT)
				$(RM) $(OBJ_T)
				$(RM) *.gc*

re:				fclean all
