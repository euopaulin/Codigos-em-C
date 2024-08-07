#include <stdio.h>

int main()
{
	int liber,respo1,mund, respo2;
	printf("Salve torcedor tricolor! Me diga, quantas libertadores o tricolor possui? \n");
	scanf("%d", &liber);
	respo1 = liber;
		if(respo1==3)
		{
			printf("Eh isso ai torcedor! O trikas ja foi tres vezes campeao da america! \n");
		}
		else
		{
			printf("Que pena, torcedor... Voce errou, o tricolor foi campeao tres vezes! \n");
		}
	printf("Agora me diga, quantas vezes o trikas ja conquistou o mundo? \n");
	scanf("%d", &mund);
	respo2 = mund;
		if(respo2==3)
		{
			printf("Voce acertou! \n");
		}
		else
		{
			printf("Voce errou! \n");
		}
	return 0;
}
