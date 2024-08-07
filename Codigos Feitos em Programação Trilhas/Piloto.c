#include <stdio.h>
#include <locale.h>
#define IMPOSTO 10

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
		
        //Agora irei fazer com que a IA faca um calculo de quanto tempo o veiculo ira percorrer um trajeto de 150.7km em um velocidaede costante de 72.4km.
    double distancia=150.7, tempo;
    double velocidade;
    	printf("Como pranejado, estamos viajando para Goianaia e a distancia ate la sao de: %1f km. \n", distancia);
    	printf("Agora me diga em quantos KM voce quer que o carro ande?! \n");
    	scanf("%lf", &velocidade);
    	//Agora esse comando � para calcular o tempo em que a viagem ir� demorar, para isso peguei pego a velocidade e dividi pela distancia.
		tempo=velocidade/distancia;
		printf("O tempo que iremos levar ate chegar em Goiania sao de aproximadamente %1f horas. \n", tempo);
	
		//Nessa condi��o agora irei simular o usuario fazendo uma compra enquanto digire. Ele fala isso apensar por comando de voz.
	int produto;
    int frete = 20;
		//Usuario pede para que a IA do veiculo fa�a um pedido para ela e informe qual o valor final do produto
		//Dessa forma a IA pergunta para o usuario qual o pedido que ele quer e serao fornecidas tres opcoes.
    	printf("Caro usuario, qual dessas tres opcoes voce ira pedir? Escolha um dos produtos de 1 a 3, por favor! \n");
    	scanf("%d", &produto);

    switch (produto) {
        case 1:
            printf("O valor final do seu pedido junto com o frete e imposto eh de: %d\n", produto + 15 + frete + IMPOSTO);
            break;
        case 2:
            printf("O valor final do seu pedido junto com o frete e imposto eh de: %d\n", produto + 30 + frete + IMPOSTO);
            break;
        case 3:
            printf("O valor final do seu pedido junto com o frete e imposto eh de: %d\n", produto + 128 + frete + IMPOSTO);
            break;
        default:
            printf("Por favor, digite um numero valido!\n");
            break;
    }
    return 0;
}
