#include <stdio.h>
/*e) Declare un puntero en el procedimiento principal que apunte a una variable 
de algún tipo y muestre por pantalla lo siguiente: 
1) El contenido del puntero 
2) La dirección de memoria almacenada por el puntero.  
3) la dirección de memoria de la variable. 
4) la dirección  de memoria del puntero. 
5) el tamaño de memoria utilizado por esa variable usando la función 
sizeof() */ 

int main () {
    //Creo una variable y un puntero que apunta a esa variable
    int num=10, tam_mem;
    int *p_num=&num;

    printf("Contenido del puntero: %d\n", *p_num);
    printf("Dirección de memoria almacenada por el puntero: %p\n", p_num);
    printf("Dirección de memoria de la variable: %p\n", &num);
    printf("Dirección  de memoria del puntero: %p\n", &p_num);
    tam_mem=sizeof(num);
    printf("Tamaño de memoria utilizado por la variable: %d bytes\n", tam_mem);

    return 0;
}