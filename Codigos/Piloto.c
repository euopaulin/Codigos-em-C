#include <stdio.h>
#include <locale.h>

//Este eh um codigo para simular uma situacao onde a IA de um carro automatizado ira andar na velocidade determinada pela via
int main() 
{
	setlocale(LC_ALL, "Portuguese");
 	//Declaracao das variaveis: nome do usuario, veloMax (velocidade maxima que o veiculo pode andar)
    //e veloMin (velocidade minima).
 char nome[30];
    int veloMax, veloMin;

    printf("Ola, usuario! Eu sou a IA do seu veiculo e irei fazer o que for necessario para garantir sua seguranca e conforto! \n");
    printf("Antes de comecarmos, por favor diga seu nome: \n");
    scanf("%s", nome);

    printf("Ok, perfeito, %s. Agora vamos comecar.\n", nome);
    printf("Caro %s, estamos andando em uma via com velocidade maxima de 70km/h e minima de 20km/h.Para sua seguranca nao iremos passar essa velocidade.\n", nome);

    veloMax = 70;
    veloMin = 20;

    //Aqui esta a simulacao do usuario ultrapassando o limite de velocidade.
    printf("Caro %s, se voce continuar ultrapassando o limite de velocidade terei que reduzir para a sua seguranca! \n", nome);

    //Simulacao: usuario ultrapassando a velocidade maxima.
    int userMaxSpeed = 100;

    //Verifica se a velocidade ultrapassa o limite permitido e ajusta.
    	if (userMaxSpeed > veloMax)
		{
        printf("Me desculpe, %s. Mas tive que reduzir a velocidade para menos de 70km/h! \n", nome);
        userMaxSpeed = veloMax;
    	} 
		else 
		{
        printf("Esta tudo sob controle! \n");
    	}
    	
    //Usuario continua insistindo em tomar o controle do veiculo e agora esta andando na velocidade minima da via.
    int userMinSpeed = 10;
    
    //Essa condicao agora ira repertir o mesmo da anterior, porem agora eh para corrigir a velocidade para a minima da via.
		if (userMinSpeed < 20)
		{
			printf("Me desculpe, %s. Mas tive que aumentar a velocidade para a minima da via! \n",nome);
			userMinSpeed = veloMin;
		}
		else
		{
			printf("Esta tudo sob controle! \n");
		}
    return 0;
}
    
    //Agora irei fazer com que a IA faça um calcular quanto tempo o veiculo irá percorrer um trajeto de 30km em um velocidaede costante de 60km.
    int beta ()
{
    double distancia=150.7,velocidade=72.4;
    printf("Como pranejado, estamos viajando para Goianaia e a distancia até lá é de: %lf", distancia);
}