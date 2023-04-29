#include <locale.h>
#include <stdio.h>

int main (void) {
   setlocale (LC_ALL, ""); // importa as variáveis de ambiente, SO
   setlocale (LC_CTYPE, "pt_BR.UTF-8"); // por via das dúvidas, set manual
   char buffer[50];
   scanf ("%[^\n]s", buffer); 
   printf ("%s\n", buffer);
   return 0;
}