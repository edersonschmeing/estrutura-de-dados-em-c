all: app_main

app_main: app_main.o arvore_tries.o  
	gcc obj/app_main.o obj/arvore_tries.o -o bin/app_main.out	
# para o windows comentar a linha acima e descomentar a linha abaixo
#gcc obj/app_main.o obj/lista_ligada.o -o bin/app_main.exe	


arvore_tries.o: src/arvore_tries.c include/arvore_tries.h
	gcc -I include -Wall -Werror -c src/arvore_tries.c -o obj/arvore_tries.o

app_main.o: apps/app_main.c include/arvore_tries.h
	gcc -I include -Wall -Werror -c apps/app_main.c -o obj/app_main.o

run:
	./bin/app_main.out
# para o windows comentar a linha acima e descomentar a linha abaixo
#./bin/app_main.exe	

clean:
	rm -f bin/app_main.out obj/*.o	
# para o windows comentar a linha acima e descomentar a linha abaixo
#del bin\app_main.exe obj\*.o 	