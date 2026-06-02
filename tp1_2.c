#include <stdio.h>

//a)
int cuadradoNum(int num) {
    //Recibo un valor cómo parámetro y lo devuelvo multiplicado por sí mismo (su cuadrado)
    return num*num;
}

//b) y c)
void cuadradoNumDir(int *p_n) {
    //Recibo una dirección de memoria cómo parámetro y lo modifico lo que se encuentre en esa dirección para que sea el cuadrado de ese valor
    printf("Su dirección de memoria es: %p\n", p_n);
    printf("Su valor es: %d\n", *p_n);
    *p_n=(*p_n)*(*p_n);
}

//d)
void invertir(int *a, int *b) {
    int aux=*b;
    *b=*a;
    *a=aux;
}

//e)
void ordenar(int *a, int *b) {
    if (*a<*b)
    {
        printf("El menor es a y su valor es: %d\n", *a);
        printf("El mayor es b y su valor es: %d\n___________________\n\n", *b);
    } else {
        if (*b<*a) {
            printf("El menor es b y su valor es: %d\n", *b);
            printf("El mayor es a y su valor es: %d\n___________________\n\n", *a);
        }
        else {
        printf("Ambas variables poseen el mismo valor...\n___________________\n\n");
        }
    }
}

int main() {
    //Declaro variables para el número, para su cuadrado y aux para guardar su valor original
    int n, cuadrado, aux, a, b;
    printf("Ingrese un entero y va a obtener su cuadrado: ");
    scanf("%d", &n);
    aux=n;

    //Cuadrado del número enviando el valor de la variable cómo parámetro
    cuadrado=cuadradoNum(n);
    printf("\nCuadrado del número enviando el valor de la variable cómo parámetro:\n\n");
    printf("Resultado=%d\n___________________\n", cuadrado);

    //Cuadrado del número enviando su dirección de memoria cómo parámetro
    printf("\nCuadrado del número enviando su dirección de memoria cómo parámetro:\n\n");
    cuadradoNumDir(&n);
    printf("Resultado=%d\n___________________\n\n", n);

    //Ingreso los valores a ser tratados por teclado
    printf("Ingrese el valor de a: ");
    scanf("%d", &a);
    printf("Ingrese el valor de b: ");
    scanf("%d", &b);
    //Muestro los valores originales y luego los nuevos valores invertidos
    printf("\nValor de a=%d\n", a);
    printf("Valor de b=%d\n\n", b);
    invertir(&a, &b);
    printf("Nuevo valor de a=%d\n", a);
    printf("Nuevo valor de b=%d\n___________________\n\n", b);
    
    //Voy a usar los nuevos valores de a y b para devolverlos de forma ordenada
    printf("A continuación se va a determinar el mayor entre a y b:\n");
    ordenar(&a, &b);
}