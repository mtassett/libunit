#* ************************************************************************** *#
#*                                                                            *#
#*                                                        :::      ::::::::   *#
#*   Makefile                                           :+:      :+:    :+:   *#
#*                                                    +:+ +:+         +:+     *#
#*   By: mtassett <mtassett@student.42.fr>          +#+  +:+       +#+        *#
#*                                                +#+#+#+#+#+   +#+           *#
#*   Created: 2015/11/10 19:45:01 by mtassett          #+#    #+#             *#
#*   Updated: 2017/02/11 02:18:28 by mtassett         ###   ########.fr       *#
#*                                                                            *#
#* ************************************************************************** *#

NAME =		libunit.a
NAME_PATH =	./
SRC_PATH =	./src/
SRC_NAME =	unit_load.c unit_print.c

OBJ_PATH =	./obj/
OBJ_NAME =	$(SRC_NAME:.c=.o)
INC_PATH = 	./inc/

SRC =		$(addprefix $(SRC_PATH),$(SRC_NAME))
OBJ =		$(addprefix $(OBJ_PATH),$(OBJ_NAME))
INC =		$(addprefix -I,$(INC_PATH))

CFLAGS =	-Wall -Werror -Wextra -c -march=native -fno-builtin -g #-fsanitize=address
UNAME :=	$(shell uname)


ifeq ($(UNAME), Darwin)
ECHO = echo
NORM = norminette
CC = gcc
AR = ar -ruvcs
endif
ifeq ($(UNAME), Linux)
ECHO = echo -e
CC = clang
NORM = 42norminette
AR = ar -rucvsU
CFLAGS += -Wno-unused-result
endif

all: $(NAME)

$(NAME): $(OBJ)
	@$(ECHO) "\x1b[33mCreating output folder...\x1b[0m"
	@mkdir -p $(NAME_PATH)
	@$(ECHO) "\x1b[32mDone!"
	@$(ECHO) "\x1b[33mObject files created, Now generating lib...\x1b[0m"
	@$(AR) $(NAME_PATH)$(NAME) $(OBJ)
	@$(ECHO) "\x1b[32mDone!\nLibft compilation sucessfull!\x1b[0m"

$(OBJ_PATH)%.o: $(SRC_PATH)%.c
	@mkdir -p $(OBJ_PATH)
	$(CC) $(CFLAGS) $(INC) -o $@ -c $<

clean:
	@$(ECHO) "\x1b[33mCleaning temp files...\x1b[0m"
	rm -f $(OBJ)
	@$(ECHO) "\x1b[32mDone!\x1b[0m"
	@$(ECHO) "\x1b[33mRemoving temp folder...\x1b[0m"
	@rmdir $(OBJ_PATH) 2>/dev/null || true
	@$(ECHO) "\x1b[32mDone!\x1b[0m"

fclean: clean
	@$(ECHO) "\x1b[33mDeleting lib...\x1b[0m"
	rm -f $(NAME_PATH)$(NAME)
	@$(ECHO) "\x1b[32mDone!\n\x1b[33mDeleting lib folder...\x1b[0m"
	@rmdir $(NAME_PATH) 2>/dev/null || true
	@$(ECHO) "\x1b[32mDone!\n$(NAME) is clean as fuck!\x1b[0m"

re: fclean all

norme:
	$(NORM) $(SRC)
	$(NORM) $(INC_PATH)libft.h

.NOTPARALLEL: re
.PHONY: all $(NAME) clean fclean re norme
