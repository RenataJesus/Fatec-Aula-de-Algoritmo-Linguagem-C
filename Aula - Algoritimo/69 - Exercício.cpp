#include<stdlib.h>
 #include<math.h>
 #include<locale.h>
 #include <string.h>
 
  /*
Exerc�cio 68 - Criar um algoritmo para imprimir a soma de todos os n�meros de 0 � 100.iba na tela o valor a ser pago ao funcion�rio,
adicionando 10% sobre o valor calculado.
 */
 
  
main(){
	setlocale(LC_ALL, "Portuguese");
  	
	int contador = 0, number;
	printf("Digite um n�mero: ");
	scanf ("%d", &number);
	

             while( contador <= number )
             {
               printf( "%d, ", contador);
               contador += 1;
             }

             printf("ACABOU !!!!\n");

	
}


  
 
