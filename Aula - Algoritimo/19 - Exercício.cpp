#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <math.h>

/* 
Exerc�cio 19
Entrar com os lados A, B e C de um paralelep�pedo.
Calcular e imprimir o volume.
� Volume = A * B * C
*/

main(){
	
	float a, b,c, volume;
	
	printf("Digite o lado A: ");
	scanf("%f", &a);
	
	printf("Digite o lado B: ");
	scanf("%f", &b);
	
	printf("Digite o lado C: ");
	scanf("%f", &c);

	volume = a*b*c;
	
	printf("O volume do paralelepipido �: %f", volume);
}
