all: app_main

app_main: app_main.o lista_ligada_com_cabeca.o  
	gcc obj/app_main.o obj/lista_ligada_com_cabeca.o -o bin/app_main.out	
# para o windows comentar a linha acima e descomentar a linha abaixo
#gcc obj/app_main.o obj/lista_ligada.o -o bin/app_main.exe	


lista_ligada_com_cabeca.o: src/lista_ligada_com_cabeca.c include/lista_ligada_com_cabeca.h
	gcc -I include -Wall -Werror -c src/lista_ligada_com_cabeca.c -o obj/lista_ligada_com_cabeca.o

app_main.o: apps/app_main.c include/lista_ligada_com_cabeca.h
	gcc -I include -Wall -Werror -c apps/app_main.c -o obj/app_main.o

run:
	./bin/app_main.out
# para o windows comentar a linha acima e descomentar a linha abaixo
#./bin/app_main.exe	

clean:
	rm -f bin/app_main.out obj/*.o	
# para o windows comentar a linha acima e descomentar a linha abaixo
#del bin\app_main.exe obj\*.o 	