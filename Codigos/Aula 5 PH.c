#include <stdio.h>
#include <locale.h>

int main()
{
	setlocale(LC_ALL, "Portuguese");
	int numsecret= 5;
	do
	{
		printf("Tente acertar o numero da sorte: ");
		scanf("%d", &numsecret);	
	}	
	while(numsecret!=5);
		{
			printf("Você acertou!");
		}
	return 0;
}
