# Bitácora de uso de Inteligencia Artificial

Proyecto: Sistema de Caja para una Tienda  
Curso: Algoritmos  
Lenguaje de programación: C++  
Herramienta de IA utilizada: ChatGPT

## 1. Introducción

Durante el desarrollo de mi proyecto final utilicé ChatGPT como herramienta de apoyo para comprender instrucciones, resolver errores, recibir ejemplos de programación y realizar pruebas del sistema.

A continuación, presento un registro de las principales consultas realizadas, las sugerencias que utilicé y cómo las apliqué durante el desarrollo del proyecto.

## 2. Registro de consultas

18/10/2026: Cómo conectar mi repositorio de GitHub con Visual Studio Code. Seguí las instrucciones para clonar mi repositorio y abrirlo en VS Code.

18/10/2026: Por qué no funcionaba el compilador `g++`. Instalé MSYS2 y configuré el compilador para ejecutar programas en C++. 

18/10/2026: Cómo desarrollar el menú principal. Utilicé un ejemplo con `do-while` y condicionales para repetir el menú hasta seleccionar la opción de salida. 

18/10/2026: Cómo registrar varios productos. Incorporé un ciclo anidado para ingresar precios y cantidades y calcular el subtotal acumulado. 

18/10/2026: Cómo validar entradas incorrectas.  Utilicé ejemplos con `cin.fail()`, `cin.clear()` y `cin.ignore()` para controlar datos inválidos. 

18/10/2026: Cómo guardar mis avances en GitHub. Aprendí a utilizar `git add`, `git commit` y `git push`.

25/10/2026: Cómo calcular los descuentos de las ventas. Incorporé condicionales para aplicar descuentos del 0 %, 5 % y 10 %. 

25/10/2026: Cómo calcular el IVA. Utilicé la fórmula para calcular el 12 % sobre el subtotal después del descuento. 

25/10/2026: Cómo validar el pago y calcular el cambio.  Incorporé un ciclo para solicitar nuevamente el pago cuando fuera insuficiente o inválido.

25/10/2026: Cómo mostrar un recibo.  Utilicé `fixed` y `setprecision(2)` para presentar los valores con dos decimales. 

25/10/2026: Cómo realizar el resumen del día.  Incorporé contadores, acumuladores y comparaciones para calcular las estadísticas de ventas. 

01/11/2026: Cómo realizar las pruebas finales.  Comprobé ventas con diferentes descuentos, el cálculo del IVA y el resumen del día. 

## 3. Sugerencias aceptadas

Durante el desarrollo acepté explicaciones, ejemplos y fragmentos de código relacionados con:

- La estructura del menú principal mediante un ciclo `do-while`.
- El registro de varios productos utilizando ciclos anidados.
- Las validaciones de precios, cantidades y opciones del menú.
- El cálculo de descuentos e IVA.
- La validación del pago recibido y el cálculo del cambio.
- La generación del recibo.
- Los contadores y acumuladores para el resumen del día.
- La configuración del compilador y el uso de GitHub.

Los fragmentos proporcionados por ChatGPT fueron incorporados durante el desarrollo y comprobados mediante pruebas de ejecución.

## 4. Sugerencias rechazadas o corregidas

Durante el proceso se realizaron ajustes a las soluciones propuestas.

Por ejemplo, inicialmente la validación de precios negativos no mostraba un mensaje de error. Después de comprobar el problema, se agregó la condición necesaria para mostrar el mensaje correspondiente.

También fue necesario corregir la configuración de IntelliSense en Visual Studio Code, ya que mostraba errores relacionados con `cout` aunque el programa compilaba correctamente.

No se documentan otras sugerencias rechazadas que no puedan identificarse en el proceso de trabajo.

## 5. Conclusión

El uso de ChatGPT me permitió recibir orientación durante las diferentes etapas del proyecto, especialmente al configurar las herramientas de programación, comprender las estructuras de control y resolver problemas que surgieron durante las pruebas.

También utilicé ejemplos y fragmentos de código sugeridos por la herramienta, los incorporé al proyecto y comprobé su funcionamiento mediante diferentes casos de prueba.

La bitácora muestra cómo se utilizó la inteligencia artificial durante el desarrollo del Sistema de Caja para una Tienda.