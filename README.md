# tp1



### 2.a)Archivo ".gitignore"

¿Que es? El archivo .gitignore es un archivo de texto plano que sirve para indicarle a Git qué archivos o directorios específicos de un proyecto no deben ser rastreados, controlados ni subidos a un repositorio.



¿Por que es conveniente incluirlo? Una de las principales razones es que cuando compilamos un archivo.c este crea un ejecutable el cuál es innecesario subirlo, ya que ocupa espacio, que no aportan valor que el código fuente si lo aporta, además evita subir por accidente algún archivo confidencial o con algún token de acceso que tengamos presente en nuestro repositorio local y además algunos IDE como Visual Studio Code crean carpetas .vscode las cuales únicamente tienen información de mi configuración personal en Visual Studio y tampoco aportan valor a nuestro trabajo.



¿Cómo se debe hacer? Lo ideal es crearlo justo luego de crear nuestro directorio con git init o antes del primer commit del  trabajo. Ya que si git ya registró mi archivo y empezó a trackearlo, cuando lo agregue a git ignore este seguirá rastreando dicho archivo y la solución a esto es compleja, teniendo que usar comandos para borrar la caché.

¿Cómo configuraría el archivo .gitignore? Primero que nada se tiene que utilizar ignorando un archivo por línea, siguiendo los siguientes preceptos:
-"secreto.txt", para ignorar un archivo en específico.
-"carpeta/", para ignorar una carpeta en específico.
-"\*.exe", para ignorar un tipo archivo.

