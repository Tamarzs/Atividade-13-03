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
    
    if (imc < 18.5) {
        printf("Baixo peso");
    } else if (imc < 25) {
        printf("Intervalo normal");
    } else if (imc < 30) {
        printf("Sobrepeso");
    } else if (imc < 35) {
        printf("Obesidade classe I");
    } else if (imc < 40) {
        printf("Obesidade classe II");
    } else {
        printf("Obesidade classe III");
    } return 0;
}
    