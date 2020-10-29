#include<stdio.h>
#include<stdlib.h>
#include<math.h>
#include<locale.h>

/* Exercício 38
Efetuar a leitura de um número e apresentar o resultado do quadrado desse número.
Depois verificar se este novo valor é maior que 10.00, menor que 10.00 ou igual a
10.00.
Se for maior que 10.00 apresentar também sua Raiz Cúbica. */

main (){
	
	setlocale(LC_ALL, "Portuguese");
	float numero, numeroAoQuadrado;
	
	printf("Digite um número: ");
	scanf("%f", &numero);
	
	numeroAoQuadrado =pow(numero,2);
	printf("O quadrado do %.2f número é %.2f: \n\n", numero, numeroAoQuadrado);
	
	if(numeroAoQuadrado>10){
		printf("O número é maior que 10\n");
	}else if(numeroAoQuadrado<10){
		printf("número é menor que 10\n");
	} else{
		printf("O número é igual a 10\n");
	}
	
	
}
