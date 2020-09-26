#include<stdio.h>
#include<stdlib.h>
#include<math.h>
#include<locale.h>

/* Exercício 32
Crie um algoritmo que possa calcular a área de uma coroa de forma circular.
Atenção:
Os valores devem ser positivos.
A área da circunferência Menor deve ser menor que a área da
circunferência Maior
Área = (Área da circunferência Maior) – (Área da circunferência
menor)
Exercício*/

main (){
	
	setlocale(LC_ALL, "Portuguese");

	float areaCircoferenciaMaior,areaCircoferenciaMenor,area;
	
		printf("Digite o valor de Área da circunferência Maior:  ");
		scanf("%f", &areaCircoferenciaMaior);
			
		printf("Digite o valor da Área da circunferência menor:  ");
		scanf("%f", &areaCircoferenciaMenor);
					
		if (areaCircoferenciaMaior >=0 && areaCircoferenciaMenor>=0){
		    area = areaCircoferenciaMaior - areaCircoferenciaMenor;
			printf ("\n A area é: %.2f \n ", area);	
				
		}else{
			
			printf("\n Números inválidos \n\n");				
		}		
		
	system("pause");
}
