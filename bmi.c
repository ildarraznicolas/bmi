#include <stdio.h>
#include <stdlib.h>

int main() {
    float peso, altura, bmi;

    printf("Ingrese el peso en kg: ");
    scanf("%f", &peso);

    printf("Ingrese la altura en metros: ");
    scanf("%f", &altura);

    bmi = peso / (altura * altura);

    printf("\nSu indice de masa corporal es: %.2f\n\n", bmi);

    printf("Categoria     | Rango BMI (kg/m2)\n");
    printf("-------------------------------\n");
    printf("Bajo peso     | <18.5\n");
    printf("Normal        | 18.5 - 24.9\n");
    printf("Sobrepeso     | 25.0 - 29.9\n");
    printf("Obesidad      | >=30\n\n");

    printf("Su condición es: ");
    if (bmi < 18.5) {
        printf("Bajo peso\n");
    } else if (bmi < 25.0) {
        printf("Normal\n");
    } else if (bmi < 30.0) {
        printf("Sobrepeso\n");
    } else {
        printf("Obesidad\n");
    }

    system("pause");
    return 0;
}
