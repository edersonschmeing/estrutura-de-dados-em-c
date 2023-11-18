all: app_main

app_main: app_main.o pilha_como_vetor.o  
	gcc obj/app_main.o obj/pilha_como_vetor.o -o bin/app_main.out	

pilha_como_vetor.o: src/pilha_como_vetor.c include/pilha_como_vetor.h
	gcc -I include -Wall -Werror -c src/pilha_como_vetor.c -o obj/pilha_como_vetor.o

app_main.o: apps/app_main.c include/pilha_como_vetor.h
	gcc -I include -Wall -Werror -c apps/app_main.c -o obj/app_main.o

run:
	./bin/app_main.out	

clean:
	rm -f bin/app_main.out obj/*.o	
#del /F /A bin\app_main.out obj\*.o 	