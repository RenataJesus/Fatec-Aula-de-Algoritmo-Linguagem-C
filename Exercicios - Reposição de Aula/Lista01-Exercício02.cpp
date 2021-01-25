#include<stdio.h>
 #include<stdlib.h>
 #include<math.h>
 #include<locale.h>
 
 /*
Crie um algoritmo que, dado o nível de alerta de risco, imprima se ele for GRAVE. O nível
de alerta é um número que varia de 0 a 10. O nível é considerado GRAVE quando ele é
superior a 9.
*/ 
 main(){
	setlocale(LC_ALL, "Portuguese");
		int alerta = 0;
		printf("Digite o nível de alerta de risco de 0 a 10: \n");
		scanf("%d", &alerta);
		

		if(alerta>9){
			printf("GRAVE!!!\n" );

		}else{
			printf("----");
		}
	}

	


 


