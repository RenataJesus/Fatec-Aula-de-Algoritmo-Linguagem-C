#include <stdio.h> //Escrita  e Leitura
#include <stdlib.h> // Biblioteca Auxiliar
#include <math.h> //biblioteca de raiz

main(){

float numero1, numero2, numero3, numero4, media;
 
printf("Digite a nota numero 1: ");
scanf("%f", &numero1);

printf("Digite a nota numero 2: ");
scanf("%f", &numero2);

printf("Digite a nota numero 3: ");
scanf("%f", &numero3);

printf("Digite a nota numero 4: ");
scanf("%f", &numero4);


media =((numero1*1) + (numero2*2)+ (numero3*3)+ (numero4*4)/10);
printf("As notas foram: %.2f,%.2f,%.2f,%.2f, e sua media final eh %.2f\n", numero1, numero2,numero3,numero4,media);



	
} //final do programa
