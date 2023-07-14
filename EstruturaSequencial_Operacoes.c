#include <stdio.h>
int main(){
    int A, B, soma, subt, mult, divs;

    printf("Digite o primeiro valor:\n");
    scanf("%d", &A);//%d tipo numero, registrar na mémoria
    printf("Digite o segundo número:\n");
    scanf("%d",&B);

    soma = A + B;
    subt = A - B;
    mult = A * B;
    divs = A / B;

    printf("Resultado:\n");
    printf("Soma: %d.\n",soma);
    printf("subt: %d.\n",subt);
    printf("mult: %d.\n",mult);
    printf("divs: %d.\n",divs);
}
