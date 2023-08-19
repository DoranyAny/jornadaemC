#include <stdio.h>
//Estruturas de Dados Unidimensionais - Vetores

int main()
{	
	int v[5] = {10,20,30,40,50};
	//declarar vetor e inicializar 
	
	int i ; 
	float s = 0;
	
	for( i =0; i<5; i++){ //laço de repetição
		//
		s += v[i];
	}
	
	
	
	
	printf("Resultado: %f\n",s/5);
	
	
}
