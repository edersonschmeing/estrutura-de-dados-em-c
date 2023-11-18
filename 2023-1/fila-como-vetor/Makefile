all: app_main

app_main: app_main.o fila_como_vetor.o  
	gcc obj/app_main.o obj/fila_como_vetor.o -o bin/app_main.out	

fila_como_vetor.o: src/fila_como_vetor.c include/fila_como_vetor.h
	gcc -I include -Wall -Werror -c src/fila_como_vetor.c -o obj/fila_como_vetor.o

app_main.o: apps/app_main.c include/fila_como_vetor.h
	gcc -I include -Wall -Werror -c apps/app_main.c -o obj/app_main.o

run:
	./bin/app_main.out	

clean:
	rm -f bin/app_main.out obj/*.o	
#del /F /A bin\app_main.out obj\*.o 	