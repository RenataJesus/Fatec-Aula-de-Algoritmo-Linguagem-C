#include<stdio.h>
#include<stdlib.h>
#include<math.h>

/* Exerc�cio 29
Criar um algoritmo que calcule e imprima a �rea de um losango.
Se os valores de entrada forem negativos ou iguais a zero o algoritmo deve imprimir
uma mensagem de erro - �Valores inv�lidos�.*/

main (){

	float area,d,D;
	
		printf("Digite o valor de 'd':  ");
		scanf("%f", &d);
		printf("valor digitado: " , d);
			
		printf("Digite o valor de 'D':  ");
		scanf("%f", &D);
		printf("valor digitado: " , D);
			
		if (d >=0 && D>=0){
			//a� = b� + c�
			area = (d*D)/2;
			printf ("\n A area eh: %.2f \n ", area);
				
		}else{
			
			printf("\n N�meros inv�lidos \n\n");				
		}		
		
	system("pause");
}
