#include <stdio.h>
//https://github.com/agus5468/Informatica-1.git
void limpiarBufferEntrada(void) {
    int caracter;

    while ((caracter = getchar()) != '\n' && caracter != EOF) {
    }
}

int main(void) {
    int cantidadEstudiantes;
    int estudiante;
    double calificacion;
    double suma = 0.0;
    double calificacionMasAlta = 0.0;
    double calificacionMasBaja = 0.0;
    double promedio;

    while (1) {
        printf("Ingrese la cantidad de estudiantes a evaluar: ");

        if (scanf("%d", &cantidadEstudiantes) != 1) {
            printf("Error: debe ingresar un numero entero.\n");
            limpiarBufferEntrada();
        } else if (cantidadEstudiantes <= 0) {
            printf("Error: la cantidad de estudiantes debe ser positiva.\n");
        } else {
            limpiarBufferEntrada();
            break;
        }
    }
    for (estudiante = 1; estudiante <= cantidadEstudiantes; estudiante++) {
        while (1) {
            printf("Ingrese la calificacion del estudiante %d (0 a 100): ",
                   estudiante);

            if (scanf("%lf", &calificacion) != 1) {
                printf("Error: debe ingresar un valor numerico.\n");
                limpiarBufferEntrada();
            } else if (calificacion < 0.0 || calificacion > 100.0) {
                printf("Error: la calificacion debe estar entre 0 y 100.\n");
            } else {
                limpiarBufferEntrada();
                break;
            }
        }

        suma += calificacion;
        if (estudiante == 1) {
            calificacionMasAlta = calificacion;
            calificacionMasBaja = calificacion;
        } else {
            if (calificacion > calificacionMasAlta) {
                calificacionMasAlta = calificacion;
            }

            if (calificacion < calificacionMasBaja) {
                calificacionMasBaja = calificacion;
            }
        }
    }

    promedio = suma / cantidadEstudiantes;

    printf("\nResultados:\n");
    printf("Promedio de calificaciones: %.2f\n", promedio);
    printf("Calificacion mas alta: %.2f\n", calificacionMasAlta);
    printf("Calificacion mas baja: %.2f\n", calificacionMasBaja);

    return 0;
}
