#include <stdio.h>
 #include<stdlib.h>
 #include<math.h>
 #include<locale.h>
 
 /*
6. Tendo como dados de entrada a altura e o sexo de uma pessoa, construa um algoritmo
que calcule seu peso ideal, utilizando as seguintes fórmulas:
• para homens: (72.7 * h) – 58;
• para mulheres: (62.1 * h) – 44.7.
*/ 
 main(){
	setlocale(LC_ALL, "Portuguese");
	
		float altura, pesoIdeal;
		char sexo;
		printf("Digite seu sexo [F] ou [M]:\n");
		scanf("%s", &sexo);
		
		printf("Digite sua altura: (Ex: 1,55)\n");
		scanf("%f", &altura);
		
		
		if(sexo=='F'|| sexo== 'f'){
		pesoIdeal = ((62.1*altura)-44.7);
			printf("Seu peso ideal é: %.2f Kg \n",pesoIdeal);
			
		}else if(sexo=='M'|| sexo=='m'){
			pesoIdeal=((72.7 * altura)-58);
				printf("Seu peso ideal é: %.2f Kg \n",pesoIdeal);
		}else{
				printf("Sexo inválido");
		}
	}
