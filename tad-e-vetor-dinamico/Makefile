all: app_main

app_main: app_main.o vetor_dinamico.o  
	gcc obj/app_main.o obj/vetor_dinamico.o -o bin/app_main.out	

vetor_dinamico.o: src/vetor_dinamico.c include/vetor_dinamico.h
	gcc -I include -Wall -Werror -c src/vetor_dinamico.c -o obj/vetor_dinamico.o

app_main.o: apps/app_main.c include/vetor_dinamico.h
	gcc -I include -Wall -Werror -c apps/app_main.c -o obj/app_main.o

run:
	./bin/app_main.out	

clean:
	rm -f bin/app_main.out obj/*.o	
#del /F /A bin\app_main.out obj\*.o 	