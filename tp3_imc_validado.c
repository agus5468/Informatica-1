#include <stdio.h>
//https://github.com/agus5468/Informatica-1.git
void limpiarBufferEntrada(void) {
    int caracter;

    while ((caracter = getchar()) != '\n' && caracter != EOF) {
  
    }
}

int main(void) {
    float peso;
    float altura;
    float bmi;

    /* El peso no puede ser negativo. */
    while (1) {
        printf("Ingrese el peso en kg: ");

        if (scanf("%f", &peso) != 1) {
            printf("Error: debe ingresar un valor numerico.\n");
            limpiarBufferEntrada();
        } else if (peso < 0.0f) {
            printf("Error: el peso no puede ser negativo. Intente nuevamente.\n");
        } else {
            limpiarBufferEntrada();
            break;
        }
    }

    while (1) {
        printf("Ingrese la altura en metros: ");

        if (scanf("%f", &altura) != 1) {
            printf("Error: debe ingresar un valor numerico.\n");
            limpiarBufferEntrada();
        } else if (altura <= 0.0f) {
            printf("Error: la altura debe ser mayor que cero. Intente nuevamente.\n");
        } else {
            limpiarBufferEntrada();
            break;
        }
    }

    bmi = peso / (altura * altura);

    printf("\nSu indice de masa corporal es: %.2f\n\n", bmi);

    printf("    Indice    |  Condicion\n");
    printf("-----------------------------\n");
    printf("    <18.5     |  Bajo peso\n");
    printf(" 18.5 a 24.9  |  Normal\n");
    printf(" 25.0 a 29.9  |  Sobrepeso\n");
    printf("    >=30      |  Obesidad\n");

    return 0;
}
