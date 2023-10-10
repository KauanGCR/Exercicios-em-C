#include <stdio.h>
#include <stdlib.h>
#include <math.h>


int idade(anos, meses, dias)
{
    int soma;
    soma = (anos*365) + (meses*30) + dias;
    printf("Voce tem %i dias de vida", soma);
    return soma;
}

int main()
{

    int a, m, d, total;

    printf("Digite sua idade em anos, meses e dias: \n");
    scanf("%i %i %i", &a, &m, &d);
    printf("\n");

    total = idade(a, m, d);

}
