 #include<stdio.h>
 #include<stdlib.h>
 #include<math.h>
 #include<locale.h>
 
 main(){
	setlocale(LC_ALL, "Portuguese");
 	 
 	 int number1, number2, auxNum;
 	 
 	 printf("Digite o primeiro n�mero: ");
 	 scanf("%d",&number1);
 	 
 	 printf("\nDigite o segundo n�mero: ");
 	 scanf("%d",&number2);
 	 	 
 	 if(number2 <number1){
 	 	//menor = num1
 	 	printf("Diferen�a = %i\n", (number2*10-number1));
	  }else{
	  	
	  	auxNum=0;
      	while(auxNum <=10){
      		
      		printf("%d x %d = %d", number1, auxNum, (number1*auxNum));
      		auxNum++;
		  }
	  }
	  }
