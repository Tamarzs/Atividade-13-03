#include "stdio.h"

int main() {
    float nota;
    
    printf("Digite a nota do aluno: ");
    scanf("%f", &nota);
    
    if (nota>=9) {
        printf("Conceito: A");
    } else
    if (nota>=8) {
        printf("Conceito B");
    } else
    if (nota>=7) {
        printf("Conceito: C");
    } else
    if (nota>=6) {
        printf("Conceito: D");
    } else {
        printf ("Conceito: F");
    }
    return 0;
}