# caso #1, 5%

*instituto tecnológico de costa rica*, escuela de computación
*estructuras de datos*
_prof. rodrigo núñez_

*tipo:* individual

de link proceder a realizar las lecturas en forma grupal y resolver los retos propuestos a continuación para compartirlos con el resto de la clase. a la hora de exponerlo en clase hacerlo por medio de ejemplos programados, no es necesario y no se recomienda realizar presentaciones. Valor 10 puntos. 

https://cplusplus.com/doc/tutorial/variables/
Cristopher Acuña, Josue Romero, Daniel Granados

cómo sería posible demostrar con un programa en c++ que un unsigned char es efectivamente de 8 bits y que un signed int es efectivamente de 32 bits. además averigue si es posible realizar transformaciones de tipos de datos sin que se dañe la información original entre los siguientes tipos:
- char to unsigned char
- float to double
- int to char
- short to char
- int to char32_t
- int to bool

https://cplusplus.com/doc/tutorial/constants/
Kenneth Rojas, Luis Gonzalez

será posible por medio de constantes declarar números en octal y hexadecimal, luego en el código realizar una operación con dichas constantes con un número en decimal y que el resultado sea consistente. además será que puedo por medio del uso de #define imprimir una oración de 3 formas diferentes tal que su significado cambie. 

- en una casa tengo un camión café y una bola verde
- en un camión tengo una bola verde y una casa café   
- en una bola verde tengo un camión cafe y una casa   


https://cplusplus.com/doc/tutorial/operators/
Gabriel Gomez, Diego Granados, Emmanuel Matamoros 

cómo podría explicarle a sus compañeros con claridad como funciona compound assignment, conditional ternary operator y los bitwise operators. 


https://cplusplus.com/doc/tutorial/basic_io/
Sarah Quesada, Jose Pablo Barquero

cómo podría hacer en c++ para que el usuario ingrese el nombre de una película, el año, el rating que va de 1.0 a 5.0, y el tiempo de duración de la misma. 


https://cplusplus.com/doc/tutorial/control/
Dayana Xie, Isaac Rojas, Helberth Cubillo

se desea hacer un programa que recorra los números de 0 a 100, imprima aquellos divisibles por 5, cuando se tope uno divisible por 3 deberá imprimir ">> el cociente" y si es divisible por 7 deberá imprimir el número y la palabra "suerte". compruebe que puede hacer 3 versiones diferentes del programa haciendo uso de for, do-while, while, if, switch y conditional operators. 

https://cplusplus.com/doc/tutorial/functions/
Yeiner Ugalde, Jose Eduardo Gutierrez

cómo se podría escribir la función de los números de fibonacci de forma iterativa y recursiva en c++.

https://cplusplus.com/doc/tutorial/functions2/
David Fernandez, Steven Sequeira 

podrá hacerse una función genérica que sea agnóstica el tipo de dato que reciba 3 valores y retorne el mayor de ellos. 

fecha de presentación de estas asignaciones será el viernes 5 de agosto en clase. 


## descripción del caso 

existe un teorema llamado _four color_ el cual indica que con tan solo 4 colores es posible pintar las regiones de cualquier mapa de tal forma que dos regiones adyacentes nunca van a tener el mismo color. https://en.wikipedia.org/wiki/Four_color_theorem . cómo demostraría usted por medio de un programa en C++ que un mapa dado cumple con dicho teorema? que estructura de datos diseñaría para que su solución y algoritmo sea simple? cómo le suministraría la información del mapa al algoritmo?

lecturas complementarias recomendadas 

- https://cplusplus.com/doc/tutorial/structures/ , descarte la sección de pointers. 
- https://www.youtube.com/watch?v=hWglK8nWh60
- https://www.w3schools.com/git/



- fecha de entrega: domingo 14 de agosto antes de medio día
- entrega al asistente al correo: kevinqj.2002@gmail.com
- subject: estructuras de datos - caso #1
- contenido: url al respositorio de git con el código fuente del programa, el último commit del branch principal debe ser máximo el domingo 14 de agosto a medio día. en el readme.md file o en el main.cpp explicar el formato para suministrar el mapa y de la estructura de datos diseñada para solucionar el algoritmo. 


