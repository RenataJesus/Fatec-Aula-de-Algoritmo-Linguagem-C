#include<stdio.h>
 #include<stdlib.h>
 #include<math.h>
 #include<locale.h>
 
 /*
Exercício 53 - Leia um valor inteiro em segundos, e depois mostrá-lo em horas, minutos
e segundos.
*/ 
 main(){
	setlocale(LC_ALL, "Portuguese");
	int segundo, minuto, hora;
	
	printf("Informe os segundos\n");
    scanf("%d",&segundo);
    minuto=segundo/60;
    hora=minuto/60;
    printf("As horas são: %d\n Os minitos são: %d\n Os segundos são: %d\n",hora,minuto,segundo);

}


 


