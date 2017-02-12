#* ************************************************************************** *#
#*                                                                            *#
#*                                                        :::      ::::::::   *#
#*   Makefile                                           :+:      :+:    :+:   *#
#*                                                    +:+ +:+         +:+     *#
#*   By: mtassett <mtassett@student.42.fr>          +#+  +:+       +#+        *#
#*                                                +#+#+#+#+#+   +#+           *#
#*   Created: 2015/11/10 19:45:01 by mtassett          #+#    #+#             *#
#*   Updated: 2016/12/18 18:22:40 by mtassett         ###   ########.fr       *#
#*                                                                            *#
#* ************************************************************************** *#

NAME =		test
NAME_PATH =	./
SRC_PATH =	./

VPATH = .:strlen
SRC_NAME =	main.c 00_launcher.c 01_basic_test.c 02_null_test.c 03_segv_test.c\
			04_big_test.c 05_buserror.c 06_timeout.c


OBJ_PATH =	./obj/
OBJ_NAME =	$(SRC_NAME:.c=.o)
INC_PATH = 	../framework/inc ../libft/inc .

SRC =		$(addprefix $(SRC_PATH),$(SRC_NAME))
OBJ =		$(addprefix $(OBJ_PATH),$(OBJ_NAME))
INC =		$(addprefix -I,$(INC_PATH))

CFLAGS =	-Wall -Werror -Wextra -c -march=native -fno-builtin -O2 -g #-fsanitize=address
UNAME :=	$(shell uname)


ifeq ($(UNAME), Darwin)
ECHO = echo
NORM = norminette
CC = gcc
endif
ifeq ($(UNAME), Linux)
ECHO = echo -e
CC = clang
NORM = 42norminette
CFLAGS += -Wno-unused-result
endif

all: $(NAME)

link: $(OBJ) libunit libft
	@$(ECHO) "\x1b[33mCreating output folder...\x1b[0m"
	@mkdir -p $(NAME_PATH)
	@$(ECHO) "\x1b[32mDone!"
	@$(ECHO) "\x1b[33mObject files created, Now linking...\x1b[0m"
	@$(CC) -o $(NAME_PATH)$(NAME) -L../libft -lft -L../framework -lunit $(INC) $(OBJ)
	@$(ECHO) "\x1b[32mDone!\nUnit test compilation sucessfull!\x1b[0m"

$(NAME): link
	$(NAME_PATH)$(NAME)

$(OBJ_PATH)%.o: %.c
	@mkdir -p $(OBJ_PATH)
	$(CC) $(CFLAGS) $(INC) -o $@ -c $<

libft:
	$(MAKE) -C ../libft

libunit:
	$(MAKE) -C ../framework

clean:
	@$(ECHO) "\x1b[33mCleaning temp files...\x1b[0m"
	rm -f $(OBJ)
	@$(ECHO) "\x1b[32mDone!\x1b[0m"
	@$(ECHO) "\x1b[33mRemoving temp folder...\x1b[0m"
	@rmdir $(OBJ_PATH) 2>/dev/null || true
	@$(ECHO) "\x1b[32mDone!\x1b[0m"
	make clean -C ../libft
	make clean -C ../framework

fclean: clean
	@$(ECHO) "\x1b[33mDeleting lib...\x1b[0m"
	rm -f $(NAME_PATH)$(NAME)
	@$(ECHO) "\x1b[32mDone!\n\x1b[33mDeleting lib folder...\x1b[0m"
	@rmdir $(NAME_PATH) 2>/dev/null || true
	@$(ECHO) "\x1b[32mDone!\n$(NAME) is clean as fuck!\x1b[0m"
	make fclean -C ../libft
	make fclean -C ../framework


re: fclean all

.NOTPARALLEL: re
.PHONY: all clean fclean re link
