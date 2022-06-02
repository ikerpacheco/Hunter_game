##
## EPITECH PROJECT, 2021
## Makefile
## File description:
## Makefile
##

SRC	=	src/my_hunter.c \
		src/my_putstr.c \
		src/my_putchar.c	\
		src/structs/background.c	\
		src/structs/black_heart.c	\
		src/structs/duck.c	\
		src/structs/heart.c	\
		src/structs/sound.c	 \
		src/structs/game.c \
		src/draw_sprites.c \
		src/ducks.c	\
		src/reset_position.c	\
		src/analyse_duck_pos.c	\
		src/move_rect.c	\
		src/loop_movement.c

OBJ	=	$(SRC:.c=.o)

NAME	=	my_hunter

all:	$(NAME)

$(NAME):	$(OBJ)
	gcc $(OBJ) -lcsfml-graphics -lcsfml-window -lcsfml-system -lcsfml-audio -o $(NAME)

clean:
	rm -rf $(OBJ)

fclean:	clean
		rm -f $(NAME)

re:		fclean all