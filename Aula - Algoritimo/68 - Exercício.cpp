#include<stdlib.h>
 #include<math.h>
 #include<locale.h>
 #include <string.h>
 
  /*
Exercício 68 - Criar um algoritmo para imprimir a soma de todos os números de 0 à 100.
 */
 
  
main(){
	setlocale(LC_ALL, "Portuguese");
  	
	int contador = 0, number;
	printf("Digite um número: ");
	scanf ("%d", &number);
	

             while( contador <= number )
             {
               printf( "%d, ", contador);
               contador += 1;
             }

             printf("ACABOU !!!!\n");

	
}


  
 
