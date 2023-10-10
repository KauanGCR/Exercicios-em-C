// 05) Escreva um programa que retorne o número do quadrante (1,2,3 ou 4) através de uma função chamada VERIFICA_QUADRANTE, que deve receber um valor para x e um valor para y. 

#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int VerificaQuadrante(float x, float y){

    int quadrante;

    if(x > 0 && y > 0){
        quadrante = 1;
    }
    else if(x > 0 && y < 0){
        quadrante = 2;
    }
    else if(x < 0 && y < 0){
        quadrante = 3;
    }
    else if(x > 0 && y < 0){
        quadrante = 4;
    }
    else {
        quadrante = 0;
    }
    return quadrante;

}

int main (){
float x, y;
int quad;

printf("Digite x: ");
scanf("%f", &x);

printf("Digite y: ");
scanf("%f", &y);

quad = VerificaQuadrante(x, y);

printf(quad);
return 0;
}
