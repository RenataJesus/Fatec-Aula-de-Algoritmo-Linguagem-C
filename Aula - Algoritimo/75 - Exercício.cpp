#include<stdio.h>
 #include<stdlib.h>
 #include<math.h>
 #include<locale.h>
 
 /*
 Criar um algoritmo que entre com cinco n�meros e imprima o quadrado de cada
n�mero.
Aten��o:
� Utilizar obrigatoriamente uma estrutura de repeti��o.
� N�o utilizar cinco vari�veis.

 */ 
 main(){
	setlocale(LC_ALL, "Portuguese");
 
	for(int i=0; i<5; i++){
    	float numero; 
   		printf("Digite um n�mero: ");
		scanf("%f", &numero);
	  	float quadrado = pow(numero,2);
 		printf("n�mero %.1f, seu quadrado � %.1f\n ", n, quadrado);
 	}

 }


