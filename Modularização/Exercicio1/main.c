//01) Faça uma função que recebe por parâmetro o raio de uma esfera e calcula o seu volume:v = 4/3.PI .R³

#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int volume(float raio)
{
    float volume;
    volume= 4.0/3.0 * M_PI * pow(raio, 3);
    printf("O volume da esfera eh: %.2f \n", volume);
    return volume;
}

int main()
{
    float vol, raio;

    printf("Insira o valor do raio: \n");
    scanf("%f", &raio);
    printf("\n");

    vol= volume(raio);

}
