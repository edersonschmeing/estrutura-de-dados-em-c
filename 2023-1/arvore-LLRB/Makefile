all: app_main

app_main: app_main.o arvore_LLRB.o  
	gcc obj/app_main.o obj/arvore_LLRB.o -o bin/app_main.out	


arvore_LLRB.o: src/arvore_LLRB.c include/arvore_LLRB.h
	gcc -I include -Wall -Werror -c src/arvore_LLRB.c -o obj/arvore_LLRB.o

app_main.o: apps/app_main.c include/arvore_LLRB.h
	gcc -I include -Wall -Werror -c apps/app_main.c -o obj/app_main.o

run:
	./bin/app_main.out
valgrind:
	valgrind --leak-check=yes ./bin/app_main.out	

clean:
	rm -f bin/app_main.out obj/*.o	
# para o windows comentar a linha acima e descomentar a linha abaixo
#del bin\app_main.exe obj\*.o 	