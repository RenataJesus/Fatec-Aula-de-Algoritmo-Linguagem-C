#include<stdio.h>
 #include<stdlib.h>
 #include<math.h>
 #include<locale.h>
 
 /*
2. Encontrar o dobro de um n�mero caso ele seja positivo e o seu triplo caso seja negativo,
imprimindo o resultado.
*/ 
 main(){
	setlocale(LC_ALL, "Portuguese");
		int numero, resultado;
		printf("Digite um numero: \n");
		scanf("%d", &numero);
		
		if(numero%2==0){
			resultado = pow(numero,2);
			printf("O valor de n�mero� �: %d \n", resultado);
			
		}else if(numero%2!=0){
				resultado = pow(numero,3);
			printf("O valor de n�mero� �: %d \n", resultado);
		}
	}

	


 


