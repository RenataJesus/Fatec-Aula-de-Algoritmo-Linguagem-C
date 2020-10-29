#include<stdio.h>
#include<stdlib.h>
#include<math.h>
#include<locale.h>

/* Exercício 26
Criar um algoritmo que calcule e imprima a área e a hipotenusa de um triângulo
retângulo.
Observação: Os valores devem ser positivos.*/

main (){
	
	setlocale(LC_ALL, "Portuguese");

	float area,base,altura, hipotenusa;
	
		printf("Digite o valor de base:  ");
		scanf("%f", &base);
			
		printf("Digite o valor da altura:  ");
		scanf("%f", &altura);
					
		if (base >=0 && altura>=0){
			//a² = b² + c²
			area = base*altura;
			printf ("\n A area é: %.2f \n ", area);
			hipotenusa = sqrt(pow(base,2)+ pow(altura,2));
			printf ("\n A hipotenusa é: %.2f \n ", hipotenusa);
			
				
		}else{
			
			printf("\n Números inválidos \n\n");				
		}		
		
	system("pause");
}
