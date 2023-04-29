all: app_main

app_main: app_main.o fila_como_lista_ligada_circular.o  
	gcc obj/app_main.o obj/fila_como_lista_ligada_circular.o -o bin/app_main.out	


fila_como_lista_ligada_circular.o: src/fila_como_lista_ligada_circular.c include/fila_como_lista_ligada_circular.h
	gcc -I include -Wall -Werror -c src/fila_como_lista_ligada_circular.c -o obj/fila_como_lista_ligada_circular.o

app_main.o: apps/app_main.c include/fila_como_lista_ligada_circular.h
	gcc -I include -Wall -Werror -c apps/app_main.c -o obj/app_main.o

run:
	./bin/app_main.out

clean:
	rm -f bin/app_main.out obj/*.o	
