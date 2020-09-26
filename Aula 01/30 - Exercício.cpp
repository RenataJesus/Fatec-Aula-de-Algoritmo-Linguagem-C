#include<stdio.h>
#include<stdlib.h>
#include<math.h>
#include<locale.h>

/* Exercício 30
Conhecendo a diagonal maior e a diagonal menor de um losango regular, calcular o
valor de seu lado.
Atenção: Os valores não podem ser negativos ou iguais a zero.*/

main (){
	 setlocale(LC_ALL, "Portuguese");

	float area,d,D;
	
		printf("Digite o valor de 'd':  ");
		scanf("%f", &d);
		printf("valor digitado: %.2f\n" , d);
			
		printf("Digite o valor de 'D': ");
		scanf("%f", &D);
		printf("valor digitado: %.2f\n" , D);
			
		if (d >0 && D>0){
			//a² = b² + c²
			area = (d*D)/2;
			printf ("\n A area é: %.2f \n ", area);
				
		}else{
			
			printf("\n Números inválidos \n\n");				
		}		
		
	system("pause");
}
