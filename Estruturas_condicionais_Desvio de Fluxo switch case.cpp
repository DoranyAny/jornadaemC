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
	
		
//Se a condi��o for verdadeira
//Bloco do IF � executado  >  Bloco do ELSE � ignorado

//Caso contr�rio (condi��o falsa)
// Bloco do IF � ignorado  >  Bloco do ELSE � executado

