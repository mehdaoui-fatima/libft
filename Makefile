# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: fmehdaou <marvin@42.fr>                    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2019/10/21 16:49:15 by fmehdaou          #+#    #+#              #
#    Updated: 2019/11/08 17:23:37 by fmehdaou         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = libft.a

SRCS = ft_atoi.c \
	   ft_bzero.c \
	   ft_isalnum.c \
	   ft_isalpha.c \
	   ft_isascii.c \
	   ft_isdigit.c \
	   ft_strlen.c \
	   ft_isprint.c \
	   ft_toupper.c \
	   ft_tolower.c \
	   ft_strchr.c \
	   ft_strrchr.c \
	   ft_strncmp.c \
	   ft_memchr.c \
	   ft_memcpy.c \
	   ft_memset.c \
	   ft_memcmp.c \
	   ft_memccpy.c \
	   ft_calloc.c	\
	   ft_strnstr.c \
	   ft_strdup.c \
	   ft_substr.c \
	   ft_strjoin.c \
	   ft_strtrim.c \
	   ft_itoa.c  \
	   ft_putchar_fd.c  \
	   ft_putstr_fd.c \
	   ft_putendl_fd.c \
	   ft_putnbr_fd.c \
	   ft_strmapi.c  \
	   ft_split.c \
	   ft_strlcpy.c	\
	   ft_strlcat.c \
	   ft_memmove.c

OUT =  $(SRCS:.c=.o)

SRCS_BONUS = ft_lstnew_bonus.c \
	   		ft_lstadd_front_bonus.c \
	   		ft_lstsize_bonus.c \
	   		ft_lstlast_bonus.c \
	   		ft_lstadd_back_bonus.c \
	   		ft_lstdelone_bonus.c \
	   		ft_lstclear_bonus.c \
	  		ft_lstiter_bonus.c

OUT_BONUS = $(SRCS_BONUS:.c=.o)

CFLAGS += -Wall -Wextra -Werror 

all: $(NAME)

$(NAME): $(OUT)
	 	@(ar rc $(NAME) $(OUT) ; ranlib $(NAME))

bonus: all $(OUT_BONUS)
	@(ar rc $(NAME) $(OUT_BONUS) ; ranlib $(NAME))

%.o: %.c
	 @(gcc $(CFLAGS) -c -o $@ $<)

clean:
	@/bin/rm -f *.o

fclean:	clean 
	@/bin/rm -f $(NAME)

re: fclean all
