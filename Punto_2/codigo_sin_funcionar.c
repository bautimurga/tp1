#include <stdio.h> //Faltaba incluir la biblioteca "<stdio.h>" para poder usar algunas funciones
// codigo_roto.c

void duplicar_numero(int *numero) { //Declaro que se recibe un puntero
    *numero = *numero * 2;
}

int main() {
    int valor1;
    int valor2;

    printf("Ingrese el primer valor: ");
    scanf("%d", &valor1); //Falta el operador "&" para poder ingresar "valor1"

    printf("Ingrese el segundo valor: ");
    scanf("%d", &valor2);

    int suma = valor1 + valor2; //Fata el ";" en esta sentencia
    printf("La suma es: %d\n", suma);

    duplicar_numero(&valor1); //Agrego "&" para pasar la dirección de memoria del valor1
    printf("El primer valor duplicado es: %d\n", valor1);

    return 0; //Falta ";" para terminar la sentencia del return
}