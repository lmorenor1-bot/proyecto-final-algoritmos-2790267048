# Análisis del problema

## Proyecto: Sistema de Caja para una Tienda

### 1. Descripción del problema

En una tienda es necesario registrar los productos que compran los clientes, calcular el total de sus compras, aplicar descuentos y determinar el cambio correspondiente.

Para facilitar estas operaciones se desarrolló un sistema de caja en C++, que permite realizar los cálculos automáticamente y consultar un resumen de las ventas efectuadas durante la ejecución del programa.

### 2. Objetivo del programa

Desarrollar un sistema de caja utilizando estructuras de control, ciclos, condicionales, contadores y acumuladores para registrar ventas, calcular descuentos e IVA, procesar pagos y mostrar estadísticas de las ventas realizadas.

### 3. Datos de entrada

El programa solicita los siguientes datos:

- Opción del menú principal.
- Precio unitario de cada producto.
- Cantidad de productos comprados.
- Dinero recibido del cliente.

### 4. Procesos que realiza el sistema

Registro de productos: permite ingresar varios productos y acumular sus importes hasta que se introduzca un precio de cero.

Cálculo del subtotal: multiplica el precio unitario por la cantidad de cada producto y suma los resultados.

Descuentos: aplica las siguientes condiciones:

| Subtotal | Descuento |
|---|---|
| Menor de Q100 | 0 % |
| Desde Q100 hasta menos de Q500 | 5 % |
| Q500 o más | 10 % |

IVA:calcula el 12 % sobre el subtotal después de aplicar el descuento.

Pago: solicita el dinero entregado por el cliente y comprueba que sea suficiente.

Cambio: resta el total a pagar del dinero recibido.

Resumen del día: utiliza contadores y acumuladores para registrar el número de ventas, el total vendido, la venta mayor, la menor, el promedio y los descuentos acumulados.

### 5. Datos de salida

El programa muestra:

- Subtotal de la compra.
- Descuento aplicado.
- Monto después del descuento.
- IVA calculado.
- Total a pagar.
- Pago recibido y cambio.
- Recibo de venta.
- Resumen de las ventas.
- Mensaje de cierre de caja.

### 6. Validaciones

El sistema comprueba que:

- Las opciones del menú sean válidas.
- Los precios no sean negativos.
- Las cantidades sean enteras entre 1 y 100.
- No se acepten letras ni caracteres incorrectos en las entradas numéricas.
- El pago recibido sea suficiente.
- Las ventas sin productos no se registren.
- No se calcule el promedio cuando no existen ventas.

### 7. Herramientas y estructuras utilizadas

El programa fue desarrollado en C++ utilizando Visual Studio Code y el compilador G++.

Se emplearon variables, condicionales `if`, `else if` y `else`, ciclos `do-while`, contadores y acumuladores.

La información de las ventas se mantiene en memoria mientras el programa está en ejecución, sin utilizar arreglos, archivos de almacenamiento ni funciones adicionales creadas por el programador.