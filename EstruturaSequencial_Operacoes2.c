 #include <stdio.h>
 
 	int main(){
 		int dado = 10;//dado fornecido
 		printf("Dado antes do incremento: %d.\n", dado);//vale 10
 		
 		dado++;
 		printf("Dado depois do incremento: %d.\n", dado); //dado +1, vale 11
 		
 		dado--;
 		printf("Dado depois do decremento: %d.\n", dado);//vele 10
 		
 		dado +=3;
 		printf("Incremento em 3 unidades: %d.\n", dado);//vale 13
 		
 		dado -=2;
 		printf("Decremento em 2 unidades: %d.\n", dado);//vale 11
 		
 		dado *=10;
 		printf("Depois de multiplicar por 10: %d.\n", dado);//110
	 }
