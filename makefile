CC = gcc
TARGETS = Task1 Task2 Task3
SRC1 = Task1.c
SRC2 = Task2.c
SRC3 = Task3.c

all: $(TARGETS)

Task1: $(SRC1)
	$(CC) -o Task1 $(SRC1)

Task2: $(SRC2)
	$(CC) -o Task2 $(SRC2)

Task3: $(SRC3)
	$(CC) -o Task3 $(SRC3)

run: all
	./Task1
	./Task2	
	./Task3

clean: 
	rm -f $(TARGETS)
