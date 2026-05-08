# tp1

## Resolución TP1

Este directorio tiene el fin de resolver los ejercicios propuestos en el TP1 de la asignatura "Taller de Lenguajes I".

Debajo se van a encontrar resueltos únicamente los puntos que se solicitan resolver en este mismo archivo, el resto de las exigencias se encuentran resueltas en la carpeta del directorio de nombre "tp1".

### 2.a)Archivo ".gitignore"

**¿Que es?** El archivo .gitignore es un archivo de texto plano que sirve para indicarle a Git qué archivos o directorios específicos de un proyecto no deben ser rastreados, controlados ni subidos a un repositorio.

**¿Por que es conveniente incluirlo?** Una de las principales razones es que cuando compilamos un archivo.c este crea un ejecutable el cuál es innecesario subirlo, ya que ocupa espacio, que no aportan valor que el código fuente si lo aporta, además evita subir por accidente algún archivo confidencial o con algún token de acceso que tengamos presente en nuestro repositorio local y además algunos IDE como Visual Studio Code crean carpetas .vscode las cuales únicamente tienen información de mi configuración personal en Visual Studio y tampoco aportan valor a nuestro trabajo.

**¿Cómo se debe hacer?** Lo ideal es crearlo justo luego de crear nuestro directorio con git init o antes del primer commit del  trabajo. Ya que si git ya registró mi archivo y empezó a trackearlo, cuando lo agregue a git ignore este seguirá rastreando dicho archivo y la solución a esto es compleja, teniendo que usar comandos para borrar la caché.

**¿Cómo configuraría el archivo .gitignore?** Primero que nada se tiene que utilizar ignorando un archivo por línea, siguiendo los siguientes preceptos:
-"secreto.txt", para ignorar un archivo en específico.
-"carpeta/", para ignorar una carpeta en específico.
-"\*.exe", para ignorar un tipo archivo.

### 3.f)Código "codigo_misterio.c"

**Operaciones matemáticas que suceden en el código:** El código primero inicializa una variable del tipo entero llamada num con el valor 452. Luego la función "procesar" recibe la dirección de memoria de la variable "num", dentro esta función la variable sufre diversos cambios y pasa por 3 funciones pertenecientes a la función "procesar":
-"invertir_cifras": Previamente llamada "f_alpha" esta función recibe la dirección de memoria de "num" e invierte su valor.
-"dividir_en_dos":Previamente llamada "f_beta" esta función recibe la dirección de memoria de "num" y lo divide en dos.
-"sumar_num_cifras":Previamente llamada "f_gamma" esta función recibe la dirección de memoria de "num" suma sus cifras y ese resultado lo suma a "num".

### 3.g)Código "codigo_sin_funcionar.c"

**El código "codigo_sin_funcionar.c" era un código que inicialmente no compilaba por diversos inconvenientes** errores de todo tipo, procedo a enumerarlos por orden en el que se encontrarton en el código:
-Faltaba incluir la galeria "<stdio.h>". Sin esta galeria no se ejecutan las funciones básicas de "printf" y "scanf".
-En la primer función que se usa en el código "scanf" faltaba el operador "&" previo a "valor1" para poder ingresar el valor por teclado.
-Cuando se suman las variables "valor1" y "valor2" y se asigna el resultado a un variable "suma" faltaba el ";" en esta sentencia.
-Luego en cuanto a la función "duplicar_numero()" hacían faltas correciones de implementación y en la invocación de la misma en el código principal
    -Invocación: Ya que se trata de una función de tipo void, no retorna un valor, por lo tanto si queremos modificar una variable debe ser a través de la dirección de memoria de la misma, digamos o sea con un pasaje por referencia. Entonces en la invoación le pasamos la variable "valor1" con el operador "&" indicando que pasamos su dirección de memoria.
    -Declaración e Implementación: En cuanto a la declaración primero hay que declarar que el parámetro de entrada "numero" es del tipo puntero entero, agregando el operador indirección previo al parámetro. Luego cuando operamos para duplicar el valor usamos el el operador indirección nuevamente para ingresar al valor que tiene esa dirección de memoria que recibió la función y modificarlo multiplicando por dos el valor y asignandolo a dicha dirección de memoria. Finalmente no hace falta retornar nada, ya que es una función de tipo void, y en este caso el "valor1" que recibió va a terminar modificado, ya que operamos desde su dirección de memoria.
-Finalmente faltaba un ";" en la sentencia "return 0" del main.

## Autoría

Este directorio es de autoría total del alumno Bautista Antonio Murga.
