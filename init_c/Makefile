CC = gcc 
CFLAGS = -g -W -Wall -std=c99
LDFLAGS =
OBJ = main.o afficher.o

afficher: $(OBJ)
	$(CC) $(OBJ) $(CFLAGS) -o afficher

afficher.o: afficher.c afficher.h
main.o: main.c afficher.h

clean:
	rm -f $(OBJ) afficher
