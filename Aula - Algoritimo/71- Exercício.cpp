#include<stdlib.h>
 #include<math.h>
 #include<locale.h>
 #include <string.h>
 
  /*
Exercício 71
• Criar um algoritmo que receba dois números e imprima os números
compreendidos entre estes números.
 */
 
  
main(){
	setlocale(LC_ALL, "Portuguese");
  	
	int contador, number1, number2;
	printf("Digite um número: ");
	scanf ("%d", &number1);
	printf("Digite outro número: ");
	scanf ("%d", &number2);
	
		for(contador=number1+1; contador<=number2; contador++){
			printf("%d, ", contador);
		}
}
			
			
       	


  
 
