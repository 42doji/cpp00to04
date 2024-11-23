CXX = g++
CXXFLAGS = -Wall -Wextra -std=c++98
LDFLAGS =

SRCS = srcs/main.cpp
OBJS = $(SRCS:.cpp=.o)
TARGET = thisisbrain

all: $(TARGET)

$(TARGET): $(OBJS)
	$(CXX) $(LDFLAGS) -o $@ $^

%.o: %.cpp
	$(CXX) $(CXXFLAGS) -c $< -o $@

clean:
	rm -f $(OBJS)

fclean: clean
	rm -f $(TARGET)


.PHONY: all clean fclean