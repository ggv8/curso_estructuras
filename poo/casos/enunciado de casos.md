# caso #1, 7%

*instituto tecnológico de costa rica*, escuela de computación  
*programación orientada a objetos*  
_prof. rodrigo núñez_  
*tipo:* grupal  

## descripción
El yate silent 60 es un navío de tipo catamaran que funciona con energía solar, representa un ícono del futuro de la navegación con cero emisiones. posee sistemas de paneles solares, sensores, optimización para el uso de energía, baterías de litio entre muchos otros avances tecnológicos. 

En general el silent 60 es todo un sistema integrado donde muchas partes interactúan y se relacionan entre sí con el fín de proveer:

- energía a toda la nave
- propulsión
- comunicación
- sistema de aguas y baños
- refrigeración para alimentos y aire acondicionado
- televisión
- entretenimientos
- iluminación
- sistemas de navegación

### parte 1
ahora se presenta el reto de hacer un diseño del funcionamiento de este yate en forma digital. para ello se van a conformar subgrupos que van a diseñar una parte de la funcionalidad de los sistemas del yate, para posteriormente crear todo el diseño completo. dicho diseño inicial es conceptual, es decir, son cajas con los nombres de los objetos, los atributos y las acciones del mismo cuando así sea necesario. para realizar dicho modelo se recomienda usar miro para montar dicho diseño en forma colaborativa. https://miro.com/

links relacionados 
- https://www.youtube.com/watch?v=P9ftIasJSfc
- https://www.youtube.com/watch?v=NQS__N4eXGc
- https://www.youtube.com/watch?v=kLHEuz3rsmk
- https://www.silent-yachts.com/silent60/

*grupos y asignación*

sistemas de refrigeración  
---------------------------------------------  
ALFARO CHAVERRI FEDERICO ALBERTO  
ALFARO GARCIA ISAAC GERMAN  
CUBILLO JARQUIN HELBERTH FABRICIO  
SEQUEIRA VARGAS ANTHONY STEVE  

entretenimiento, luces y cocina  
---------------------------------------------  
BARQUERO DIAZ JOSE PABLO  
CALVO HERNANDEZ SEBASTIAN  
ACUÑA CAMPOS CRISTOPHER ANTONIO  
UGALDE RIVAS YEINER ALONSO  

energía solar y baterías  
---------------------------------------------  
ALVARADO ANDRADE DANIELA  
CAMPOS ARGUEDAS OSCAR ANDRES  
AGUERO MATA MIGUEL EDUARDO  
KAUFFMANN PORCAR ERICK  

propulsión y motores  
---------------------------------------------  
BARQUERO BARRANTES BRYAN DANIEL  
MENDOZA MATA FIORELLA LUCIA  
FERNANDEZ SALAS JOSE DAVID  
UGALDE JIMENEZ DAVID FRANCISCO  

tratamiento de aguas  
---------------------------------------------  
MALLMA ZAMORA JUAN ERNESTO  
MONTERO ZUÑIGA AMANDA JESUS  
BRENES GARRO JOSE JULIAN  
RODRIGUEZ BRENES SEBASTIAN  
RODRIGUEZ CRUZ JORGE LUIS  

comunicaciones y navegación  
---------------------------------------------  
QUESADA CHAVES SARAH PRISCILLA  
ROBLES MATA JOSE ANDRES  
MADRIGAL CHINCHILLA JULIAN ANDRES  
VALVERDE ARGUEDAS SAMUEL  
XIE LI DAYANA  

### parte #2

una vez que tenga el diseño preliminar hecho proceda a leer las particularidades del lenguage java con respecto a tipos de datos y los arreglos en estos links https://docs.oracle.com/javase/tutorial/java/nutsandbolts/datatypes.html , https://docs.oracle.com/javase/tutorial/java/nutsandbolts/arrays.html 

ahora usando una copia del diseño preliminar agregue a los atributos el tipo de dato respectivo a su diseño para que así empiece a parecerse a un diseño de objetos para un lenguaje determinado, en este caso java.

- fecha de revisión de las asignaciones: 10 y 12 de agosto
- fecha de entrega: jueves 18 de agosto antes de medio día
- entrega al asistente al correo: kevinqj.2002@gmail.com
- subject: poo - caso #1
- contenido: lista de los integrantes del grupo, un pdf con el diseño preliminar y otro pdf con el diseño con los atributos ajustados a los tipos de datos en java, un entregable por grupo.



# caso #2, 5%

*instituto tecnológico de costa rica*, escuela de computación  
*programación orientada a objetos*  
_prof. rodrigo núñez_  
*tipo:* individual  

