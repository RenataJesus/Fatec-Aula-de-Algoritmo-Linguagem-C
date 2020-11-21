#include <stdio.h> //Escrita  e Leitura
#include <stdlib.h> // Biblioteca Auxiliar
#include <math.h> //biblioteca de raiz
//raiz quadrada
//raiz 2 de n = n elevada 1/2
//raiz 3 de n = n elevada 1/3
//raiz 7 de n = n elevada 1/7
//raiz 13 de n = n elevada 1/13

main(){

float numero =9, raizQuadrada,raizCubica, potencia;
raizQuadrada = sqrt(numero);
printf("%f\n",raizQuadrada, "\n");
	
	
	//raiz cúbica
	numero=27;
	raizCubica = cbrt(numero);
	printf("%f\n",raizCubica);
	
	
	//PI float pi = 3.1415
	printf("%f\n", M_PI);
//potencia 

printf("\n\n");
numero = 3; //elevado ao ²
potencia = pow(3,2); //primeiro vem o número e depois vem o número que irá elevar 
printf("%f\n", potencia);


	
} //final do programa
