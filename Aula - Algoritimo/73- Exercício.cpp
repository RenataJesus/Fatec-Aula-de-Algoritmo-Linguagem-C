#include<stdlib.h>
 #include<math.h>
 #include<locale.h>
 #include <string.h>
 
  /*Exerc�cio 72
� Criar um algoritmo que receba dois n�meros e imprima a soma dos valores
compreendidos entre estes n�meros.*/
 
  
main(){
	setlocale(LC_ALL, "Portuguese");
  	
	int contador, number1, number2, soma;
	printf("Digite um n�mero: ");
	scanf ("%d", &number1);
	printf("Digite outro n�mero: ");
	scanf ("%d", &number2);

		
		for(contador=number1+1; contador<=number2; contador++){
			soma=soma+contador;
			if(soma%2==0){
			printf("%d, ",soma);	
			}
		
		}
			
		
		
}
			
			
       	


  
 
