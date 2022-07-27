# Syntaxe
# -------
# cible : dependances
#	commande # utiliser obligatoirement la touche TAB
CC = gcc
EXEC = program.exe
OBJ = main.o game.o utils.o
CFLAGS = -Wall

all : $(EXEC)
	./$(EXEC)

$(EXEC) : $(OBJ)
	$(CC) $(OBJ) -o program.exe

main.o : main.c
	$(CC) -c main.c

game.o : game.c
	$(CC) -c game.c

utils.o : utils.c
	$(CC) -c utils.c

run : $(EXEC)
	./$(EXEC)
clean :
	rm -rf *.o
