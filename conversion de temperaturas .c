//
// Created by usuario on 08/01/2025.
//
#include<stdio.h>

int a;

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
    printf("Seleccione la opcion que necesites:\n\n1-celcius a fahrenheit\n\n2- fahrenheit a celsius\n\n3-celcius a kelvin");
    scanf("%d",&a);

}



int main() {

celsiusToFahrenheit();


        return 0;
    }
