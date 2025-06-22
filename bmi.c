#include <stdio.h>
#include <stdlib.h>

int main() {
    float peso, altura, bmi;

    do {
        printf("Ingrese el peso en kg: ");
        scanf("%f", &peso);

        if (peso <= 0) {
            printf("Error: el peso debe ser un número positivo.\n");
        }
    } while (peso <= 0);

    do {
        printf("Ingrese la altura en metros: ");
        scanf("%f", &altura);

        if (altura <= 0) {
            printf("Error: la altura debe ser un número positivo.\n");
        }
    } while (altura <= 0);

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

// Enlace a la modificacion del tp5
//https://github.com/ildarraznicolas/bmi/tree/modificaion2

