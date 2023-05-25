# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: carperez <carperez@student.42madrid.com    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2023/04/16 17:17:04 by carperez          #+#    #+#              #
#    Updated: 2023/05/08 22:51:12 by carperez         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

#variable definition
NAME = libft.a

#paths
DIR_HEADER = header/
DIR_SRC = src/
DIR_OBJ = obj/
DIR_CTYPE = ctype/
DIR_CUSTOM = custom/
DIR_LIST = list/
DIR_STDLIB = stdlib/
DIR_STRING = string/

#C files
FILES_CTYPE =\
		ft_isalpha.c ft_isdigit.c ft_isalnum.c ft_isascii.c ft_isprint.c ft_toupper.c ft_tolower.c
FILES_CUSTOM =\
		ft_substr.c ft_strtrim.c ft_split.c ft_strjoin.c ft_itoa.c ft_strmapi.c ft_striteri.c\
		ft_putchar_fd.c ft_putstr_fd.c ft_putendl_fd.c ft_putnbr_fd.c
FILES_LIST =\
		ft_lstnew.c ft_lstadd_front.c ft_lstsize.c ft_lstlast.c ft_lstadd_back.c\
		ft_lstdelone.c ft_lstclear.c	ft_lstiter.c ft_lstmap.c
FILES_STDLIB =\
		ft_calloc.c ft_atoi.c
FILES_STRING =\
		ft_memset.c ft_bzero.c ft_memcpy.c ft_memmove.c ft_memchr.c ft_memcmp.c ft_strlen.c ft_strlcpy.c\
		ft_strchr.c ft_strrchr.c ft_strlcat.c ft_strncmp.c ft_strnstr.c ft_strdup.c

#C files unification
FILES_SRC += $(addprefix $(DIR_CTYPE),$(FILES_CTYPE))
FILES_SRC += $(addprefix $(DIR_CUSTOM),$(FILES_CUSTOM))
FILES_SRC += $(addprefix $(DIR_LIST),$(FILES_LIST))
FILES_SRC += $(addprefix $(DIR_STDLIB),$(FILES_STDLIB))
FILES_SRC += $(addprefix $(DIR_STRING),$(FILES_STRING))
SOURCERS = $(addprefix $(DIR_SRC),$(FILES_SRC))
#$(info SOURCERS is $(SOURCERS))

#O files 
OBJECTS = $(addprefix $(DIR_OBJ),$(FILES_SRC:.c=.o))

#commands 
COM_COMPILER = gcc
COM_FLAGS= -Wall -Werror -Wextra -I
COM_STATICLIB = ar rcs
COM_TEMPS = .cache_exists
COM_FOLDERS = mkdir -p
COM_REMOVE = rm -f

#UPDATE static lib
all:			$(NAME)
$(NAME):		$(OBJECTS)
					@$(COM_STATICLIB) $@ $^

#COMPILATION
$(DIR_OBJ)%.o:	$(DIR_SRC)%.c | $(COM_TEMPS)
					@$(COM_COMPILER) $(COM_FLAGS) $(DIR_HEADER) -c $< -o $@

#CREATION temp folders
$(COM_TEMPS):
					@$(COM_FOLDERS) $(DIR_OBJ)
					@$(COM_FOLDERS) $(DIR_OBJ)$(DIR_CTYPE)
					@$(COM_FOLDERS) $(DIR_OBJ)$(DIR_CUSTOM)
					@$(COM_FOLDERS) $(DIR_OBJ)$(DIR_LIST)
					@$(COM_FOLDERS) $(DIR_OBJ)$(DIR_STDLIB)
					@$(COM_FOLDERS) $(DIR_OBJ)$(DIR_STRING)

#REMOVE temp files
clean:
					@$(COM_REMOVE) -rf $(DIR_OBJ)
					@$(COM_REMOVE) -f $(COM_TEMPS)

#REMOVE compilation
fclean: 		clean
					@$(COM_REMOVE) -f $(NAME)

#CLEAN environmnet					
re: 			fclean all

#DECLARATION tags
.PHONY: 		all clean fclean re