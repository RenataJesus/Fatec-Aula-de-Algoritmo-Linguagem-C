#include<stdio.h>
#include<stdlib.h>
#include<math.h>
#include<locale.h>

/* Exerc�cio 32
Crie um algoritmo que possa calcular a �rea de uma coroa de forma circular.
Aten��o:
Os valores devem ser positivos.
A �rea da circunfer�ncia Menor deve ser menor que a �rea da
circunfer�ncia Maior
�rea = (�rea da circunfer�ncia Maior) � (�rea da circunfer�ncia
menor)
Exerc�cio*/

main (){
	
	setlocale(LC_ALL, "Portuguese");

	float areaCircoferenciaMaior,areaCircoferenciaMenor,area;
	
		printf("Digite o valor de �rea da circunfer�ncia Maior:  ");
		scanf("%f", &areaCircoferenciaMaior);
			
		printf("Digite o valor da �rea da circunfer�ncia menor:  ");
		scanf("%f", &areaCircoferenciaMenor);
					
		if (areaCircoferenciaMaior >=0 && areaCircoferenciaMenor>=0){
		    area = areaCircoferenciaMaior - areaCircoferenciaMenor;
			printf ("\n A area �: %.2f \n ", area);	
				
		}else{
			
			printf("\n N�meros inv�lidos \n\n");				
		}		
		
	system("pause");
}
