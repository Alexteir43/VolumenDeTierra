#include <stdio.h>

int main(void) {
    double area, base, volumen;
    const double fraccion = 1.333;
    const double PI = 3.14159265358979323846;

    printf("Ingresa el total del área");
    scanf("%lf", &area);

    printf("Ingresa el total de base");
    scanf("%lf", &base);

    volumen = area * area * fraccion * base * PI;
    printf("El volumen total es: %lf", volumen);
    return 0;
}
