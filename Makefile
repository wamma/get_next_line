NAME = get_next_line.a

CC = gcc
CFLAG = -Wall -Wextra -Werror

RM = rm -f

AR = ar
ARFLAGS = crs

SRCS = get_next_line.c get_next_line_utils.c

OBJS	= $(SRCS:.c=.o)

OBJS_BONUS = $(SRCS_BN:.c=.o)

all : $(NAME)

%.o : %.c
	$(CC) $(CFLAG) -c $< -o $@

$(NAME) : make_mandatory

bonus : make_bonus

clean :
	$(RM) $(RMFLAG) $(OBJS) $(OBJS_BONUS)
	$(RM) $(RMFLAG) make_mandatory make_bonus

fclean : clean
	$(RM) $(RMFLAG) $(NAME)

re : fclean all

make_mandatory : $(OBJS)
	$(AR) $(ARFLAGS) $(NAME) $(OBJS)
	touch $@

make_bonus : $(OBJS) $(OBJS_BONUS)
	$(AR) $(ARFLAGS) $(NAME) $^
	touch $@

 .PHONY : all clean fclean re bonus