all: app_main

app_main: app_main.o arvore_B.o  
	gcc obj/app_main.o obj/arvore_B.o -o bin/app_main.out	
# para o windows comentar a linha acima e descomentar a linha abaixo
#gcc obj/app_main.o obj/lista_ligada.o -o bin/app_main.exe	


arvore_B.o: src/arvore_B.c include/arvore_B.h
	gcc -I include -Wall -Werror -c src/arvore_B.c -o obj/arvore_B.o

app_main.o: apps/app_main.c include/arvore_B.h
	gcc -I include -Wall -Werror -c apps/app_main.c -o obj/app_main.o

run:
	./bin/app_main.out
# para o windows comentar a linha acima e descomentar a linha abaixo
#./bin/app_main.exe	

clean:
	rm -f bin/app_main.out obj/*.o	
# para o windows comentar a linha acima e descomentar a linha abaixo
#del bin\app_main.exe obj\*.o 	