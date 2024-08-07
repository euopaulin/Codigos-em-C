#include <stdio.h>

int main()
{
    int candidato1, candidato2, candidato3;

    printf("Quantos votos o candidato 1 teve?\n");
    scanf("%d", &candidato1);

    printf("Quantos votos o candidato 2 teve?\n");
    scanf("%d", &candidato2);

    printf("Quantos votos o candidato 3 teve?\n");
    scanf("%d", &candidato3);

    if (candidato1 > candidato2 && candidato1 > candidato3)
    {
        printf("Candidato 1 é o vencedor\n");
    }
    else if (candidato2 > candidato1 && candidato2 > candidato3)
    {
        printf("Candidato 2 é o vencedor\n");
    }
    else if (candidato3 > candidato1 && candidato3 > candidato2)
    {
        printf("Candidato 3 é o vencedor\n");
    }
    else
    {
        printf("Deu empate! Uma nova rodada deve ser feita\n");
    }

    return 0;
}
