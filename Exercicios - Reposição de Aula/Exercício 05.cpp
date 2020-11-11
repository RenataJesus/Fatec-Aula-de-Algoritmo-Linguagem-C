 #include<stdio.h>
 #include<stdlib.h>
 #include<math.h>
 #include<locale.h>
 
 main(){
	setlocale(LC_ALL, "Portuguese");
 	 
 	 int number1, number2, number3, maior, menor;
 	 
 	 printf("Digite o primeiro número: ");
 	 scanf("%d",&number1);
 	 
 	 printf("\nDigite o segundo número: ");
 	 scanf("%d",&number2);
 	 
 	 printf("\nDigite o terceiro número: ");
 	 scanf("%d", &number3);
 	 
 	 if(number1 <=number2&& number2<=number3){
 	 	//menor = num1
 	 	menor=1;
	  }else if (number2 <= number1&& number2 <= number3){
	  	menor=2;
	  }else{
	  	menor=3;
	  }
	  
	  if(menor==1 && maior==2){
	  	printf("%i - %i - %i\n\n", number1, number3, number2);
	  }else if(menor ==1 && maior ==3){
	  		printf("%i - %i - %i\n\n", number1, number2, number3);
	  }else if (menor ==2 && maior==1){
	  		printf("%i - %i - %i\n\n", number3, number2, number1);
	  }else{
	  		printf("%i - %i - %i\n\n", number1, number2, number3);
	  }
	  }
