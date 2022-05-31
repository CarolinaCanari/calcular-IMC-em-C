#include<stdio.h>
void main() {
    float altura, peso, imc;
    printf("Etre com a sua altura e seu peso:\n");
    scanf("%f %f", &altura, &peso);
    imc = (peso/altura)/altura;
    printf("Seu IMC vale %f\n", imc);
}