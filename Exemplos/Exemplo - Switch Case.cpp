 #include<stdio.h>
 #include<stdlib.h>
 #include<math.h>
 #include<locale.h>
 #include <conio.h>
 
 main(){
	setlocale(LC_ALL, "Portuguese");
 	
 	int mes;
 	 
 	printf ("Digite o m�s: \n\n01-Janeiro, \n02-Fevereiro, \n03-Mar�o, \n04-Abril, \n05-Outros\n");
 	scanf("%d", &mes);  
 	
 	switch (mes)
 	{
 		case 1:
 			printf("Voc� escolheu o m�s 01-Janeiro");
 			break;
 			
 		case 2: 
		 	printf("Voc� escolheu o m�s 02-Fevereiro");
			break;
		
		case 3:
			printf("Voc� escolheu o m�s 03-Mar�o");
			break;
			
		case 4:
			printf("Voc� escolheu o m�s 04-Abril");
			break;
		case 5:
			printf("Voc� escolheu o m�s 05-Outros");
			break;
		
		default: 
			printf("Valor inv�lido!");
					 	
	}
	 	getch();
	 	return 0;
	 	 
 }  
 
