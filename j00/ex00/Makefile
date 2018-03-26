NAME = megaphone

CXX = clang++

CFLAGS = -Wall -Wextra -Werror

SRCS = megaphone.cpp

SRCF = ./

OBJS = $(addprefix $(SRCF), $(SRCS:.cpp=.o))

all: $(NAME)

clean:
	rm -rf $(OBJS)

fclean: clean
	rm -rf $(NAME)

$(NAME): $(OBJS)
	$(CXX) -o $(NAME) $(OBJS) $(CFLAGS)

re: fclean all
