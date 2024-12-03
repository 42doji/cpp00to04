CXX = c++
CXXFLAGS = -Wall -Wextra -Werror -std=c++98
TARGET= phonebook
SRCS = main.cpp Phonebook.cpp Contact.cpp
OBJS = $(SRCS:.cpp=.o)

all: $(TARGET)

$(TARGET): $(OBJS)
	$(CXX) $(CXXFLAGS) -o $@ $^

%.o: %.cpp
	$(CXX) $(CXXFLAGS) -c $< -o $@

clean:
	rm -f $(OBJS)

fclean: clean
	rm -f $(TARGET)

.PHONY: all clean