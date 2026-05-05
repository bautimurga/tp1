#include <stdio.h>

void invertir_cifras(int *p) { //Invierte las 3 cifras
    int temp = *p;
    int invertido = 0;
    while (temp > 0) {
        invertido = (invertido * 10) + (temp % 10); //Toma la última cifra y la agrega
        temp = temp / 10; //Le quita la última cirfra al número
    }
    *p = invertido; //A la variable a la que apunta el puntero le invierte las cifras
}

void dividir_en_dos(int *p) { //Divide en 2 el número inicial
    *p = *p / 2;
}

void sumar_num_cifras(int *p) {
    int temp = *p;
    int suma_cifras = 0;
    while (temp > 0) { //Esta parte del suma las cifras por separado
        suma_cifras = suma_cifras + (temp % 10);
        temp = temp / 10;
    }
    *p = *p + suma_cifras; //Obtengo el número más la suma de sus cifras
}

void procesar_enigma(int *valor_referencia) {
    invertir_cifras(valor_referencia);
    dividir_en_dos(valor_referencia);
    sumar_num_cifras(valor_referencia);
}

int main() {
    int num = 452;
    
    printf("Iniciando depuracion con el valor: %d\n", num);
    
    // Instrucción para el alumno: 
    // Pon un breakpoint aquí (F9) y usa F11 (Step Into) para entrar a cada función.
    procesar_enigma(&num);
    
    printf("Resultado final del enigma: %d\n", num);
    
    return 0;
}