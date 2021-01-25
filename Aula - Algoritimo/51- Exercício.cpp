#include<stdio.h>
 #include<stdlib.h>
 #include<math.h> 
 
 #include<locale.h>
 
 /*
Exercício 51 - Escreva um programa que leia as coordenadas x e y de um plano
cartesiano (sendo estes valores maior que zero). Calcule a distância entre estes
números.
*/ 
 main(){
	setlocale(LC_ALL, "Portuguese");
		int x1, x2, y1,y2, a, b;
		float hipotenusa; 
		
	 printf("Informe as coordenadas para o primeiro ponto: ");
    scanf("%i %i", &x1, &y1);
    printf("Informe as coordenadas para o segundo ponto: ");
    scanf("%i %i", &x2, &y2);
	
	if(x1>0&& y1>0 && x2>0 && y2>0){
		a=x1-x2;
		b=y1-y2;
		
		hipotenusa = sqrt( a*a + b*b);	
		printf("A distância entre os pontos é: %f", hipotenusa);
		
	}else {
		printf("Valores incorretos, coordenadas devem ser maiores que 0!");
	}


}


 


