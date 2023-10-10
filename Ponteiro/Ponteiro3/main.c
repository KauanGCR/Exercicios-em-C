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

    printf("ANTES %d: %d: %d \n", hora, minuto, segundo);

    ConverterTempo(3750, &hora, &minuto, &segundo);

    printf("DEPOIS %d: %d: %d \n", hora, minuto, segundo);

    return 0;
}
