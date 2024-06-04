#include <stdio.h>

// Nessa aula estudei fun��es e parametros
//Uma fun��o void � uma fun��o que n�o me dara retorno, ela serve para eu chamar posteriormente dentro da main.
void digaOla() 
{
	printf("Ola \n");
}

void sayhello()
{
	printf("Hello! \n");
}

void soma()
{
	printf("Soma: %d\n", 3+2);	
}	

void subtrair()
{
	printf("Subtrair: %d\n", 3-2);
}
// Nessa fun��o abaixo coloquei um parametro dentro dos parenteses, dessa forma estou dando uma ordem que posteriormente dentro da main terei que informar.

void digaola2(char nome[50])
{
	printf("Ola %s\n", nome);
}

void soma2(float numero1, float numero2)
{
	printf("Soma2: %.2f\n", numero1+numero2);
}

int pegaSoma(int numero1, int numero2)
{
	return numero1+numero2;
}

void imprimirmensagem ()
{
	printf("Ola, mundo! \n");
}

int soma3(int numero1, int numero2)
{
	return numero1+numero2;
}

void imprimirnumero(int numero1)
{
	printf("%d \n", numero1);
}

int multiplicador (int numero1, int numero2)
{
	return (numero1*numero2);
}

int ehpositivo (int n)
{
	if (n>0)
	{
		return 1;
	}
	else
	{
		return 0;
	}
}

void imprimirstring (char nome[50])
{
	printf("Nome: %s", nome);
}

int quadrado(int n)
{
	return n*n;
}

int main()
{
	imprimirmensagem();
	
	int result = soma3(10,10);
	printf("Soma: %d \n", result);
	
	imprimirnumero(1000);
	
	int result2 = multiplicador(9,9);
	printf("Multiplicacao: %d \n", result2);
	
	ehpositivo (9);
	
	imprimirstring ("Linguagem C \n");
	
	int result3 = ehpositivo(3);
	printf("Retorno: %d \n", result3);
	
	int result4 = quadrado(3);
	printf("Quadrado: %d \n", result4);
	return 0;
}
