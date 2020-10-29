#include<stdio.h>
#include<stdlib.h>
#include<math.h>

/*Exercício 27
Digitar um valor qualquer e imprimir se o valor digitado é “Par” ou “Ímpar”.
Atenção: os números dever ser maiores que zero.*/

main (){

	int numero;
	
		printf("Digite um número ");
		scanf("%d", &numero);
				
		if ((numero%2)==0){
			printf("\n O numero %d eh par\n\n",numero);	
		}else{
			printf("\n O numero %d eh impar\n\n",numero);				
		}		
		
	system("pause");
}
