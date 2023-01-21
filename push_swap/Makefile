# - SRC ---------------------------------------------------------------

NAME 	=	push_swap

CC	 	= @gcc

FLAG 	= -Wall -Werror -Wextra

SRC	 	=	src/create_a.c \
			src/move.c \
			src/move2.c \
			src/move3.c \
			src/move4.c \
			src/push_swap.c \
			src/sort.c \
			src/utils.c \
			src/utils2.c \
			src/utils3.c \
			src/utils4.c \
			src/utils5.c \
			src/error.c \
			src/sort_all.c \
			src/sort_all_2.c \
			src/create_new_pile.c \
			src/move_na.c \
			src/cost.c \
			src/push_min.c \
			src/error_part2.c

SRC_BONUS = bonus/checker.c \
  			bonus/create_a.c \
			bonus/error.c \
			bonus/move.c \
			bonus/move2.c \
			bonus/move3.c \
			bonus/utils.c \
			bonus/utils2.c \
			bonus/utils3.c \
			bonus/utils4.c \
			bonus/order.c \
			get_next_line/get_next_line.c \
			get_next_line/get_next_line_utils.c

OBJS 	  = $(SRC:.c=.o)

BONUS     = $(BONUS:.c=.o)

# - Colors ------------------------------------------------------------

# Colors

GREY 	 := "\033[1;30m"
RED 	 :=	"\033[1;31m"
GREEN 	 := "\033[1;32m"
YELLOW 	 := "\033[1;33m"
BLUE	 :=	"\033[1;36m"
PURPLE	 :=	"\033[1;35m"
WHITE	 :=	"\033[1;37m"
END		 :=	"\033[0;0m"

# - Files -------------------------------------------------------------

all : $(NAME)

$(NAME) : $(OBJS)
	@$(CC) $(FLAGS) $(OBJS) -o $(NAME)
	@echo $(GREEN)"$(NAME) has been successfully compiled!"$(END)

checker : $(BONUS)
	@$(CC) $(FLAGS) $(BONUS) -o checker
	@echo $(GREEN)"checker has been successfully compiled!"$(END)

# - Clean -------------------------------------------------------------

clean :
	@rm -rf $(OBJS) $(BONUS)
	@echo $(RED)"CLEAN SUCCES !"$(END)

fclean : clean
	@rm -rf $(NAME) checker

re : fclean all

# ---------------------------------------------------------------------

chainsaw :
	@echo $(RED)"DENJI SPINAL CORD SWORD !"$(END)




