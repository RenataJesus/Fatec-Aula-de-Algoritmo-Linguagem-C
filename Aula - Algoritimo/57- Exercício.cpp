#include<stdio.h>
 #include<stdlib.h>
 #include<math.h>
 #include<locale.h>
 
 /*
Exerc�cio 57 - Ler uma velocidade em km/h (quil�metros por hora) e apresent�-la
convertida em m/s (metros por segundo). A f�rmula de convers�o �: M = K/3.6, sendo K
a velocidade em km/h e M em m/s.
*/ 
 main(){
	setlocale(LC_ALL, "Portuguese");
	float quilometros, metros;
	
	printf("Informe a velocidade em km/h (quil�metros por hora)\n");
    scanf("%f",&quilometros);
     metros = quilometros/3.6;
    printf("A velocidade em metros por segundo �: %f\n",metros);

}


 


