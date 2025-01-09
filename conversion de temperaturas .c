//
// Created by usuario on 08/01/2025.
//
#include<stdio.h>

float a, temp, resultado;

float celsiusToFahrenheit(float celsius, float cto){
    cto = celsius * 9/5 + 32;
    printf("Temperatura de Celsius: %f\n", celsius);
    scanf("%d", &celsius);
    printf("Temperatura de Fahrenheit: %f\n", cto);
    return cto;


}

float fahrenheitToCelsius(float fahrenheit, float ftc){
    ftc = fahrenheit / 9 + 32;
    printf("Temperatura fahrenheit: %f\n",fahrenheit);
    scanf("%f", &fahrenheit);
    printf("Temperatura en celsius : %f\n", ftc);
    return ftc;



}

float celsiusToKelvin(float celcius, float ctk){
    ctk= celcius+273.15;
    printf("Temperatura en Celsius: %f\n", celcius);
    scanf("%f", &celcius);
    printf("Temperatura de Kelvin: %f\n", ctk);
    return ctk;


}


void displayMenu() {
    switch(a) {
        case 1:
            printf("Ingrese la temperatura en Celsius: ");
        scanf("%f", &temp);
        resultado = celsiusToFahrenheit(temp);
        break;
        case 2:
            printf("Ingrese la temperatura en Fahrenheit: ");
        scanf("%f", &temp);
        resultado = fahrenheitToCelsius(temp);
        break;
        case 3:
            printf("Ingrese la temperatura en Celsius: ");
        scanf("%f", &temp);
        resultado = celsiusToKelvin(temp);
        break;
        default:
            printf("Opción no válida, por favor intente de nuevo.\n");
        continue;
    }

}



int main() {

displayMenu();


        return 0;
    }
