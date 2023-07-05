#include <stdio.h>
#include <stdlib.h>

int main()
{
    char vetorA[10];
    int i, j;
    char troca; //troca recebe tipo char, para entrada de caractere
    
    for (i = 0; i < 10; i++)
    {
        printf("Digite o %d elemento: ", i);
        scanf(" %c", &vetorA[i]); //d% para c%, leitura de caractere
        fflush(stdin);
    }
    
    for (i = 0; i < 9; i++)
    {
        for (j = i + 1; j < 10; j++)
        {
            if (vetorA[i] > vetorA[j])
            {
                troca = vetorA[i];
                vetorA[i] = vetorA[j];
                vetorA[j] = troca;
            }
        }
    }
    
    printf("\nVETOR ORDENADO: \n");
    for (i = 0; i < 10; i++)
    {
        printf("%c - ", vetorA[i]); //d% para c% leitura de caractere
    }
    
    return 0;
}

