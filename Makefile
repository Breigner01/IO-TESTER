SRC	=	src/Utils.cpp						\
		src/IO_Tester.cpp					\
		src/ErrorHandling.cpp				\

OBJ = 	$(SRC:.cpp=.o)

NAME = 	IO_Tester

CXXFLAGS = -std=c++14 -Wall -Wextra

CPPFLAGS = -iquote include

CXX = g++

all :	$(OBJ)
	$(CXX) -o $(NAME) $(OBJ)
	rm src/*.o

clean:
	rm -f $(OBJ)

fclean:	clean
	rm -f $(NAME)

re: fclean all