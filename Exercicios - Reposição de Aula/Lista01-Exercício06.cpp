#include<stdio.h>
 #include<stdlib.h>
 #include<math.h>
 #include<locale.h>
 
 /*
Fa�a um algoritmo para receber um n�mero qualquer e informar na tela se � par ou
�mpar.
*/ 
 main(){
	setlocale(LC_ALL, "Portuguese");
		int number=0;
		printf("Digite um n�mero: \n");
		scanf("%d", &number);
		
		if(number%2==0){
			
			printf("\n\n O n�mero %d  � par!\n", number);
		
		}else{
			printf("\n\n O n�mero %d  � �mpar!\n", number);;

		}
	}

	


 


