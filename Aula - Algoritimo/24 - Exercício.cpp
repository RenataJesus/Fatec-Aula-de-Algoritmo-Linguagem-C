#include<stdio.h>
#include<stdlib.h>
#include<math.h>
/*
Exercicio 24
Elabore um algoritmo para calcular o volume e a area de uma esfera
Area = 4*PI*r²
Volume = 4/3*PI*r³ */

main (){

	float area,volume,raio, numero=3;
	
		printf("Digite o valor do raio de uma esfera...");
		scanf("%f", &raio);

		area= 4*M_PI * pow(raio,2);

		printf("\nDe acordo com o raio %f,o valor da area de uma esfera eh %f", raio,area);
		
		volume= 4.0/3.0 * M_PI * pow(raio,numero);
		printf("\nDe acordo com o raio %f,o volume de uma esfera eh %f\n\n", raio,volume);

	system("pause");
}
