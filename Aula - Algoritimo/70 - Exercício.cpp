#include<stdlib.h>
 #include<math.h>
 #include<locale.h>
 #include <string.h>
 
  /*
Exercício 69
• Criar um algoritmo que receba um número obrigatoriamente maior que zero e
imprima todos os números de zero até o número digitado.
 */
 
  
main(){
	setlocale(LC_ALL, "Portuguese");
  	
	int contador = 0, number;
	printf("Digite um número maior que dez: ");
	scanf ("%d", &number);
	
			if (number>10){
				 while( contador <= number )
             {
               printf( "%d, ", contador);
               contador += 1;
             }
			}else{
				printf("Valor incorreto!");
			}
       	
}


  
 
