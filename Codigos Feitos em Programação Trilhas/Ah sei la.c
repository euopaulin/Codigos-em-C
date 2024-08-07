#include <stdio.h>
#include <unistd.h>

int fatorial(int num)
{
	int result = 1;
	int i;
	for (i = num ; i > 0; i--)
	{
		result *= i;
	}
	return result;
} 

int maior(int n1, int n2, int n3)
{
	if(n1 > n2 && n1 > n3)
	{
		return n1;
	}
	else if (n2 > n1 && n2>n3)
	{
		return n2;
	
	}
		else
	{
		return n3;	
	}
}

int ehprimo(int n)
{
	if(n<=1)
	{
		return 0;
	}
	for (int i=2; i * i <= n; i++)
	{
		if (n%i==0)
		{
			return 0;
		}
	}
	return 1;
}
int main ()
{
	int re = ~maior(6,5,2);
	printf("%d \n", re);
}
