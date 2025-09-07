NAME		=		megaphone

CC			=		g++

FLAGS		=		-Wall -Wextra -Werror -std=c++98

SRCS		=		megaphone.cpp

OBJS_DIR	=		./objs

OBJS		=		$(patsubst %.cpp, $(OBJS_DIR)/%.o, $(SRCS))

RM			=		rm -rf

all:				$(NAME)

$(NAME):			$(OBJS)
					$(CC) $(FLAGS) $(OBJS) -o $(NAME)

$(OBJS_DIR)/%.o:	%.cpp | $(OBJS_DIR)
					$(CC) $(FLAGS) -c $< -o $@

$(OBJS_DIR):
					mkdir -p $(OBJS_DIR)

clean:			
					$(RM) $(OBJS_DIR)

fclean:				clean
					$(RM) $(NAME)

re:					fclean all