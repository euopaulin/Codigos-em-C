#include <stdio.h>

// Este é um código para simular uma situação onde a IA de um carro automatizado irá andar na velocidade determinada pela via.
int main() 
{
    // Declaração das variáveis: nome do usuário, veloMax (velocidade máxima que o veículo pode andar)
    // e veloMin (velocidade mínima).
    char nome[30];
    int veloMax, veloMin;

    printf("Ola, usuario! Eu sou a IA do seu veículo e irei fazer o que for necessário para garantir sua segurança e conforto! \n");
    printf("Antes de comecarmos, por favor diga seu nome: \n");
    scanf("%s", nome);

    printf("Ok, perfeito, %s. Agora vamos comecar.\n", nome);
    printf("Caro %s, estamos andando em uma via com velocidade maxima de 70km/h e minima de 20km/h.Para sua seguranca nao iremos passar essa velocidade.\n", nome);

    veloMax = 70;
    veloMin = 20;

    // Aqui está a simulação do usuário ultrapassando o limite de velocidade.
    printf("Caro %s, se voce continuar ultrapassando o limite de velocidade terei que reduzir para a sua seguranca! \n", nome);

    // Simulação: usuário ultrapassando a velocidade máxima.
    int userMaxSpeed = 100;

    // Verifica se a velocidade ultrapassa o limite permitido e ajusta.
    	if (userMaxSpeed > veloMax)
		{
        printf("Me desculpe, %s. Mas tive que reduzir a velocidade para menos de 70km/h! \n", nome);
        userMaxSpeed = veloMax;
    	} 
		else 
		{
        printf("Esta tudo sob controle! \n");
    	}
    	
    //Usuario continua insistindo em tomar o controle do veiculo e agora está andando na velocidade minima da via.
    int userMinSpeed = 10;
    
    //Essa condição agora irá repertir o mesmo da anterior, porém agora é para corrigir a velocidade para a minima da via.
		if (userMinSpeed < 20)
		{
			printf("Me desculpe, %s. Mas tive que aumentar a velocidade para a minima da via! \n",nome);
			userMinSpeed = veloMin;
		}
		else
		{
			printf("Está tudo sob controle! \n");
		}
    return 0;
}
