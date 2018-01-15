#* ************************************************************************** *#
#*                                                                            *#
#*                                                        :::      ::::::::   *#
#*   Makefile                                           :+:      :+:    :+:   *#
#*                                                    +:+ +:+         +:+     *#
#*   By: mtassett <mtassett@student.42.fr>          +#+  +:+       +#+        *#
#*                                                +#+#+#+#+#+   +#+           *#
#*   Created: 2015/11/10 19:45:01 by mtassett          #+#    #+#             *#
#*   Updated: 2018/01/05 16:24:56 by mtassett         ###   ########.fr       *#
#*                                                                            *#
#* ************************************************************************** *#

NAME :=		real-test
NAME_PATH :=	./
SRC_PATH :=	./
VPATH := .:atoi:ft_strlen:strlen2:getnsiz:getunsiz:memcmp:strchr
SRC_NAME :=	main.c \
			00_atoi_launcher.c 01_atoi_nbr.c 02_atoi_letter.c \
			03_atoi_nbrnletter.c 04_atoi_spaces.c 05_atoi_negnbr.c \
			06_atoi_negsign.c 07_atoi_possign.c 08_atoi_intmin.c \
			09_atoi_intmax.c 10_atoi_posnneg.c 11_atoi_blank.c 12_atoi_zero.c \
			13_atoi_nothing.c 14_atoi_null.c 15_atoi_hardtest.c \
			00_ft_strlen_launcher.c 01_ft_strlen_basic.c 02_ft_strlen_char_bound.c 03_ft_strlen_size_bound.c 04_ft_strlen_dirty_buff.c 05_ft_strlen_null.c \
			00_strlen2_launcher.c 01_strlen2_basic.c 02_strlen2_char_bound.c 03_strlen2_size_bound.c 04_strlen2_dirty_buff.c 05_strlen2_null.c \
			00_getnsiz_launcher.c 01_getnsiz_basic.c 02_getnsiz_limit.c 03_getnsiz_mid.c \
			00_getunsiz_launcher.c 01_getunsiz_basic.c 02_getunsiz_limit.c 03_getunsiz_mid.c \
			00_memcmp_launcher.c 01_memcmp_basic_equal.c 02_memcmp_basic_uneq.c 03_memcmp_basic_siz.c 04_memcmp_basic_siz2.c 05_memcmp_med_equal.c 06_memcmp_med_uneq.c \
			00_strchr_launcher.c 01_strchr_search_char.c 02_strchr_space.c 03_strchr_search_abs.c

OBJ_PATH :=	./obj/
OBJ_NAME :=	$(SRC_NAME:.c=.o)
INC_PATH := 	../framework/inc ../libft/inc .

SRC :=		$(addprefix $(SRC_PATH),$(SRC_NAME))
OBJ :=		$(addprefix $(OBJ_PATH),$(OBJ_NAME))
INC :=		$(addprefix -I,$(INC_PATH))

CFLAGS :=	-Wall -Werror -Wextra -march=native -fno-builtin -O2 -g #-fsanitize=address
UNAME :=	$(shell uname)

ifeq ($(UNAME), Darwin)
	ECHO := echo
	NORM := norminette
	CC := gcc
endif
ifeq ($(UNAME), Linux)
	ECHO := echo -e
	CC := clang
	NORM := 42norminette
	CFLAGS += -Wno-unused-result
endif
ifeq ($(findstring CYGWIN_NT-,$(UNAME)),CYGWIN_NT-)
	ECHO := /bin/echo -e
	CC := gcc
	CFLAGS += -m64
endif

all: $(NAME)

link: $(OBJ) libunit libft
	@$(ECHO) "\x1b[33mCreating output folder...\x1b[0m"
	@mkdir -p $(NAME_PATH)
	@$(ECHO) "\x1b[32mDone!"
	@$(ECHO) "\x1b[33mObject files created, Now linking...\x1b[0m"
	$(CC) $(INC) $(OBJ) -L../libft -lft -L../framework -lunit -o $(NAME_PATH)$(NAME) 
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
