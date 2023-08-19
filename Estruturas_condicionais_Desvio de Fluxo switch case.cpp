#include <stdio.h>

// ESTRUTURA CONDICIONAL - DESVIO DE FLUXO - IF E ELSE


	int main(){
		float m; //declarar variavel
		
		printf("Insira a nota: \n");
		scanf("%f",&m);
		
		if(m <= 7.0) 
		{
			printf("Reprovado!\n");
		} else {
			printf("Aprovado!\n");
		}
		
		
	}
	
		
//Se a condição for verdadeira
//Bloco do IF é executado  >  Bloco do ELSE é ignorado

//Caso contrário (condição falsa)
// Bloco do IF é ignorado  >  Bloco do ELSE é executado

