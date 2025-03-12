#include "stdio.h"

int main(void) {
    float altura;
    float peso;
    
    printf("Digite sua altura: ");
    scanf("%f", &altura);
    
    printf("Digite seu peso: ");
    scanf("%f", &peso);
    
    float imc = peso / (altura * altura);
    
    printf("IMC: %.2f\n", imc);
    
    if (imc>24.9) {
        printf("Fora do padrão");
        return 0;
    } if (imc<18.5) {
        printf("Fora do padrão");
        return 0;
    } else {
        printf("Dentro do padrão");
        return 0;
    } return 0;
}