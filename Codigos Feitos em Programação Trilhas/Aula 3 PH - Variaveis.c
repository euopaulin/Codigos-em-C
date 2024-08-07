#include <stdio.h>

int main ()
{
	int num1,num2,soma;	
	//Para criar uma variavel
	printf("Digite sua nota N1: \n");
	scanf("%d", &num1);
	//Para pedir entrada do usuario e armazenar o resultado em num1
	printf("Agora digite sua nota N2: \n");
	scanf("%d", &num2);
	soma = num1+num2;
		//Agora vamos analisar essa condição acima
		if (soma/2>=7)
			{
			printf("Voce foi aprovado! ");
			}
		else
			{
			printf("Voce foi reprovado! ");
			}
	return 0;
}
