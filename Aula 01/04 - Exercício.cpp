#include <stdio.h>
#include <stdlib.h>
//Crie um algoritmo que receba duas variáveis do tipo inteiro. ok
//Atribuir um valor para cada variável e posteriormente exibir este valor. ok
//Para finalizar, exibir a primeira variável acrescida de uma unidade e exibir a segunda variável decrescida de uma unidade.


main(){
	
	int variavel1;
	int variavel2, crescente, decrescente;
	
	
	printf("Digite um numero inteiro: ");
	scanf ("%d", &variavel1);
	
	printf("Digite outro numero inteiro: ");
	scanf("%d", &variavel2);
	
	printf("Os numeros digitados foram %d e %d\n",variavel1, variavel2);
	
	crescente = variavel1 +1;
	printf("O primeiro numero mais 1 eh igual %d \n",crescente,"\n");
	
	decrescente = variavel2 - 1;
	printf("O segundo numero menos 1 eh igual %d \n", decrescente, "\n");
	
	system("pause");
}
