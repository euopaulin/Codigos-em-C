#include <stdio.h>

int main ()
{
	int dia;
	printf("Digite o numero correspondente ao dia da semana: ");
	scanf("%d",&dia);
	
	switch (dia) 
	{
		case 1:
			printf("O dia eh domingo \n");
			break;
		case 2:
			printf("O dia eh segunda feira \n");
			break;
		case 3:
			printf("O dia eh terça feira \n");
			break;
		case 4:
			printf("O dia eh quarta feira \n");
			break;
		case 5:
			printf("O dia eh quinta feira \n");
			break;
		case 6:
			printf("O dia eh sexta feira \n");
			break;
		case 7:
			printf("O dia eh sabado \n");
			break;
		default:
			printf("Numero invalido! Por favor, digite um numero entre 1 e 7. ");
			break;
	}
return 0;	
}
