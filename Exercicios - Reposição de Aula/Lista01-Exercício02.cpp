#include<stdio.h>
 #include<stdlib.h>
 #include<math.h>
 #include<locale.h>
 
 /*
Crie um algoritmo que, dado o n�vel de alerta de risco, imprima se ele for GRAVE. O n�vel
de alerta � um n�mero que varia de 0 a 10. O n�vel � considerado GRAVE quando ele �
superior a 9.
*/ 
 main(){
	setlocale(LC_ALL, "Portuguese");
		int alerta = 0;
		printf("Digite o n�vel de alerta de risco de 0 a 10: \n");
		scanf("%d", &alerta);
		

		if(alerta>9){
			printf("GRAVE!!!\n" );

		}else{
			printf("----");
		}
	}

	


 


