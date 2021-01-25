#include<stdio.h>
 #include<stdlib.h>
 #include<math.h>
 #include<locale.h>
 
 /*
Exercício 57 - Ler uma velocidade em km/h (quilômetros por hora) e apresentá-la
convertida em m/s (metros por segundo). A fórmula de conversão é: M = K/3.6, sendo K
a velocidade em km/h e M em m/s.
*/ 
 main(){
	setlocale(LC_ALL, "Portuguese");
	float quilometros, metros;
	
	printf("Informe a velocidade em km/h (quilômetros por hora)\n");
    scanf("%f",&quilometros);
     metros = quilometros/3.6;
    printf("A velocidade em metros por segundo é: %f\n",metros);

}


 


