NAME = replace

CXX = clang++

CXXFLAGS = -Wall -Wextra -Werror 

SRCS = main.cpp

SRCF = ./

OBJS = $(addprefix $(SRCF), $(SRCS:.cpp=.o))

all: $(NAME)

clean:
	rm -rf $(OBJS)

fclean: clean
	rm -rf $(NAME)

$(NAME): $(OBJS)
	$(CXX) -o $(NAME) $(OBJS) $(CXXFLAGS)

re: fclean all
