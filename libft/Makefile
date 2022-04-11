# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: acoquele <acoquele@student@.42.fr>         +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2021/10/04 17:00:22 by acoquele          #+#    #+#              #
#    Updated: 2022/04/06 10:58:16 by acoquele         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME =  libft.a

INC =   libft.h

OBJECT_FILES = *.o

#*******#
# Part 1#
#*******#

SRC1 =  ft_isalpha.c \
	ft_isdigit.c \
	ft_isalnum.c \
	ft_isascii.c \
	ft_isprint.c \
	ft_strlen.c \
	ft_memset.c \
	ft_bzero.c \
	ft_memcpy.c \
	ft_memmove.c \
	ft_strlcpy.c \
	ft_toupper.c \
	ft_tolower.c \
	ft_strchr.c \
	ft_strrchr.c \
	ft_strncmp.c \
	ft_memchr.c \
	ft_memcmp.c \
	ft_strlcat.c \
	ft_atoi.c \
	ft_calloc.c \
	ft_strdup.c \
	ft_strnstr.c

#*******#
# Part 2#
#*******#

SRC2 = ft_substr.c \
	ft_strjoin.c \
	ft_strtrim.c \
	ft_putchar_fd.c \
	ft_putstr_fd.c \
	ft_putendl_fd.c \
	ft_itoa.c \
	ft_putnbr_fd.c \
	ft_strmapi.c \
	ft_split.c \
	ft_striteri.c
	

OBJ = ${SRC:.c=.o}


SRC	:= $(notdir $(SRC1) $(SRC2))
OBJS = $(addprefix oubject/, $(OBJ))

CFLAGS = -Wall -Wextra -Werror -g

VPATH := src/
#---------------------------------------------------

# Colors
GR	= \033[32;1m
RE	= \033[31;1m
YE	= \033[33;1m
CY	= \033[36;1m
RC	= \033[0m

#---------------------------------------------------
all: $(NAME) 
oubject/%.o: %.c
	@printf "$(GR)+$(RC)"
	@mkdir -p oubject
	@$(CC) $(CFLAGS) -c $< -o $@

#ifeq [$(shell ls | grep "o_files" | wc -l) == 1]; then\
#	echo "done !!!";\
#fi

C_O = \
	if [ ! -e  "oubject" ]; then \
	mkdir oubject; \
	fi



$(NAME): $(INC) $(OBJS)
	@printf "\n$(GR)=== Compiled [$(CC) $(CFLAGS)] ===\n--- $(RC)\n"
	@printf "$(GR)$(SRC)\n---\n$(RC)"
	@ar -rc $(NAME) $(OBJS)
	@ranlib $(NAME)
	@echo "<<$(GR)$(NAME) ready !!$(RC)>>"

clean: deleting
	@rm -rf oubject
	@printf "$(RE)OUBJECT FILE DELETED$(RC)\n"

fclean:	deleting_lib deleting clean 
	@rm -rf $(NAME)


re: fclean  all


deleting :
	@echo "deleting OBJECT files..."

deleting_lib :
	@echo "deleting $(NAME)"
	@echo "$(RE)$(NAME) DELETED $(RC)"

save: fclean 
	@git add *.c *.h Makefile
	@git commit -m autosave
	@git push

.PHONY	= all run clean fclean re

# all: $(NAME)

# $(NAME):
# 	gcc -Wall -Wextra -Werror  -c $(SRC1) $(SRC2)
# 	ar -rv $(NAME) $(OBJECT_FILES)
# 	ranlib $(NAME)

# clean:
# 	rm -rf $(OBJECT_FILES)

# fclean:	clean
# 	rm -rf $(NAME)

# re: fclean all

# save: fclean 
# 	git add *.c libft.h Makefile
# 	git commit -m autosave
# 	git push