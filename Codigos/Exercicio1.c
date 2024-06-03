#include <stdio.h>

int soma(int n1, int n2)
{
	return n1+n2;
}

int fatorial(int num)
{
	return num*num*num;
}

int main ()
{
	int result1 = soma(2,5);
	printf("A soma eh: %d \n", result1);
	int result2 = fatorial(3,3,3);
	printf("A fatorial de 3 eh: \n", result2);
	return 0;
}
