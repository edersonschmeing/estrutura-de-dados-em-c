all: app_main

app_main: app_main.o lista_ligada.o tabela_hash.o  
	gcc obj/app_main.o obj/lista_ligada.o obj/tabela_hash.o -o bin/app_main.out		

lista_ligada.o: src/lista_ligada.c include/lista_ligada.h
	gcc -I include -Wall -Werror -c src/lista_ligada.c -o obj/lista_ligada.o

tabela_hash.o: src/tabela_hash.c include/lista_ligada.h include/tabela_hash.h
	gcc -I include -Wall -Werror -c src/tabela_hash.c -o obj/tabela_hash.o


app_main.o: apps/app_main.c include/tabela_hash.h
	gcc -I include -Wall -Werror -c apps/app_main.c -o obj/app_main.o

run:
	./bin/app_main.out

clean:
	rm -f bin/app_main.out obj/*.o	
#del bin\app_main.out obj\*.o 	