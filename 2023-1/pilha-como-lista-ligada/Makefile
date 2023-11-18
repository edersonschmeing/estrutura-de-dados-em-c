all: app_main

app_main: app_main.o pilha_como_lista_ligada.o  
	gcc obj/app_main.o obj/pilha_como_lista_ligada.o -o bin/app_main.out	
# para o windows comentar a linha acima e descomentar a linha abaixo
#gcc obj/app_main.o obj/pilha_como_lista_ligada.o -o bin/app_main.exe	


pilha_como_lista_ligada.o: src/pilha_como_lista_ligada.c include/pilha_como_lista_ligada.h
	gcc -I include -Wall -Werror -c src/pilha_como_lista_ligada.c -o obj/pilha_como_lista_ligada.o

app_main.o: apps/app_main.c include/pilha_como_lista_ligada.h
	gcc -I include -Wall -Werror -c apps/app_main.c -o obj/app_main.o

run:
	./bin/app_main.out
# para o windows comentar a linha acima e descomentar a linha abaixo
#./bin/app_main.exe	

clean:
	rm -f bin/app_main.out obj/*.o	
# para o windows comentar a linha acima e descomentar a linha abaixo
#del bin\app_main.exe obj\*.o 	