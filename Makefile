# Définir le compilateur et les options de compilation
CC = gcc
CFLAGS = -Wall -g
SRC = $(wildcard *.c)

#print:
#	echo $(SRC)

OBJ = $(SRC:.c=.o)

#print1:
#	echo $(OBJ)

# La cible par défaut est 'all'
all: testC

# Règle pour la cible 'main'
testC: $(OBJ)
	$(CC) $(CFLAGS) -o $@ $^

# Règle pour la cible 'main.o'
%.o: %.c
	$(CC) $(CFLAGS) -c $<

# Nettoyage des fichiers générés
clean:
	rm -f *.o testC