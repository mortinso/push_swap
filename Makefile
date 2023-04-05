# -*- MakeFile -*-

NAME		=	push_swap
CC			=	gcc
CFLAGS		=	-Wall  -Wextra
#-Werror
RM			=	rm -rf

LFT_SRCS	=	utils/libft/ft_lstadd_back.c utils/libft/ft_lstnew.c utils/libft/ft_lstlast.c \
				utils/libft/ft_strlcpy.c utils/libft/ft_strlen.c utils/libft/ft_lstclear.c \

PUSH_SRCS	=	src/push_swap.c src/stack_checker.c

SRCS		=	$(LFT_SRCS) $(PUSH_SRCS)

OBJS		=	$(patsubst utils/libft/%, obj/%, $(LFT_SRCS:%.c=%.o)) $(patsubst src/%, obj/%, $(PUSH_SRCS:%.c=%.o))

.PHONY:		all clean fclean re

all:		$(NAME)

$(NAME):	$(OBJS)
			@$(CC) $(CFLAGS) -g $(SRCS) -o $@

$(OBJS):	$(SRCS)
			@mkdir -p obj
			@$(CC) $(CFLAGS) -o $@ -c $<

clean:
			@$(RM) obj

fclean:		clean
			@$(RM) $(NAME)

re:			fclean all