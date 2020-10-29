#include<stdio.h>
#include<stdlib.h>
#include<math.h>
#include<locale.h>

/* Exercicio 33
Elabore um algoritmo que possa calcular o volume de um cilindro.
Atencao:
 - Os valores devem ser positivos.
 - Volume = area da base x altura */

main (){
	
	setlocale(LC_ALL, "Portuguese");

	float volume,areaDaBase,altura;
	
		printf("Digite o valor da Área da area da base:  ");
		scanf("%f", &areaDaBase);
			
		printf("Digite o valor da altura:  ");
		scanf("%f", &altura);
					
		if (areaDaBase >=0 && altura>=0){
		    volume = areaDaBase * altura;
			printf ("\n A volume é: %.2f \n ", volume);	
				
		}else{
			
			printf("\n Números inválidos \n\n");				
		}		
		
	system("pause");
}
