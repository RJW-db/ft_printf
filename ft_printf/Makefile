NAME		=	printf_and_libft.a

CFLAGS		=	-Wall -Wextra -Werror

LIBFT		=	libft.a
LIBFTFOLDER	=	./libft
LIBFTFULL	=	$(LIBFTFOLDER)/$(LIBFT)

RM			=	rm -f

SRC			=	ft_printf.c \
				ft_utils.cc

OBJ			=	$(SRC:.c=.o)

all: $(NAME)

%.o: %.c
	cc $(CFLAGS) -c $< -o $@

$(LIBFTFULL):
	make -C $(LIBFTFOLDER)
	cp $(LIBFT) ../$(NAME)

$(NAME): $(OBJ)
	@ar rcs $(NAME) $(OBJ)

clean:
	$(RM) $(OBJ)
	# $(RM) $(LIBFTFOLDER)/$(OBJ)
	make clean

fclean: clean
	$(RM) $(NAME)
	# $(RM) $(LIBFTFOLDER)/$(NAME)
	make fclean

re: fclean all

.PHONY: all, clean, fclean, re