## descripción
retomando el tema del yatch silent 60, el yate de energía solar, se quiere hacer una demostración de la eficiencia del consumo y carga energética del yate. para ello es necesario parametrizar valores de configuración como capacidad de carga de las baterías, velocidad de carga desde los paneles dependiendo de los niveles de sol a los que estén expuestos los páneles, velocidad en nudos del navío y el consumo de energía según la velocidad. 

cómo sería el diseño y la implementación de classes en java para el programa de demo que usted haría si debe cumplir lo siguiente: 

1. Los parámetros de carga energética y su consumo son configurables, se sabe que hay dos baterías y tres páneles pero dicha configuración se puede cambiar también, todo esto antes de correr el programa

2. La simulación debe durar entre 1.00 a 1.5 minutos máximo

3. Durante el periodo de simulación los paneles deberán estar expuestos a diferentes niveles de sol para que sea posible apreciar la velocidad de carga de las baterías

4. Durante el periodo de simulación el navío estará entre detenido hasta probar múltiples velocidades para poder corrobar el consumo energético de las baterías según la velocidad

5. El usuario podrá ver en la pantalla en todo momento el tiempo transcurrido de simulación, el nivel de energia de todas las baterías, el nivel de luz solar sobre los páneles y la velocidad del navío

6. Demuestre finalmente que es posible agregar varios otros elementos del yate que consuman energía dentro de la simulación y que esto no afecte el código realizado entre el punto #1 al #5, es decir, que puedo agregar y quitar componentes del Yate a antojo de quien configura la simulación, no importa si esto se hace desde el main, una classe con constantes o un archivo de configuración separado.  

Preliminares: 
Cómo crear un UI para el simulador en Java. Investigue y cree código ejemplo para crear una pantalla que pueda funcionar para visualizar dicho simulador en java. Deberá para ello seguir el patrón de diseño MVC. 

Miércoles 24 de agosto, 1 ejemplo entre los dos 

- ALFARO GARCIA ISAAC GERMAN 
- BARQUERO BARRANTES BRYAN DANIEL 

Cómo funcionan los hilos y el sleep en java. Investigue y cree código ejemplo para explicar el funcionamiento de los hilos de ejecución en java esto con el fin de que dicha tecnología nos permita construir el simulador que que requiere para el demo del consumo del yate.  

Miércoles 24 de agosto, ejemplos hechos entre los dos 

- QUESADA CHAVES SARAH PRISCILLA 
- SEQUEIRA VARGAS ANTHONY STEVE 


En forma individual las siguientes personas presentarán un diseño borrador en dibujo de como podrían modelar dicho simulador y sus reglas de comportamiento sin considerar el punto #6. 

Viernes 26 de agosto 

- MADRIGAL CHINCHILLA JULIAN ANDRES
- MONTERO ZUÑIGA AMANDA JESUS

- fecha de entrega: miércoles 31 antes de media noche
- entrega al asistente al correo: kevinqj.2002@gmail.com
- subject: poo - caso #2
- contenido: url en github con el código fuente del programa en el branch principal, en el mismo repositorio debe haber un readme.md con el modelo gráfico de objetos inicial que se hizo antes de iniciar la programación del simulador, además de las indicaciones de como se hace en su programa para configurar las reglas de carga y consumo de energía del simulador. 


# caso #3, 10%

*instituto tecnológico de costa rica*, escuela de computación  
*programación orientada a objetos*  
_prof. rodrigo núñez_  
*tipo:* individual  

## descripción
*virtual garden* 

el virtual garden es un programa que le permite a la persona ensayar sobre el cuido de diferentes tipos de plantas a lo largo de los años. para lograrlo, el usuario simplemente establece la duración del año en tiempo entrenamiento, por ejemplo, decir que un año equivale a 3 minutos de entrenamiento; la cantidad de estaciones 2 o 4. a partir de ahí puede seleccionar una planta para iniciar, todas inician siendo tamaño almácigo. El riego, el sol, alimentación y los cambios estacionales van haciendo a la planta cambiar tomando en cuenta factores como:

1. velocidad de crecimiento
2. alimentación que afecta color de hojas, floreo y frutos
3. la cantidad de agua que necesita para sobrevivir, crecer o morir 
4. alimentación necesaria para florear
5. alimentación necesaria para dar fruto
6. los niveles de sol que necesita para sobrevivir, crecer y morir

el usuario cuenta con las funciones de:

_abonar:_ selecciona una planta del jardín y al escoger dar alimento le suministra una porción. 

