#include<stdio.h>
#include<stdlib.h>
#include<math.h>
#include<locale.h>

/* Exerc�cio 38
Efetuar a leitura de um n�mero e apresentar o resultado do quadrado desse n�mero.
Depois verificar se este novo valor � maior que 10.00, menor que 10.00 ou igual a
10.00.
Se for maior que 10.00 apresentar tamb�m sua Raiz C�bica. */

main (){
	
	setlocale(LC_ALL, "Portuguese");
	float numero, numeroAoQuadrado;
	
	printf("Digite um n�mero: ");
	scanf("%f", &numero);
	
	numeroAoQuadrado =pow(numero,2);
	printf("O quadrado do %.2f n�mero � %.2f: \n\n", numero, numeroAoQuadrado);
	
	if(numeroAoQuadrado>10){
		printf("O n�mero � maior que 10\n");
	}else if(numeroAoQuadrado<10){
		printf("n�mero � menor que 10\n");
	} else{
		printf("O n�mero � igual a 10\n");
	}
	
	
}
