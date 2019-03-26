# **************************************************************************** #
#                                                           LE - /             #
#                                                               /              #
#    Makefile                                         .::    .:/ .      .::    #
#                                                  +:+:+   +:    +:  +:+:+     #
#    By: pduhard- <marvin@le-101.fr>                +:+   +:    +:    +:+      #
#                                                  #+#   #+    #+    #+#       #
#    Created: 2018/10/26 23:44:58 by pduhard-     #+#   ##    ##    #+#        #
#    Updated: 2018/11/10 19:37:55 by pduhard-    ###    #+. /#+    ###.fr      #
#                                                          /                   #
#                                                         /                    #
# **************************************************************************** #

#__________CONFIG__________#

NAME		=	libftprintf.a

CC			=	gcc
FLAGS		=	-g -Wall -Werror -Wextra
LIB_FLAGS	=	-L$(LIB_PATH) $(LIB_FLAG)
INCLUDES	=	-I ft_printf.h

SRC_PATH	=	./
BIN_PATH	=	./
LIB_PATH	=	./libft/

SRC			=	ft_printf.c			\
				ft_getf.c			\
				ft_fdprintf.c		\
				parse_conv.c		\
				parsing.c			\
				signed_conv.c		\
				signed_conv1.c		\
				unsigned_conv.c		\
				unsigned_conv1.c	\
				octal_conv.c		\
				octal_conv1.c		\
				hex_conv.c			\
				hex_conv1.c			\
				binary_conv.c		\
				float_conv.c		\
				char_conv.c			\
				char_conv1.c		\
				percent_conv.c		\
				float_conv.c		\
				scientist_conv.c	\
				g_fore_conv.c		\
				n_conv.c			\
				numeric_flags.c		\
				signed_flags.c		\
				str_flags.c			\
				font.c				\
				$(addprefix $(LIB_PATH), $(LIB_FILE))


LIB_FILE	=	ft_putchar.c		\
				ft_putstr.c			\
				ft_tolower.c		\
				ft_isalnum.c		\
				ft_isalpha.c		\
				ft_isascii.c		\
				ft_isdigit.c		\
				ft_isprint.c		\
				ft_toupper.c		\
				ft_atoi.c			\
				ft_strcpy.c			\
				ft_strncpy.c		\
				ft_strcat.c			\
				ft_strncat.c		\
				ft_strlcat.c		\
				ft_strcmp.c			\
				ft_strncmp.c		\
				ft_strstr.c			\
				ft_strnstr.c		\
				ft_strchr.c			\
				ft_strichr.c		\
				ft_strrchr.c		\
				ft_strlen.c			\
				ft_strdup.c			\
				ft_memset.c			\
				ft_bzero.c			\
				ft_memcpy.c			\
				ft_memccpy.c		\
				ft_memmove.c		\
				ft_memchr.c			\
				ft_memcmp.c			\
				ft_memalloc.c		\
				ft_memdel.c			\
				ft_strnew.c			\
				ft_strfillnew.c		\
				ft_strdel.c			\
				ft_strclr.c			\
				ft_striter.c		\
				ft_striteri.c		\
				ft_strmap.c			\
				ft_strmapi.c		\
				ft_strequ.c			\
				ft_strnequ.c		\
				ft_strsub.c 		\
				ft_strfsub.c 		\
				ft_strjoin.c		\
				ft_strfjoin.c		\
				ft_strtrim.c		\
				ft_strsplit.c		\
				ft_itoa.c			\
				ft_lltoa.c			\
				ft_ldtoa.c			\
				ft_ldtoa1.c			\
				ft_ulltoa.c			\
				ft_putendl.c		\
				ft_putnbr.c			\
				ft_putchar_fd.c		\
				ft_putstr_fd.c		\
				ft_putendl_fd.c		\
				ft_putnbr_fd.c		\
				ft_lstnew.c			\
				ft_lstdelone.c		\
				ft_lstdel.c			\
				ft_lstadd.c			\
				ft_lstiter.c		\
				ft_lstmap.c			\
				ft_countparts.c		\
				ft_pow.c			\
				ft_sqrt.c			\
				ft_isupper.c		\
				ft_islower.c		\
				ft_memrcpy.c		\
				ft_emptystr.c		\
				ft_baseconvert.c	\
				get_next_line.c		\
				ft_ifree.c			\

BIN			=	$(SRC:.c=.o)

LIB_FLAG			=	-lft
LIB					=	libft.a

SRCS		=	$(addprefix $(SRC_PATH), $(SRC))
BINS		=	$(addprefix $(BIN_PATH), $(BIN))
LIBS		=	$(addprefix $(LIB_PATH), $(LIB))

.PHONY: all clean fclean re lib norm

#__________COLORS__________#

R			=	\033[0;31m
G			=	\033[32;7m
B			=	\033[0;34m
N			=	\33[0m

#__________RULES__________#

all: $(NAME)

$(NAME): $(BINS)

	@ar rc $(NAME) $^
	@echo "\n\n${B}[LIBRARY \"$(NAME)\" COMPILED]\n"
	@ranlib $(NAME)
	@echo "${B}[LIBRARY \"$(NAME)\" INDEXED]\n"

$(LIBS):

	@make -C $(LIB_PATH)

$(BIN_PATH)%.o: $(SRC_PATH)%.c ft_printf.h

	@mkdir -p $(BIN_PATH) || true
	@$(CC) $(FLAGS) $(INCLUDES) -o $@ -c $< && echo "${G} \c"

clean:

	@make clean -C $(LIB_PATH)
	@echo "${R}[CLEANING $(NAME) BINARIES]"
	@rm -f $(BINS)

fclean: clean

	@echo "\n${R}[REMOVING "libft.a"]"
	@rm -rf $(LIB_PATH)/libft.a
	@echo "\n${R}[REMOVING \"$(NAME)\"]\n"
	@rm -f $(NAME)

re: fclean all

test : libftprintf.a $(BINS)

	@$(CC) $(INCLUDES) $(FLAGS) -Llftprintf $^ -o $@
	@echo "\n\n$(B)[EXECUTABLE \"a.out\" READY]\n"
norm:

	@norminette $(SRCS) fillit.h $(LIB_PATH)*
