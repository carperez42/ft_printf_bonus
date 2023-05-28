# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    MAKEFILE                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: carperez <carperez@student.42madrid.com    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2023/04/16 17:31:51 by carperez          #+#    #+#              #
#    Updated: 2023/04/16 17:31:51 by carperez         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

#variable definition
NAME = libftprintf.a
LIBFT = libft.a

#paths
DIR_HEADER = header/
DIR_LIBFT = libft/
DIR_LIBFT_H = $(addprefix $(DIR_LIBFT),$(DIR_HEADER))
DIR_SRC = src/
DIR_OBJ = obj/

#C files
FILES_SRC = ft_printf_00.c ft_printf_01_set.c ft_printf_02_chrstr.c\
			ft_printf_03_int.c ft_printf_04_hex.c ft_printf_05_ptr.c\
			ft_printf_06_uns.c ft_printf_07_hex_aux.c\
			ft_printf_08_unsptr_aux.c ft_printf_09_tools.c\

SOURCERS = $(addprefix $(DIR_SRC),$(FILES_SRC))
OBJECTS = $(addprefix $(DIR_OBJ),$(FILES_SRC:.c=.o))

#commands
COM_COMPILER = gcc
COM_FLAGS= -Wall -Werror -Wextra
COM_STATICLIB = ar rcs
COM_TEMPS = .cache_exists
COM_FOLDERS = mkdir -p
COM_REMOVE = rm -f

#UPDATE static lib
all:			$(NAME)
$(NAME):		$(OBJECTS)
					@make -C $(DIR_LIBFT) --no-print-directory
					@cp libft/libft.a .
					@mv libft.a $(NAME)
					@$(COM_STATICLIB) $(NAME) $(OBJECTS)

#COMPILATION
$(DIR_OBJ)%.o:	$(DIR_SRC)%.c | $(COM_TEMPS)
					@$(COM_COMPILER) $(COM_FLAGS) -I $(DIR_HEADER) -I $(DIR_LIBFT_H) -c $< -o $@

#CREATION temp folders
$(COM_TEMPS):
					@$(COM_FOLDERS) $(DIR_OBJ)

#BONUS tag
bonus: $(NAME)

#REMOVE temp files
clean:
					@$(COM_REMOVE) -rf $(DIR_OBJ)
					@$(COM_REMOVE) -f $(COM_TEMPS)
					@make clean -C $(DIR_LIBFT) --no-print-directory

#REMOVE compilation
fclean:			clean
					@$(COM_REMOVE) -f $(NAME)
					@$(COM_REMOVE) -f libft/libft.a

#CLEAN environmnet	
re:				fclean all

#CHECK norminette
checker:
					@norminette $(SOURCERS) $(DIR_HEADER) $(DIR_LIBFT) | grep -v Norme -B1 || true

#DECLARATION tags
.PHONY:			all bonus clean fclean re checker