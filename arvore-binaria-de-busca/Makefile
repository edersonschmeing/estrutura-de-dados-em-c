all: app_main

app_main: app_main.o arvore_binaria_de_busca.o  
	gcc obj/app_main.o obj/arvore_binaria_de_busca.o -o bin/app_main.out	


arvore_binaria_de_busca.o: src/arvore_binaria_de_busca.c include/arvore_binaria_de_busca.h
	gcc -I include -Wall -Werror -c src/arvore_binaria_de_busca.c -o obj/arvore_binaria_de_busca.o

app_main.o: apps/app_main.c include/arvore_binaria_de_busca.h
	gcc -I include -Wall -Werror -c apps/app_main.c -o obj/app_main.o

run:
	./bin/app_main.out
valgrind:
	valgrind --leak-check=yes ./bin/app_main.out	

clean:
	rm -f bin/app_main.out obj/*.o	
# para o windows comentar a linha acima e descomentar a linha abaixo
#del bin\app_main.exe obj\*.o 	