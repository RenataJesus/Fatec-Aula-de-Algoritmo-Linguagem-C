#include<stdlib.h>
 #include<math.h>
 #include<locale.h>
 #include <string.h>
 
  /*Exercício 72
• Criar um algoritmo que receba dois números e imprima a soma dos valores
compreendidos entre estes números.*/
 
  
main(){
	setlocale(LC_ALL, "Portuguese");
  	
	int contador, number1, number2, soma;
	printf("Digite um número: ");
	scanf ("%d", &number1);
	printf("Digite outro número: ");
	scanf ("%d", &number2);
	
		for(contador=number1+1; contador<=number2; contador++){
		soma=soma+contador;
			printf("%d, ", soma);
		}
}
			
			
       	


  
 
