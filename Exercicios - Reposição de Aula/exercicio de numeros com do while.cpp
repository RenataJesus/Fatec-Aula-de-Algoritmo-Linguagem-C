#include<stdio.h>
 #include<stdlib.h>
 #include<math.h>
 #include<locale.h>
 
 main(){
	setlocale(LC_ALL, "Portuguese");
 
 int number1, number2;
 
 printf("digite um número: ");
 scanf("%d", &number1);
 printf("digite um número: ");
 scanf("%d", &number2);
 
 if(number1>number2){
 	int aux= number1;
 	number1 = number2;
 	number2 = aux;
 	
 }
 do{ 
    number1++;
 	printf("%d -", number1);
 	
 }while(number1 <(number2-1));
 
 
 }
