#include <stdio.h>

int main ()
{
	char nota;
	printf("Digite sua nota conceito: ");
	scanf("%s",&nota);
	
	switch (nota) 
	{
		case 'A':
			printf("Sua nota foi entre 9 e 10 pontos \n");
			break;
		case 'B':
			printf("Sua nota foi entre 7 e 9 pontos \n");
			break;
		case 'C':
			printf("Sua nota foi entre 5 e 7 pontos \n");
			break;
		case 'D':
			printf("Sua nota foi abaixo de 5 pontos \n");
			break;
		default:
			printf("Conceito invalido! Por favor, digite uma dessas letras: A, B, C ou D");
			break;
	}
return 0;	
}
