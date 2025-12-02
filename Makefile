# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: aflorea <marvin@42.fr>                     +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2025/11/28 12:36:56 by aflorea           #+#    #+#              #
#    Updated: 2025/11/28 13:10:39 by aflorea          ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME := libft.a

#------------------------------------------------#
#   INGREDIENTI                                  #
#------------------------------------------------#
# SRCS    source files
# OBJS      object files
#
# CC        compiler
# CFLAGS    compiler flags

CC := cc

CFLAGS := -Wall -Wextra -Werror

SRCS := ft_isalpha.c \
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
	ft_strlcat.c \
	ft_toupper.c \
	ft_tolower.c \
	ft_strchr.c \
	ft_strrchr.c \
	ft_strncmp.c \
	ft_memchr.c \
	ft_memcmp.c \
	ft_strnstr.c \
	ft_atoi.c \
	ft_calloc.c \
	ft_strdup.c \
	ft_substr.c \
	ft_strjoin.c \
	ft_strtrim.c \
	ft_split.c \
	ft_itoa.c \
	ft_strmapi.c \
	ft_striteri.c \
	ft_putchar_fd.c \
	ft_putstr_fd.c \
	ft_putendl_fd.c \
	ft_putnbr_fd.c \

BONSRCS := ft_lstnew.c \
	ft_lstadd_front.c \
	ft_lstsize.c \
	ft_lstlast.c \
	ft_lstadd_back.c \
	ft_lstdelone.c \
	ft_lstclear.c \
	ft_lstiter.c \
	ft_lstmap.c \
	
# Regola che crea i .o con gli stessi nomi dei .c
OBJS = $(SRCS:.c=.o)

BONUSOBJS = $(BONSRCS:.c=.o)

# Regola principale che funziona usando solo il comando "make"
all: $(NAME)

# Regola per il bonus
bonus: .bonus

.bonus: $(BONUSOBJS) $(OBJS)
	touch .bonus
	ar -rcs $(NAME) $^ $^

# Regola che crea la libreria col comando ar, cioè crea un archivio
$(NAME): $(OBJS)
	ar -rcs $(NAME) $(OBJS)

# Regola per compilare un file oggetto da un file sorgente
%.o: %.c
	$(CC) $(CFLAGS) -c -o $@ $<

# https://www.gnu.org/software/make/manual/html_node/Phony-Targets.html
.PHONY: all clean fclean re bonus

# Regola per pulire i file generati
clean:
	rm -f $(OBJS) $(BONUSOBJS) .bonus

fclean: clean
	rm -f $(NAME)

re: fclean all
