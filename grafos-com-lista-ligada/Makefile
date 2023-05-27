all: app_main

app_main: app_main.o lista_ligada_peso.o grafos.o
	gcc obj/app_main.o obj/lista_ligada_peso.o obj/grafos.o -o bin/app_main.out	

lista_ligada_peso.o: src/lista_ligada_peso.c include/lista_ligada_peso.h
	gcc -I include -Wall -Werror -c src/lista_ligada_peso.c -o obj/lista_ligada_peso.o

grafos.o: src/grafos.c include/lista_ligada_peso.h include/grafos.h   
	gcc -I include -Wall -Werror -c src/grafos.c -o obj/grafos.o

app_main.o: apps/app_main.c include/grafos.h
	gcc -I include -Wall -Werror -c apps/app_main.c -o obj/app_main.o

run:
	./bin/app_main.out
valgrind:
	valgrind --leak-check=yes ./bin/app_main.out	

clean:
	rm -f bin/app_main.out obj/*.o	
# para o windows comentar a linha acima e descomentar a linha abaixo
#del bin\app_main.exe obj\*.o 	