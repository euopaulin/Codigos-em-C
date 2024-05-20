#include <stdio.h>

// Este � um c�digo para simular uma situa��o onde a IA de um carro automatizado ir� andar na velocidade determinada pela via.
int main() 
{
    // Declara��o das vari�veis: nome do usu�rio, veloMax (velocidade m�xima que o ve�culo pode andar)
    // e veloMin (velocidade m�nima).
    char nome[30];
    int veloMax, veloMin;

    printf("Ola, usuario! Eu sou a IA do seu ve�culo e irei fazer o que for necess�rio para garantir sua seguran�a e conforto! \n");
    printf("Antes de comecarmos, por favor diga seu nome: \n");
    scanf("%s", nome);

    printf("Ok, perfeito, %s. Agora vamos comecar.\n", nome);
    printf("Caro %s, estamos andando em uma via com velocidade maxima de 70km/h e minima de 20km/h.Para sua seguranca nao iremos passar essa velocidade.\n", nome);

    veloMax = 70;
    veloMin = 20;

    // Aqui est� a simula��o do usu�rio ultrapassando o limite de velocidade.
    printf("Caro %s, se voce continuar ultrapassando o limite de velocidade terei que reduzir para a sua seguranca! \n", nome);

    // Simula��o: usu�rio ultrapassando a velocidade m�xima.
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
    	
    //Usuario continua insistindo em tomar o controle do veiculo e agora est� andando na velocidade minima da via.
    int userMinSpeed = 10;
    
    //Essa condi��o agora ir� repertir o mesmo da anterior, por�m agora � para corrigir a velocidade para a minima da via.
		if (userMinSpeed < 20)
		{
			printf("Me desculpe, %s. Mas tive que aumentar a velocidade para a minima da via! \n",nome);
			userMinSpeed = veloMin;
		}
		else
		{
			printf("Est� tudo sob controle! \n");
		}
    return 0;
}
