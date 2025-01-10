//
// Created by tellox on 09/01/2025.
//
#include <stdio.h>
#include <string.h>


int isPalindrome(char* cadena) {
    int inicio = 0, final = strlen(cadena) - 1;
    while (inicio <= final) {
        if (cadena[inicio++] != cadena[final--])
            return 0;
        inicio++;
        final--;
    }
    return 1;

}

void getInput(char* cadena) {

    cadena [100];
    printf("Ingrese una cadena de carcateres\n");
    scanf("%s", cadena);

    if(isPalindrome(cadena)) {
        printf("la cadena de caracteres es un palindromo");
    }else {
            printf("la cadena de caracteres no es un palindromo");
        }

    }




int main(){
    char cadena [100];
    getInput(cadena);
    if(isPalindrome(cadena)) {


    }


    return 0;
}