#include <stdio.h>
#include <stdlib.h>


//Elabore um algoritmo que calcule a área da superfície de um paralelepipido 

// a = base 
// b = altura
//c = profundidade

main(){
	float a,b,c, area;
	
	printf("Digite o valor da base do paralelepipido: \n ");
	scanf("%f", &a);
	
	printf("Digite o valor da altura do paralelepipido: \n");
	scanf("%f", &b);
	
	printf("Digite o valor da profundidade do paralelepipido: \n");
	scanf("%f", &c);
	
	area = 2*a*b + 2*b*c + 2*a*c;
	
	printf("\n A area do perimetro é: %f", area);
	
	
	system("pause");
	
}
