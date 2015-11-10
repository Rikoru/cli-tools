# CLI-Tools Makefile
CC=g++
CFLAGS=-c -Wall -std=c++11
# Only line that needs to get changed as features are added
SOURCES=cli-tools.cpp ciphers.cpp transmute.cpp
OBJECTS=$(SOURCES: .cpp=.o)
EXECUTABLE=cli-tools

all: $(SOURCES) $(EXECUTABLE)

$(EXECUTABLE): $(OBJECTS)
	$(CC) $(OBJECTS) -o $@

.cpp.o:
	$(CC) $(CFLAGS) $< -o $@

clean:
	rm -f $(EXECUTABLE) *.o