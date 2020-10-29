#include<stdio.h>
#include<stdlib.h>
#include<math.h>
#include<locale.h>

/* Exercicio 35
Elabore um algoritmo para calcular o volume e a area de uma esfera.
Todos os valores devem ser positivos e maiores que zero.
area = 4 * M_PI * pow(raio,2);
volume = 4/3 * M_PI * pow(raio,2); */

main (){
	
	setlocale(LC_ALL, "Portuguese");

	float raio,area,volume;
	
		printf("Digite o valor do raio:  ");
		scanf("%f", &raio);
							
		if (raio>0){
			
		    area = 4 * M_PI * pow(raio,2);
			printf ("\n A area é: %.2f \n ", area);	
			
			volume = 4/3 * M_PI * pow(raio,2);
			printf ("\n A volume é: %.2f \n ", volume);		
		}else{
			
			printf("\n Números inválidos \n\n");				
		}		
		
	system("pause");
}
