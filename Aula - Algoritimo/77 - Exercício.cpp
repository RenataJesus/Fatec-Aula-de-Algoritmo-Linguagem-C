#include<stdio.h>
 #include<stdlib.h>
 #include<math.h>
 #include<locale.h>
 
 /*
Exerc�cio 77
Fa�a um programa que receba v�rios n�meros, calcule e mostre:
� A soma dos n�meros digitados
� A quantidade de n�meros digitados
� A m�dia dos n�meros digitados
� O maior n�mero digitado
� O menor n�mero digitado
� A m�dia dos n�meros pares
� Finalize a entrada de dados caso o usu�rio informe o valor 0.
*/ 
 main(){
	setlocale(LC_ALL, "Portuguese");
	int numero,maior,menor;
	int quantidadePar;
	float media,soma, quantidadeNumero,somaPar, mediaPar;
	
		printf("Digite um n�mero: ");
		scanf("%d", &numero);
			maior=numero;
			menor=numero;	
			
			while(numero!=0){
				soma= numero+soma;
				quantidadeNumero+=1;
				media= soma/quantidadeNumero;
				
				if(numero>maior){
					maior=numero;
				}else if(numero<menor){
					menor=numero;
				}
				if(numero%2==0){
				somaPar+= numero;
				quantidadePar+=1;
				mediaPar= somaPar/quantidadePar;
					
				}
							
				printf("DDigite um n�mero: ");
				scanf("%d", &numero);
			}
				printf("\nA quantidade de n�meros digitados: %.0f",quantidadeNumero);
				printf("\nA soma dos n�meros digitados: %.0f",soma);
				printf("\nA m�dia dos n�meros digitados: %.2f",media);
				printf("\nO maior n�mero digitado: %d",maior);
				printf("\nO menor n�mero digitado: %d",menor);
				printf("\nA m�dia dos n�meros pares: %f",mediaPar);
				printf("\n%f e... %d", somaPar, quantidadePar);
}

 


