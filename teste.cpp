#include<stdio.h>

int main()
{
		int x, y, z;
		printf("Por favor, informe tr�s n�meros em sequ�ncia:\n");
		scanf("d%",&x);
		scanf("%d",&y);
		scanf("%d",&z);

		if (x>=y && y>z)
		{
		printf("condi��o satisfeita");
		}
}