# caso #2, 5%

*instituto tecnológico de costa rica*, escuela de computación
*estructuras de datos*
_prof. rodrigo núñez_

*tipo:* individual

## descripción del caso 
la compañía 4home es un proveedor de domótica para todo latinoamérica, los consumidores pueden comprar sus productos que van desde tomacorrientes, bombillos, tiras de led, cámaras y gran variedad de sensores de movimiento, humo y apertura de puertas entre otros muchos tipos de dispositivos. Sus clientes luego de instalar dichos dispositivos en casa, usando el app 4home pueden configurarlos para acceder a los mismos y así controlarlos desde la aplicación, haciendo así su casa inteligente. cada tipo de dispositivo tiene sus diferentes parámetros configurables y las acciones propias del tipo de dispositivo, por ejemplo:
- bombillo, acciones (on, off), parámetros (color, brillo)
- sensor de puertas, acciones (on, off, se abrió puerta, se cerró puerto, sonar alarma, enviar notificacion)
- sensor de humo, acciones (on, off, accionar alarma) parámetros (sensibilidad)
y así cada tipo de dispositivo tiene sus propios parámetros y acciones. 

Cómo diseñaría e implementaría usted en C++ las diversas classes para el app 4home de tal forma que permita realizar las siguientes tareas:

1. Agregar K dispositivos de T tipos diferentes a las H habitaciones de la casa de un consumidor
2. Que el usuario pueda crear tareas con un nombre, que al accionarlas ejecute acciones y cambie parámetros de un subconjunto seleccionado de los dispositivos de la casa, siendo dichas acciones y parámetros configurables en la tarea
3. Ejecutar una tarea en particular

Por ejemplo tareas que el consumidor quisiera crear:
- buenos días: apaga luces, enciende el coffee maker, prende luz del baño, apaga alarmas
- trabajar: enciende las luces de la oficina y el toma corriente de la computadora y monitor

Presentaciones preliminares:

1. Carlos José Barrantes, propuesta parcial, con ejemplos de código de la idea principal (no la implementación completa), de una posible solución basada en arreglos estáticos, 10pts, viernes 19 de agosto

2. Carlos José Barrantes y Helberth Cubillo, propuesta parcial, con ejemplos de código de la idea principal (no la implementación completa), de una posible solución basada en listas enlazadas programadas por el estudiante 
24 de agosto, 10pts

3. Isaac Rojas y Jose Pablo Barquero, propuesta parcial, con ejemplos de código de la idea principal (no la implementación completa), de una posible solución basada en la clase vector de c++.
24 de agosto, 10pts

- fecha de entrega: lunes 29 de agosto antes de las 6pm
- entrega al asistente al correo: kevinqj.2002@gmail.com
- subject: estructuras de datos - caso #2
- contenido: url al respositorio de git con el código fuente del programa en C++, el último commit del branch principal debe ser máximo la fecha y hora de entrega. en el readme.md file explicar el diseño y estrategia solución. todos deberán implementar sus propias listas enlazadas y cualquier otra estructura de datos lineal.  



# caso #3, 10%

*instituto tecnológico de costa rica*, escuela de computación
*estructuras de datos*
_prof. rodrigo núñez_

*tipo:* individual

## descripción del caso 
proceda a realizar los siguientes ejercicios programados en C++ usando orientación a objetos. para resolverlos deberá haber hecho las lecturas para quiz de la última semana de agosto y primera de setiembre referente a listas, listas dobles, pilas y colas. todas las estructuras de datos para las listas, pilas y colas deberán estar hechas por el estudiante y ser genéricas. 

1. el usuario quiere escribir una expresión en forma textual la cual puede contener únicamente números enteros, +,-,*,/,%,(,)
dicha expresión debe ser escrita en notación infija, luego transformada y evaluada en notación postfija usando algoritmos de pilas.

2. proceda a realizar la implementación del TDA cola pero sin usar colas, si no más bien usando un máximo de 2 pilas. las operaciones a implementar serán: isEmpty, enqueue, dequeue, front. 

