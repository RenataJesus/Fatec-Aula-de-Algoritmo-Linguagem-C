#include <stdio.h>
#include <stdlib.h>

//03 � Crie um algoritmo que leia dois nomes e imprima os nomes na sequ�ncia em que
//foram escritos e posteriormente os imprima na ordem inversa.

main(){
	

	int numero1, numero2; //declara��o de vari�veis do tipo inteiro
	
	printf("Digite um numero inteiro: "); 
	 scanf("%d", &numero1); 
	
	printf("Digite um numero inteiro: "); 
	 scanf("%d", &numero2); 
	
	printf("Os numeros digitados foram %d. e %d.\n",numero1, numero2);
	printf("O contrario dos n�meros s�o:  %d. e %d.\n",numero2, numero1);

	
	
	system("pause"); 
	
}
