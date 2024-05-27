#include <stdio.h>
#define IMPOSTO 15

int main ()
{
	int codigodoproduto;
	float valortotal, valordoproduto;
	const float frete1 = 10;
	const float frete2 = 20;
	printf("Indique o valor do produto: \n");
	scanf("%f", &valordoproduto);
	printf("Indique o codigo do produto: \n");
	scanf("%d", &codigodoproduto);
	
	switch (codigodoproduto)
	{
		case 1:
			valortotal = valordoproduto+IMPOSTO;
			printf("O valor total do produto e imposto eh: %1.f", valortotal);
			break;
		case 2:
			valortotal=valordoproduto+IMPOSTO+frete1; 
			printf("O valor total do produto, frete e imposto eh: %1.f", valortotal);
			break;
		case 3:
			valortotal=valordoproduto+IMPOSTO+frete2;
			printf("O valor total do produto, frete e imposto eh: %1.f", valortotal);
			break;
		default:
			printf("Numero incorreto, Por favor tente novamente");
			break;
	}
return 0;
}
