#include<stdio.h>
#include<stdlib.h>
#include<math.h>

/*Exerc�cio 27
Digitar um valor qualquer e imprimir se o valor digitado � �Par� ou ��mpar�.
Aten��o: os n�meros dever ser maiores que zero.*/

main (){

	int numero;
	
		printf("Digite um n�mero ");
		scanf("%d", &numero);
				
		if ((numero%2)==0){
			printf("\n O numero %d eh par\n\n",numero);	
		}else{
			printf("\n O numero %d eh impar\n\n",numero);				
		}		
		
	system("pause");
}
