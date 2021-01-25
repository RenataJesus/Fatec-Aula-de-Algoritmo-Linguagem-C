#include<stdio.h>
 #include<stdlib.h>
 #include<math.h>
 #include<locale.h>
 
 /*
02 - Escreva um programa que verifique a validade de uma senha fornecida pelo usuario.
	 A senha valida e o numero 1234. 
	 Devem ser impressas as seguintes mensagens:
	 Acesso PERMITIDO caso a senha seja valida
	 Acesso NEGADO caso a senha seja invalida
*/ 
 main(){
	setlocale(LC_ALL, "Portuguese");
	
		int senha=0;
		
		printf("Digite sua senha: \n");
		scanf("%d", &senha);
		
			
			if(senha==1234){
			printf("Acesso PERMITIDO caso a senha seja valida");
			
		}else{
				printf("Acesso NEGADO caso a senha seja invalida");
		}
	}

	


 


