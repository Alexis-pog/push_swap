NAME = push_swap

INC = ./include/push_swap.h

ARCH = ./libft/libft.a

SRC1 = 	src/sorting.c \
		src/test_linked_liste_parser.c \
		src/list_funct.c \
		src/move.c \
		src/main.c \
		src/find_val.c

OBJ = ${SRC:.c=.o}


SRC	:= $(notdir $(SRC1))
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
	@make -C libft
	@printf "\n$(GR)=== Compiled [$(CC) $(CFLAGS)] ===\n--- $(SRC)$(RC)\n"
	@$(CC) $(OBJS) -g -o $(NAME) $(ARCH)
	@echo "<<$(GR)$(NAME) ready !!$(RC)>>"

clean: deleting
	@rm -rf oubject
	@printf "$(RE)OUBJECT FILE DELETED$(RC)\n"
	@make clean -C libft

fclean:	deleting_lib deleting clean 
	@rm -rf $(NAME)
	@make fclean -C libft


re: fclean  all
	
annoncement :
		@echo "creating program..."

deleting :
	@echo "deleting OBJECT files..."

deleting_lib :
	@echo "deleting $(NAME)"
	@echo "$(RE)$(NAME) DELETED $(RC)"

save: fclean 
	@git add *.c *.h Makefile
	@git commit -m autosave
	@git push

.PHONY	= all run clean fclean re deleting_lib annoncement save deleting