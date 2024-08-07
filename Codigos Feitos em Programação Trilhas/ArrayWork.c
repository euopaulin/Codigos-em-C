#include <stdio.h>
#include <stdlib.h>

int main ()
{
	int idades [] = {20, 19, 17, 24, 25, 28, 18, 18, 18, 21};
	int tamanhoArray = (int) (sizeof(idades)/4);
	
	for (int i = 0; i < tamanhoArray; i++){
		printf("%d\n", &idades[i]);
	}
	printf ("\n");
	for (int i=0; i<10; i++){
		if (numero[i]%2 !=0){
			printf("%d", numero[i]);
		}
	}
}
