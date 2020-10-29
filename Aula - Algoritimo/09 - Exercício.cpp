#include <stdio.h>
#include <stdlib.h>


//Elabore um algoritmo que calcule a área e o perímetro de um retângulo.
//Área = b x h
//Perímetro = é a soma de todos os lados


main(){
	
	float  base, altura, area, perimetro;
	
	printf("Digite o valor da base do retangulo: ");
	scanf("%f", &base);
	
	printf("Digite a altura do retangulo: ");
	scanf("%f", &altura);
	
	area = base * altura;
	
	perimetro = 2 * (base+altura);
	
	printf("\n A area do retangulo eh: %f", area);
	printf(" \n O perimetro do retangulo eh: %f", perimetro);
	
	system("pause");
	
}
