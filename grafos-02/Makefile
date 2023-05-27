all: app_main

app_main: app_main.o grafos.o  
	gcc obj/app_main.o obj/grafos.o -o bin/app_main.out	


grafos.o: src/grafos.c include/grafos.h
	gcc -I include -Wall -Werror -c src/grafos.c -o obj/grafos.o

app_main.o: apps/app_main.c include/grafos.h
	gcc -I include -Wall -Werror -c apps/app_main.c -o obj/app_main.o

run:
	./bin/app_main.out
valgrind:
	valgrind --leak-check=yes ./bin/app_main.out	

clean:
	rm -f bin/app_main.out obj/*.o	
# para o windows comentar a linha acima e descomentar a linha abaixo
#del bin\app_main.exe obj\*.o 	