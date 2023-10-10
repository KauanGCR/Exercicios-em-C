#include <stdio.h>
#include <stdlib.h>
#include <math.h>

double calcpesoideal(double h, char sexo){

    double pesoideal;
    if((sexo == 'h') || (sexo == 'H')){
        pesoideal = (72.7 * h) - 58.0;
    }
    else if((sexo) == 'm' || (sexo == 'M')){
        pesoideal = (62.1 * h) - 44.7;
    }
    else {
        printf("\nSexo invalido!! \n");
    }
    return pesoideal;
}

int main(){
    double altura, res;
    char sexo;

    printf("Digite sua altura: \n");
    scanf("%lf", &altura);

    printf("Digite seu sexo: \n");
    fflush(stdin);
    scanf("%c", &sexo);

    res = calcpesoideal(altura, sexo);

    printf("Seu peso ideal eh igual a %lf", res);

    return 0;

}

/*int pesoh(float h)
{
    float imc;
    imc= (72.7 * h) - 58.0;
    printf("Seu peso ideal eh: %.2f", imc);
    return imc;
}

int pesom(float h)
{
    float imc;
    imc= (62.1 * h) - 44.7;
    printf("Seu peso ideal eh: %.2f", imc);
    return imc;
}

int main()
{
    int sexo;
    float h, pesoideal;

    printf("Informe seu sexo: \n");
    printf("Homem(1) e Mulher (2) \n");
    scanf("%i", &sexo);
    printf("\n");

    if(sexo==1)
    {
        printf("Informe sua altura: \n");
        scanf("%f", &h);
        printf("\n");
        pesoideal= pesoh(h);
    }

    else if(sexo==2)
    {
        printf("Informe sua altura: \n");
        scanf("%f", &h);
        printf("\n");
        pesoideal= pesom(h);
    }

    else
    {
        printf("Invalido");
        return 0;
    }

}*/
