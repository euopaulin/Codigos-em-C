#include <stdio.h>
#include <unistd.h>

int main ()
{
	int numeros [5];
	int soma = 0;
	int i;
	
	for(i = 0; i < 5; i++)
	{
		printf("Digite a nota %d \n", i+1);
		scanf("%d", &numeros[i]);
		
		soma += numeros[i];
	}
	printf("A soma dos numeros digitados foram: %d  \n", soma);
}
