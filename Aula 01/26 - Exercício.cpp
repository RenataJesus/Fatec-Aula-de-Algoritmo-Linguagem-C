#include<stdio.h>
#include<stdlib.h>
#include<math.h>
#include<locale.h>

/* Exerc�cio 26
Criar um algoritmo que calcule e imprima a �rea e a hipotenusa de um tri�ngulo
ret�ngulo.
Observa��o: Os valores devem ser positivos.*/

main (){
	
	setlocale(LC_ALL, "Portuguese");

	float area,base,altura, hipotenusa;
	
		printf("Digite o valor de base:  ");
		scanf("%f", &base);
			
		printf("Digite o valor da altura:  ");
		scanf("%f", &altura);
					
		if (base >=0 && altura>=0){
			//a� = b� + c�
			area = base*altura;
			printf ("\n A area �: %.2f \n ", area);
			hipotenusa = sqrt(pow(base,2)+ pow(altura,2));
			printf ("\n A hipotenusa �: %.2f \n ", hipotenusa);
			
				
		}else{
			
			printf("\n N�meros inv�lidos \n\n");				
		}		
		
	system("pause");
}
