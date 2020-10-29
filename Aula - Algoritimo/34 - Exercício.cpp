#include<stdio.h>
#include<stdlib.h>
#include<math.h>
#include<locale.h>

/* Exercício 34
Elabore um algoritmo para calcular o volume de um cilindro vazado.
Atenção:
Os valores devem ser positivos.
Volume do cilindro maior > Volume do cilindro menor
Volume = (volume do cilindro maior) – (volume do cilindro menor) */

main (){
	
	setlocale(LC_ALL, "Portuguese");

	float volume,volumeCilindroMaior,volumeCilindroMenor;
	
		printf("Digite o valor do volume do cilindro maior:  ");
		scanf("%f", &volumeCilindroMaior);
			
		printf("Digite o valor do volume do cilindro menor:  ");
		scanf("%f", &volumeCilindroMenor);
					
		if (volumeCilindroMaior >=0 && volumeCilindroMenor >=0 && volumeCilindroMaior>volumeCilindroMenor){
		    volume = volumeCilindroMaior - volumeCilindroMenor;
			printf ("\n A volume é: %.2f \n ", volume);	
				
		}else{
			
			printf("\n Números inválidos \n\n");				
		}		
		
	system("pause");
}
