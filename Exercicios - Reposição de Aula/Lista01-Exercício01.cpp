#include<stdio.h>
 #include<stdlib.h>
 #include<math.h>
 #include<locale.h>
 
 /*
Crie um algoritmo que, dado tr�s n�meros informados pelo usu�rio, informe qual � o
menor deles.
*/ 
 main(){
	setlocale(LC_ALL, "Portuguese");
		int number1 = 0, number2=0, number3=0;
		printf("Digite o primeiro numero: \n");
		scanf("%d", &number1);
		
		printf("Digite o segundo numero: \n");
		scanf("%d", &number2);
		
		printf("Digite o terceiro numero: \n");
		scanf("%d", &number3);
		
		if((number1<number2)&&(number1<number3)){
			printf("O menor n�mero �: %d \n", number1);
			
		}else if( (number2<number1)&&(number2<number3)){
			
			printf("O menor n�mero �: %d \n", number2);
		}else{
			printf("O menor n�mero �: %d \n", number3);
		}
	}

	


 


