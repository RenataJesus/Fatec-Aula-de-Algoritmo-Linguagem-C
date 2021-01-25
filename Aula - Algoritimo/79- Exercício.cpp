#include<stdio.h>
 #include<stdlib.h>
 #include<math.h>
 #include<locale.h>
 
 /*
Exercício 79
Imprimir todos os números pares , múltiplos de 5 e 7 de 1 até 100.
Imprimir também a soma deste números.
*/ 
 main(){
	setlocale(LC_ALL, "Portuguese");
		int multiploSete = 7;
		int multiploCinco = 5;
		int resultado = 0;

		for(int i = 1; i < 100; i++){
			
			    if((i%2==0 )){
			    	if((i % 5 == 0 || )){
			    		printf("Multiplo de 5: %d\n\n", multiploCinco);
			    	
			    		multiploCinco+=i;
					}
			    	if(i % 7 == 0 && i%2==0 ){
			    	
			    	printf("Multiplo de 7: %d\n\n", multiploSete);
			    	
			    	multiploSete+=i;
					}
		    			
				}
			}
			resultado = multiploCinco+multiploSete;
			printf("A soma dos números é: %d", resultado);
}


 


