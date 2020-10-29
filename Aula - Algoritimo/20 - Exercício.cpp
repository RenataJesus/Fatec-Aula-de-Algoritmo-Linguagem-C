#include<stdio.h>
#include<stdlib.h>
#include<math.h>

/*
Exercício 20
Elabore um algoritmo que calcule a área de um trapézio qualquer*/

main (){

float area,baseMaior,baseMenor,h;

	printf("Digite o valor da base maior...");
	scanf("%f", &baseMaior);

	printf("Digite o valor da base menor...");
	scanf("%f", &baseMenor);

	printf("Digite o valor da base altura...");
	scanf("%f", &h);

area = ((baseMaior - baseMenor)*h)/2;

	printf("\nO valor da area eh: %f",area);


system("pause");

}
