#include<stdio.h>
 #include<stdlib.h>
 #include<math.h>
 #include<locale.h>
 
 /*
3. As maçãs custam R$ 0,30 cada se forem compradas menos do que uma dúzia e 
	R$ 0,25 se forem compradas pelo menos doze. 
	Construa um programa que leia a quantidade de maçãs compradas, calcule 
	e mostre o valor total da compra.
*/ 
 main(){
	setlocale(LC_ALL, "Portuguese");
	
		float quantidaMaca=0;
		float precoMaca;
		
		printf("Digite a quantidade de maça comprada: \n");
		scanf("%f", &quantidaMaca);
			
			if(quantidaMaca>=12){
				precoMaca = quantidaMaca*0.25; 
				printf("Você pagará pelas maças o valor de R$ %.2f", precoMaca);
			
		}else{
				precoMaca = quantidaMaca *0.30; 
				printf("Você pagará pelas maças o valor de R$ %.2f", precoMaca);
		}
	}

	


 


