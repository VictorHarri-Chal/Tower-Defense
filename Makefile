##
## EPITECH PROJECT, 2020
## Makefile
## File description:
## Makefile
##

SRC 		=	src/main.c 						\
				src/my_defender.c 				\
				src/init/init_all_struct.c 		\
				src/init/init_basics.c 			\
				src/init/init_menu.c 			\
				src/init/init_resume_menu.c 	\
				src/init/init_resume_menu2.c 	\
				src/init/init_game.c 			\
				src/init/init_boxes_pos.c 		\
				src/init/init_button.c 			\
				src/init/init_htp.c 			\
				src/init/init_tower_pos.c 		\
				src/events/analyse_event.c 		\
				src/events/menu_event.c 		\
				src/events/resume_menu_event.c 	\
				src/events/game_event.c 		\
				src/events/is_clicked.c 		\
				src/events/is_icone_clicked.c 	\
				src/events/htp_event.c 			\
				src/loop.c 						\
				src/draw/draw_menu.c 			\
				src/draw/draw_resume_menu.c 	\
				src/draw/draw_game.c 			\
				src/draw/draw_tower.c 			\
				src/draw/draw_htp.c 			\
				src/draw/update_ennemies.c 		\
				src/destroy/destroy.c 			\
				src/destroy/destroy2.c 			\
				src/tools.c 					\

NAME	=	my_defender

CC = gcc

CFLAGS	+=	-Wall -Wextra -Werror -Wshadow -I./include/

SFML 	=-lcsfml-graphics -lcsfml-system -lcsfml-audio

OBJ	=		$(SRC:.c=.o)

all:		$(NAME)

$(NAME):		$(OBJ)
				$(CC) -o $(NAME) $(OBJ) $(CFLAGS) $(SFML)
				rm -f $(OBJ)

clean:
				rm -f $(OBJ)

fclean:	clean
				rm -f $(NAME)

re:			fclean all

dbg:		CFLAGS += -g
dbg: re

.PHONY:	all	clean	fclean re
