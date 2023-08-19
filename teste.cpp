#include<stdio.h>

int main()
{
		int x, y, z;
		printf("Por favor, informe três números em sequência:\n");
		scanf("d%",&x);
		scanf("%d",&y);
		scanf("%d",&z);

		if (x>=y && y>z)
		{
		printf("condição satisfeita");
		}
}
