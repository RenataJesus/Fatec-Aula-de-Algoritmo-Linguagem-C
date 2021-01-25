#include<stdio.h>
 #include<stdlib.h>
 #include<math.h>
 #include<locale.h>
 
 /*
5. Faça um algoritmo que leia o nome, o sexo e o estado civil de uma pessoa. Caso o sexo
seja ‘F’ e estado civil seja “CASADA”, solicitar o tempo de casada (anos).
*/ 
 main(){
	setlocale(LC_ALL, "Portuguese");
		char nome[100], sexo[1], estadoCivil[10];
		int  tempoCasamento;
		
		printf("Digite o sexo : [F] ou [M] \n");
		scanf("%s", &nome);
		
		printf("Digite o nome: \n");
		scanf("%s", &sexo);
		
		printf("Digite o estado civil: (casada), (solteira), (outros)\n");
		scanf("%s", &estadoCivil);
		
		if((sexo==f)&& (estadoCivil==casada)){
			
			printf("Digite o tempo de casada: \n");
		scanf("%s", &tempoCasamento);
		}
		
	}

	


 


