#include<stdio.h>
 #include<stdlib.h>
 #include<math.h>
 #include<locale.h>
 
 /*
3. Faça um algoritmo que, dados três números inteiros, os imprima em ordem crescente.
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
		
		if((number1<number2)&&(number2<number3)){
			
			printf("\n\n A ordem é: %d, %d, %d \n", number1, number2, number3);
					
		}else if( (number2<number1)&&(number1<number3)){
				
			printf("\n\n A ordem é: %d, %d, %d \n", number2, number1, number3);
		
		}else{
				printf("\n\n A ordem é: %d, %d, %d \n", number3, number2, number1);

		}
	}

	


 


