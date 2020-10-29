#include <stdio.h>
#include <stdlib.h>


//Elabore um algoritmo que calcule a área e o perímetro de um quadrado.
//Área = lado2
//Perímetro = é a soma de todos os lados


main(){
	
	
	float lado, area, perimetro;
	
	printf("Digite o valor do lado do quadrado: ");
	scanf ("%f", &lado);
	
	perimetro = lado *4;
	area = lado * lado;
	
	
	printf("\n A area do quadrado eh %f: ", area);
	printf("\n O perimetro do quadrado eh %f: ", perimetro); 
	
	
	
	system("pause");
}
