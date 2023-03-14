########################################
###Script by PerguGames
###GitHub:https://github.com/PerduGames
########################################
#Arquivo Makefile  
#Arquivo para compilar executavel em c e c++, 
#buscando as dependencias em suas respectivas pastas
#O que acontece quando digito "make"?
#Busca dentro do diretorio atribuido na variavel "SRC" todos os arquivos .cpp
#Muda o sufixo e prefixo de todos os arquivos: "src/*.cpp" para "obj/*.o"
#Compila os arquivos .cpp e cria os arquivos .o no diretorio atribuido na variavel "OBJ"
#Linka e cria o executavel com o nome que você colocou em "coloqueAquiOnomeDoSeuExecutavel",
#buscando primeiro o arquivo principal .cpp no diretorio atribuido na variavel "PROGRAM"
#e buscando as devidas dependecias, bibliotecas e arquivos-objetos que foram criados
#O que acontece quando digito "make run"?
#Executa o programa "coloqueAquiOnomeDoSeuExecutavel",
#O que acontece quando digito "make cleanObjetos"?
#Exclui todos os arquivos .o no diretorio atribuido na variavel "OBJ"
#O que acontece quando digito "make clean"?
#Exclui todos os arquivos no diretorio atribuido na variavel "BIN" que seria seu
#executavel que deu o nome em "coloqueAquiOnomeDoSeuExecutavel"
#O que acontece quando digito "make tar"?
#Empacota todo o diretorio atual onde esta o arquivo makefile com o
#nome que voce substituir em "nomeDeSeuProjeto"
#Notas:
#Lembrem-se ao nomear o executavel em "coloqueAquiOnomeDoSeuExecutavel",
#precisa existir um arquivo .cpp com o mesmo nome no diretorio atribuido 
#na variavel "PROGRAM", para sastisfazer a dependencia do alvo,
#esse arquivo, seria seu arquivo com a funcao "int main()". 

#Compilador
COMPILADOR=gcc
#COMPILADOR=g++
#Diretorio dos arquivos .c e .cpp dos progrmas principais
APPS=./apps
#Diretorio dos arquivos binarios
BIN=./bin
#Diretorio dos arquivos .h e .hpp
INCLUDE=./include
#Diretorio dos arquivos-objetos
OBJ=./obj
#Diretorio dos arquivos .c e .cpp
SRC=./src
#Diretorio dos arquivos de bibliotecas
LIB=./lib

#Para otimizar e mostrar mais avisos, versão -std=c++11 
#FLAGS= -O3 -Wall -std=c++11 #para c++ 
FLAGS= -O3 -Wall -Werror
#Para encontrar as bibliotecas utilizadas(em "-lm", apenas um exemplo, caso seu compilador nao faca isso por voce)
LIBS= -lm -L $(LIB)

#Pega todos arquivos .cpp e muda os nomes para .o
#Fontes .cpp
FONTES=$(wildcard $(SRC)/*.c)
#Retirar prefixo e sufixo
OBJLIMPAR=$(notdir $(basename $(FONTES)))
#Adicionar novo prefixo e sufixo
OBJETOS=$(addprefix $(OBJ)/, $(addsuffix .o, $(OBJLIMPAR)))

.PHONY: all cleanObjetos clean tar

all: compilar app

#Arquivos .o do projeto
compilar: $(OBJETOS)

#Executaveis do projeto, se tiver executaveis separar com \$(BIN)/outroaquivocommain 
app: $(BIN)/app_main.out # no windows é .exe
	echo $(OBJETOS)

#Compilar e criar os arquivos-objetos
$(OBJ)/%.o: $(SRC)/%.c $(INCLUDE)/%.h
	$(COMPILADOR) $(FLAGS) -c $< -I $(INCLUDE) -o $@

#Linkar e criar o executavel
$(BIN)/%: $(APPS)/%.c
	$(COMPILADOR) $(FLAGS) $< $(OBJETOS) -I $(INCLUDE) $(LIBS) -o $@

#Executar programa
run:
	$(BIN)/app_main.out

#Limpar arquivos .o
cleanObjetos:
	rm -f $(OBJ)/*.o

#Limpar executaveis
clean:
	rm -f $(BIN)/app_main.out

#Empacotar projeto
tar:
	tar cvjf nomeDeSeuProjeto.tar.bz2 pwd