#include<stdio.h>
 #include<stdlib.h>
 #include<math.h>
 #include<locale.h>
 
 /*
 Criar um algoritmo que entre com cinco números e imprima o quadrado de cada
número.
Atenção:
• Utilizar obrigatoriamente uma estrutura de repetição.
• Não utilizar cinco variáveis.

 */ 
 main(){
	setlocale(LC_ALL, "Portuguese");

 
for(int i=0; i<5; i++){
    float n; 
    printf("Digite um número: ");
	scanf("%f", &n);
	 
 	float quadrado = pow(n,2);
 	printf("número %.1f, seu quadrado é %.1f\n ", n, quadrado);
 	
 }

 }


