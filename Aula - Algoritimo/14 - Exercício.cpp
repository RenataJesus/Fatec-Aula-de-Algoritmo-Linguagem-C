#include <stdio.h> //Escrita  e Leitura
#include <stdlib.h> // Biblioteca Auxiliar
#include <math.h> //biblioteca de raiz

main(){

int numero1, numero2, dividendo, divisor, resto, quociente;
 
printf("Digite o numero 1: ");
scanf("%d", &numero1);

printf("Digite o numero 2: ");
scanf("%d", &numero2);
 
 dividendo = numero1;
 divisor = numero2;
 quociente = numero1 / numero2;
 resto = numero1 % numero2;
 
 printf("Dividendo = %d,\n divisor = %d,\n Quociente = %d,\n Resto = %d,\n", dividendo, divisor, quociente, resto);
	
} //final do programa
