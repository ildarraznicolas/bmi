#include <stdio.h>
#include <stdlib.h>

int main() {
    float peso, altura, imc;

    printf("Ingrese el peso en kg: ");
    scanf("%f", &peso);

    printf("Ingrese la altura en metros: ");
    scanf("%f", &altura);

    imc = peso / (altura * altura);

    printf("\nSu indice de masa corporal es: %.2f\n\n", imc);

    printf("Categoria     | Rango IMC (kg/m2)\n");
    printf("-------------------------------\n");
    printf("Bajo peso     | <18.5\n");
    printf("Normal        | 18.5 - 24.9\n");
    printf("Sobrepeso     | 25.0 - 29.9\n");
    printf("Obesidad      | >=30\n\n");

    system("pause");
    return 0;
}
