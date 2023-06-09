all: app_main

app_main: app_main.o heap_binario_heap_sort.o  
	gcc obj/app_main.o obj/heap_binario_heap_sort.o -o bin/app_main.out	
# para o windows comentar a linha acima e descomentar a linha abaixo
#gcc obj/app_main.o obj/lista_ligada.o -o bin/app_main.exe	


heap_binario_heap_sort.o: src/heap_binario_heap_sort.c include/heap_binario_heap_sort.h
	gcc -I include -Wall -Werror -c src/heap_binario_heap_sort.c -o obj/heap_binario_heap_sort.o

app_main.o: apps/app_main.c include/heap_binario_heap_sort.h
	gcc -I include -Wall -Werror -c apps/app_main.c -o obj/app_main.o

run:
	./bin/app_main.out
# para o windows comentar a linha acima e descomentar a linha abaixo
#./bin/app_main.exe	

clean:
	rm -f bin/app_main.out obj/*.o	
# para o windows comentar a linha acima e descomentar a linha abaixo
#del bin\app_main.exe obj\*.o 	