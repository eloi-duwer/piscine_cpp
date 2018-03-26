NAME = 3611_phoneBook

CXX = clang++

CXXFLAGS = -Wall -Wextra -Werror 

SRCS = Contact.cpp \
	main.cpp

SRCF = ./

OBJS = $(addprefix $(SRCF), $(SRCS:.cpp=.o))

all: $(NAME)

debug: fclean
debug: CXXFLAGS = -Wall -Wextra -DDEBUG -g
debug: all

clean:
	rm -rf $(OBJS)

fclean: clean
	rm -rf $(NAME)

$(NAME): $(OBJS)
	$(CXX) -o $(NAME) $(OBJS) $(CXXFLAGS)

re: fclean all
