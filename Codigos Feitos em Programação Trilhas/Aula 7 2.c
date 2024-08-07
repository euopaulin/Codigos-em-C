include <stdio.h>
#define IMPOSTO 15

int main ()
{
	float valordoproduto, valortotal;
	const float frete=10;
	printf("Indique o valor do produto: \n");
	scanf("%f", &valordoproduto);
	
	valortotal=frete+valordoproduto+IMPOSTO;
	printf("O valor total do produto, imposto e entrega eh: %l.f", valortotal);
return 0;
}
