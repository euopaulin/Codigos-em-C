#include <stdio.h>
#include <unistd.h>

int main ()
{
	int numeros[5];
	
	numeros[0] = 35;
	numeros[1] = 39;
	numeros[2] = 50;
	numeros[3] = 42;
	numeros[4] = 12;
	
	printf("%d \n", numeros[0]);
	sleep(2);
	printf("%d \n", numeros[1]);
	sleep(2);
	printf("%d \n", numeros[2]);
	sleep(2);
	printf("%d \n", numeros[3]);
	sleep(2);
	printf("%d \n", numeros[4]);
	sleep(2);
	
}
