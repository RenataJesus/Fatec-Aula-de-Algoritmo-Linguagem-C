#include<stdio.h>
 #include<stdlib.h>
 #include<math.h>
 #include<locale.h>
 
 /*
Exerc�cio 53 - Leia um valor inteiro em segundos, e depois mostr�-lo em horas, minutos
e segundos.
*/ 
 main(){
	setlocale(LC_ALL, "Portuguese");
	int segundo, minuto, hora;
	
	printf("Informe os segundos\n");
    scanf("%d",&segundo);
    minuto=segundo/60;
    hora=minuto/60;
    printf("As horas s�o: %d\n Os minitos s�o: %d\n Os segundos s�o: %d\n",hora,minuto,segundo);

}


 


