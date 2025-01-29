#include <stdio.h>

float celsiusToFahrenheit(float celsius, float cto) {
    cto = celsius * 9/5 + 32;
    printf("Temperatura de Celsius: %f\n", celsius);
    printf("Temperatura de Fahrenheit: %f\n", cto);
    return cto;
}

float fahrenheitToCelsius(float fahrenheit, float ftc) {
    ftc = (fahrenheit - 32) * 5/9;
    printf("Temperatura de Fahrenheit: %f\n", fahrenheit);
    printf("Temperatura de Celsius: %f\n", ftc);
    return ftc;
}

float celsiusToKelvin(float celcius, float ctk) {
    ctk = celcius + 273.15;
    printf("Temperatura en Celsius: %f\n", celcius);
    printf("Temperatura de Kelvin: %f\n", ctk);
    return ctk;
}

void displayMenu() {
    printf("Selecciona la opción que necesites:\n");
    printf("1. Celsius a Fahrenheit\n");
    printf("2. Fahrenheit a Celsius\n");
    printf("3. Celsius a Kelvin\n");
}

int main() {
    int opcion;
    float temperatura, resultado;

    displayMenu();
    printf("Opción: ");
    scanf("%d", &opcion);

    switch(opcion) {
        case 1:
            printf("Introduce la temperatura en Celsius: ");
        scanf("%f", &temperatura);
        resultado = celsiusToFahrenheit(temperatura, resultado);
        break;

        case 2:
            printf("Introduce la temperatura en Fahrenheit: ");
        scanf("%f", &temperatura);
        resultado = fahrenheitToCelsius(temperatura, resultado);
        break;

        case 3:
            printf("Introduce la temperatura en Celsius: ");
        scanf("%f", &temperatura);
        resultado = celsiusToKelvin(temperatura, resultado);
        break;

        default:
            printf("Opción no válida.\n");
        return 1;
    }

    return 0;
}