 #include<stdio.h>
 #include<stdlib.h>
 #include<math.h>
 #include<locale.h>
 #include <conio.h>
 
 main(){
	setlocale(LC_ALL, "Portuguese");
 	
 	int mes;
 	 
 	printf ("Digite o mês: \n\n01-Janeiro, \n02-Fevereiro, \n03-Março, \n04-Abril, \n05-Outros\n");
 	scanf("%d", &mes);  
 	
 	switch (mes)
 	{
 		case 1:
 			printf("Você escolheu o mês 01-Janeiro");
 			break;
 			
 		case 2: 
		 	printf("Você escolheu o mês 02-Fevereiro");
			break;
		
		case 3:
			printf("Você escolheu o mês 03-Março");
			break;
			
		case 4:
			printf("Você escolheu o mês 04-Abril");
			break;
		case 5:
			printf("Você escolheu o mês 05-Outros");
			break;
		
		default: 
			printf("Valor inválido!");
					 	
	}
	 	getch();
	 	return 0;
	 	 
 }  
 
