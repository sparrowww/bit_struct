CC=g++
CFLAGS=-c -Wall
LDFLAGS=
SOURCES=bit_struct.cpp
OBJECTS=$(SOURCES:.cpp=.o)
EXECUTABLE=bit_struct

all: $(SOURCES) $(EXECUTABLE)
	
$(EXECUTABLE): $(OBJECTS) 
	$(CC) $(LDFLAGS) $(OBJECTS) -o $@

.cpp.o:
	$(CC) $(CFLAGS) $< -o $@
	
clean:
	rm -rf *.o $(EXECUTABLE)
		