3. en los aeropuertos hay aviones que se encuentran alistándose para despegar, eso depende de la hora de salida del vuelo, el proceso de abordaje de los pasajeros, mantenimiento de la aeronave y la disponibilidad de pistas para despegar. se quiere hacer un programa en C++ orientado a objetos que permita ordenar el despegue oportuno de los vuelos. el aeropuerto va a contar con K pistas, este valor puede cambiar de aeropuerto a aeropuerto. se asume que cualquier avión puede despegar desde cualquier pista y que vuelos distintos pueden despegar al mismo tiempo siempre y cuando sean pistas diferentes.
cree en forma aleatoria V vuelos partiendo entre un rango de horas cualquiera en el mismo día, asuma que cada vuelo va a tener un atraso de despegue que puede ir entre 0 a 17 minutos. haga que su programa analice y planifique el despegue en orden de todos los V vuelos en las K pistas.  debe ser posible observar que todos los vuelos salieron en correcto orden y por cuál pista salieron. 

asignaciones preliminares para miércoles 7 de setiembre
1. Yeiner Ugalde, explicar de forma interactiva el algoritmo de conversión de infijo a postfijo

2. Jose Eduardo Gutierrez, demostrar que una cola con prioridad puede ser usada con o sin prioridad según se necesite. 


- fecha de entrega: martes 13 de setiembre antes de media noche
- entrega al asistente al correo: kevinqj.2002@gmail.com
- subject: estructuras de datos - caso #3
- contenido: url al respositorio de git cuyo último commit debe cumplir con la fecha y hora de entrega. asegúrese que el repositorio sea público. debe haber un readme.md file que explique como es que se prueban los 3 ejercicios correctamente. todos los programas son en consola.
- se evaluará calidad de código bajo las siguientes buenas prácticas:

1. nombres significativos de variables, parámetros y métodos, que tengan claro su intención con el nombre
2. toda classe o struct debe estar en archivos separados ya sea .h o .cpp
3. encapsulamiento, una función o método sabe hacer una única cosa y nada más, no se mienta así mismo con el nombre del método
4. correcta idemtación tomando en cuenta la apertura de braces {, el cierre } y el tab
5. en un condicional, if, switch, la condición que ocurre más frecuentemente debe ir de primero
6. en una classe primero se declaran las cosas públicas y seguidamente las privadas 


# caso #4, 20%

*instituto tecnológico de costa rica*, escuela de computación
*estructuras de datos*
_prof. rodrigo núñez_

*tipo:* grupal, máximo 2 personas

## descripción del caso 

### minando el oro 

existe el interés de una empresa nacional de desarrollar un juego de estrategia que reta a los jugadores a extraer la mayor cantidad de mineral de unos tuneles con cámaras de extracción. se le ha solicitado a usted que diseñe y desarrolle el programa principal para demostrar que la lógica del juego funciona correctamente.

*las puertas* 

el juego debe ofrecer N puertas para entrar a los túneles, existe una puerta principal por donde se ingresa, esa conecta hacia la red de puertas. una puerta puede llevar a mínimo 2 puertas y máximo 4, las puertas se ubican en los puntos cardinales respectivos (este, oeste, norte, sur). al entrar a una puerta de estas podría haber solo conexión hacia las otras puertas o bien podría haber entrada a los túneles de minado. solicite al usuario el total de puertas que se quiere crear o bien lo establece en una constante. si una puerta o no tiene entrada a un túnel, se decide en el momento que se construye la mina, siendo este una posiblidad del 66%. 

*túneles* 

los túneles inician con una cámara raíz que no tiene minerales ni entrada a ningún tunel. cada camára, incluyendo la raíz, tiene de 1 a 2 bifurcaciones, cada bifurcación tiene una distancia de 10 a 80 metros que llegaría a otra cámara. la red de túneles y sus bifurcaciones existen bajo la regla del potencial de minado, potencial = cantidad de mineral * distancia. las cámaras con potencial menor siempre están a la izquierda de la cámara actual y las de potencial mayor a la derecha. 

*las cámaras* 

las cámaras pueden tener de 1 a 20 unidades de mineral y nunca existen cámaras a más de 720 metros de profundidad desde la puerta por la que se ingresó al túnel. si una cámara queda sin mineral, se elimina de la red de tuneles con todo y sus bifurcaciones hijas. 

