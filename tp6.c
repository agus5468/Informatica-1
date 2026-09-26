
#include <stdio.h>

#define PI 3.14

double calcularAreaRectangulo(double longitud, double altura);
double calcularPerimetroRectangulo(double longitud, double altura);
double calcularAreaCirculo(double radio);
double calcularPerimetroCirculo(double radio);
void imprimirResultados(double area, double perimetro);

int main(void)
{
    int opcion;
    double longitud, altura, radio;
    double area, perimetro;
    do
    {
        printf("Ingrese la figura que desea calcular (1: rectangulo, 2: circulo): ");
        scanf("%d", &opcion);
        if (opcion != 1 && opcion != 2)
        {
            printf("Opcion incorrecta. Intente nuevamente.\n");
        }
    } while (opcion != 1 && opcion != 2);
    if (opcion == 1)
    {
        printf("Opcion de rectangulo seleccionada\n");
        printf("Ingrese la longitud del rectangulo: ");
        scanf("%lf", &longitud);
        printf("Ingrese la altura del rectangulo: ");
        scanf("%lf", &altura);
        area = calcularAreaRectangulo(longitud, altura);
        perimetro = calcularPerimetroRectangulo(longitud, altura);
        imprimirResultados(area, perimetro);
    }
    else
    {
        printf("Opcion de circulo seleccionada\n");
        printf("Ingrese el radio del circulo: ");
        scanf("%lf", &radio);
        area = calcularAreaCirculo(radio);
        perimetro = calcularPerimetroCirculo(radio);
        imprimirResultados(area, perimetro);
    }
    return 0;
}

double calcularAreaRectangulo(double longitud, double altura)
{
    return longitud * altura;
}

double calcularPerimetroRectangulo(double longitud, double altura)
{
    return 2 * (longitud + altura);
}

double calcularAreaCirculo(double radio)
{
    return PI * radio * radio;
}

double calcularPerimetroCirculo(double radio)
{
    return 2 * PI * radio;
}

void imprimirResultados(double area, double perimetro)
{
    printf("El area es: %.2f\n", area);
    printf("El perimetro es: %.2f\n", perimetro);
}