_regar:_ suministrando cierta cantidad de agua predeterminada a una de las plantas seleccionadas

una vez iniciado el entrenamiento, la planta iniciará su proceso natural de crecimiento; las diversas variables como las estaciones, el sol, la lluvia, el agua, el abono, tiempo transcurrido y demás, serán factores que irán afectando positiva o negativamente a la planta. 

hasta que la primer planta logre alcanzar al menos un 30% de su tamaño máximo, podrá agregar al jardín otra planta del tipo que desee y así sucesivamente para agregar más plantas al jardín.

el programa debe ser capaz de trabajar con cualquier cantidad de tipos de plantas y ser capaz de mantener el ciclo de vida permanente de cada planta por tiempo indefinido hasta que la planta muera. es importante tomar en cuenta que cada tipo de planta tiene su propio ciclo de vida, no todas son iguales. 

durante todo el proceso el usuario puede visualizar en la pantalla:

- una imagen de la planta en su estado; esto para determinar si la planta requiere más o menos ya sea agua o abono 
- la cantidad de años y días que han transcurrido en tiempo entrenamiento
- la fecha actual en tiempo entrenamiento
- la estación actual 
- la temperatura
- cuánto está lloviendo
- el tamaño de la porción de agua y abono respectivamente
- las acciones de abonar y regar

el objetivo final es que la persona aprenda cuál es la mejor época para sembrar cada tipo de planta, que aprenda cuáles florecen y cuales no, cuáles dan fruto y cuáles no, que sepa que cuidos darle según la edad y las condiciones del clima a travez del año. 

Cuál sería un diseño de objetos que permita programar en el menor tiempo posible, una solución para los requerimientos anteriores? Cómo podría la herencia y el polimorfismo darme ventajas estratégicas en la solución? 

Cómo hago para que el ciclo de vida de cada tipo de planta pueda ser diferente? Cómo selecciono que imagen mostrar tomando en cuenta tantas variables tales como: si está seca, si está pasada de agua, la edad de la planta, que si necesita abono o la quemé de tanto echarle? 

Cómo le voy a indicar al programa en que estación estamos? en que momento cambia de estación? entre que fechas debe suceder? y cómo hago para definir cuánto sol o lluvia va hacer cada día del año?

Cómo le indico al programa qué es bueno y qué es malo para cierto tipo de planta? Cómo sabe que le permite crecer, florear y dar frutos en cierto tiempo o del todo no lograrlo? Cómo me voy a dar cuenta que ya le toca morir sin hardcodear todos esos casos y el de todas las preguntas anteriores? Con qué diseño de objetos podría lograrlo?

los estudiantes serán quienes buscarán estrategias y formas de solucionar este problema aprovechando las técnicas aprendidas de orientación a objetos, deberán definir diversas reglas y mecanismos que le permita crear un programa flexible que cumpla los requisitos. encontrar respuesta en el diseño orientado a objetos para las interrogantes anteriores, que se presentan como retos de diseño y programación los cuales podrían simplificar o amplificar el tamaño y la complejidad del programa. 

proceda entonces a diseñar e implementar en java este programa de entrenamiento llamado virtual garden.

## asignaciones preliminares
cada estudiante tiene su creatividad propia, esa misma que le llevará a abordar este problema por frentes diferentes y aprenderemos de nuestra propia forma de atacar la complejidad y de las de los demás. por ello en cada bloque, tres estudiantes nos mostrarán su avance en la solución. el profesor le asignará una nota con respecto al nivel de avance utilizando las siguientes reglas:

1. _del 1 al 9 de setiembre, diseño de classes y/o estrategia de la solución:_ Responde a más del 80% de las interrogantes?(15) entre 50% a 80%(9), menos del 50%(4)

2. _del 12 al 21 de setiembre, pruebas de concepto:_ programé pruebas concretas de como voy a resolver los retos técnicos que me plantié en el bloque 1: en un 100%(15), 70%(10) o menos del 50%(6)

3. _del 28 set al 5 de octubre, all together:_ dividiendo la solución en 3 macro módulos: simulación, ciclo de vida y operativo, he logrado concluír a mínimo un 80% de cada macro módulo, ya sea de: los tres (15), simulación+operativo(7), ciclo de vida+operativo(12), simulacion+cicloc de vida(15), ciclo de vida(10), operativo(5), simulacion(10)  

## otros aspectos
- fecha de entrega: lunes 10 de octubre antes de medio día, último commit en github.
- última fecha para consulta: miércoles 5 de octubre
- revisión por cita