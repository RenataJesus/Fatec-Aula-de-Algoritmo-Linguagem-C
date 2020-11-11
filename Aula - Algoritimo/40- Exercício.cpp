#include<stdio.h>
 #include<stdlib.h>
 #include<math.h>
 #include<locale.h>
 
 /*
 Construa um algoritmo para calcular o Volume
Formulas:
X Area do poligono = Lado1 x Lado2
X Area da circunferencia = pi x raio2
X Volume = (Area do poligono ¡V Area da circunferencia) x altura da figura.

Observacao:

X Nenhum valor atribuido pelo usuario pode ser nulo ou negativo.
X O diametro do circulo nao pode ser maior ou igual a menor lateral do
poligono.
X Se o usuario atribuir um valor indevido, uma mensagem de erro devera ser
emitida ao final do processo.
 
 */ 
 main(){
	setlocale(LC_ALL, "Portuguese");
 
  float  areaPoligono, lado1, lado2, areaCircunferencia, raio, alturaFigura;
  
  	printf("Digite o primeiro lado do poligono: ");
  	scanf("%f", &lado1);
  	
  	printf("\nDigite o segundo lado do poligono: ");
  	scanf("%f", &lado2);
  	
  	printf("\nDigite o raio do circulo: ");
  	scanf("%f", &raio);
  	
  	if(lado1 && lado)
 }
