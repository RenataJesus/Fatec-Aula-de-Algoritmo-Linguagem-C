#include <stdio.h> // Escrita e Leitura
#include <stdlib.h> // Biblioteca Auxiliar
#include <math.h> // biblioteca de matematica

/*Exercicio 16
Elabore um algoritmo que entre com valor do raio e calcule a area e o perimetro do
circulo correspondente.
. A formula para se calcular a area da circunferencia e : A = Pi . raio2
. A formula para se calcular o perimetro da circunferencia e : A = 2 . ¥ð . r */

int main(void){

float raio,area, perimetro;
 
 printf("Digite o valor do raio da circunferencia: ");
 scanf ("%f", &raio);
 
 area = M_PI * (raio*raio);
 
 printf(" a area eh: %.2f\n ", area);
 
 perimetro = 2* M_PI * raio;
 
 printf("O perimetro eh %.2f", perimetro);
 
}