*los personajes* 

existen 3 tipos de personajes; explorador, que camina 20mts por segundo y puede traer por viaje a la puerta hasta 8 unidades de minerales; carguero, que camina 10mts por segundo y puede traer hasta 40 unidades de mineral y finalmente el topo; que camina 7mts por segundo, puede traer hasta 15 unidades de mineral y solo una vez por tunel puede pasarse internamente de la cámara actual a la cámara hermana. 

*los jugadores* 

partipan 2 jugadores, cada uno tiene un turno de 2 minutos, durante ese tiempo debe seleccionar 3 mineros que pueden ser de cualquier tipo de personaje, también en ese tiempo debe escoger la estrategia de juego que quiere seguir para cada minero. dicha estrategia debe darle criterio autónomo a cada minero para decidir a cuáles puertas entrar y cómo recorrer los túneles. como diseñador del juego usted busca una forma rápida y efectiva para que el jugador seleccione como quiere jugar, pues el tiempo el restante será el que tenga para ir a recoger minerales. los mineros suman mineral hasta que llegan a una cámara donde deciden minarla y dicho mineral lo deben llevar hasta la puerta por ponde entraron al tunel. gana el jugador que logre sacar más minerales. para navegar por las puertas y los túneles es requesito usar la red construída de puertas y túneles. 

*artefactos técnicos disponibles* 

para usted diseñar la solución de este juego, la empresa le ha concedido un conjunto de artefactos técnicos que le pueden ayudar en su implementación:

1. lenguaje C++
2. lista doblemente enlazada (la ya programada con las modificaciones que considere)
3. pilas y colas, puede ser la ya programada o la que ofrezca el lenguaje
4. árbol AVL genérico, programado por el estudiante 
5. algoritmos de ordenamiento programados o lo que ofrezca el lenguaje
6. algoritmo de búsqueda binaria programado
7. hashtables o diccionarios proporcionados por el lenguaje
8. orientación a objetos en general
9. herencia y polimorfismo
10. diseño o modelaje de objetos
11. threads proporcionados por el lenguaje
12. patrón producto consumidor, patrón strategy y cualquier otro patrón de diseño orientado a ojetos


entonces, cuál sería su diseño de clases, estructuras de datos, algoritmos y estrategia general para implementar su versión de este juego? 

## preliminares 

_Cristopher Acuña:_ cómo funciona un map en c++ y cómo podría ser útil para implementar polimorfismo. 

_Sarah Quesada:_ cómo funciona un unordered_map en c++, cómo podría ser útil para implementar polimorfismo y porque este es más rápido que un map. 

_Josue Romero:_ cómo funcionan los threads en C++, qué es un thread, cómo consideras que podrían ser útiles los threads para este caso 

_Kenneth Rojas:_ qué es el patrón producto consumidor y cómo podría implementarse haciendo uso de hilos y colas. 

_Luis Gonzalez:_ programar un ejemplo de cómo podría el patrón productor consumidor ser útil para este caso, que problema queda sencillo de resolver dado este patrón. 

_Gabriel Gomez:_ programar un ejemplo de cómo podrían ser útiles las pilas para resolver este caso. en que proceso o etapa del problema las pilas podrían ser útiles. 

_Daniel Granados:_  implementar y explicar el algoritmo de búsqueda en un árbol AVL. 

_Emmanuel Matamoros:_ implementar y explicar el algoritmo de borrado en un árbol AVL.  

## aspectos operativos 

- último commit:  domingo 16 de octubre antes de media noche
- la revisión será con cita
- se evaluará calidad de código bajo las siguientes buenas prácticas:

1. nombres significativos de variables, parámetros y métodos, que tengan claro su intención con el nombre
2. toda classe o struct debe estar en archivos separados ya sea .h o .cpp
3. encapsulamiento, una función o método sabe hacer una única cosa y nada más, no se mienta así mismo con el nombre del método
4. correcta idemtación tomando en cuenta la apertura de braces {, el cierre } y el tab
5. en un condicional, if, switch, la condición que ocurre más frecuentemente debe ir de primero
6. en una classe primero se declaran las cosas privadas y seguidamente las públicas, los atributos van antes de los métodos


