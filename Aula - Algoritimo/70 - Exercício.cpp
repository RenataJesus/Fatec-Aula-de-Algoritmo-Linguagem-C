#include<stdlib.h>
 #include<math.h>
 #include<locale.h>
 #include <string.h>
 
  /*
Exerc�cio 69
� Criar um algoritmo que receba um n�mero obrigatoriamente maior que zero e
imprima todos os n�meros de zero at� o n�mero digitado.
 */
 
  
main(){
	setlocale(LC_ALL, "Portuguese");
  	
	int contador = 0, number;
	printf("Digite um n�mero maior que dez: ");
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


  
 
