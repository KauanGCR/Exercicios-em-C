//03) Faça uma função que recebe por parâmetro o tempo de duração de uma fábrica expressa em segundos e retorna também por parâmetro esse tempo em horas, minutos e segundos. 


#include <stdio.h>
#include <stdlib.h>

void ConverterTempo(int totalSeg, int *h, int *m, int *s){

    *h = totalSeg / 3600;
    *m = (totalSeg % 3600) / 60;
    *s = (totalSeg % 3600) % 60;

}

int main()
{
    int hora = 0, minuto = 0, segundo = 0;
    int totalSeg;

    printf("Insira o total de segundos:");
    scanf("%i", &totalSeg);

    printf("ANTES: %d horas, %d minutos e %d segundos. \n", hora, minuto, totalSeg);

    ConverterTempo(totalSeg, &hora, &minuto, &segundo);

    printf("DEPOIS: %d horas, %d minutos e %d segundos. \n", hora, minuto, segundo);

    return 0;
}
