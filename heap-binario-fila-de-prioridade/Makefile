all: app_main

app_main: app_main.o fila_prioridade_heap.o  
	gcc obj/app_main.o obj/fila_prioridade_heap.o -o bin/app_main.out	
# para o windows comentar a linha acima e descomentar a linha abaixo
#gcc obj/app_main.o obj/lista_ligada.o -o bin/app_main.exe	


fila_prioridade_heap.o: src/fila_prioridade_heap.c include/fila_prioridade_heap.h
	gcc -I include -Wall -Werror -c src/fila_prioridade_heap.c -o obj/fila_prioridade_heap.o

app_main.o: apps/app_main.c include/fila_prioridade_heap.h
	gcc -I include -Wall -Werror -c apps/app_main.c -o obj/app_main.o

run:
	./bin/app_main.out
# para o windows comentar a linha acima e descomentar a linha abaixo
#./bin/app_main.exe	

clean:
	rm -f bin/app_main.out obj/*.o	
# para o windows comentar a linha acima e descomentar a linha abaixo
#del bin\app_main.exe obj\*.o 	