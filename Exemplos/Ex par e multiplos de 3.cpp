#include<stdio.h>
 #include<stdlib.h>
 #include<math.h>
 #include<locale.h>
 
 /*

 */ 
 main(){
	setlocale(LC_ALL, "Portuguese");

 
for(int n = 1; n<=100; n++){

 	if (n%2==0 && n% 3 == 0){
 	printf("%d ",n);
 	
 }

 }

/*

int n=0 
	while (n<= 1000){
	n++;
	if( n%2==0 && n%3==0){
	printf("%d ",n);
	}
	}
/*

int n =0;

 do{


 n++;


 if( n%2==0 && n%3==0){

 printf("%i ", n);

 }


 }while(n <= 1000);


system("pause");

 */
}
