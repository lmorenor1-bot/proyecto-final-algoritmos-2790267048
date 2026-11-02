# Casos de prueba

Proyecto: Sistema de Caja para una Tienda  
Lenguaje: C++

## 1. Objetivo

Comprobar que el sistema de caja funcione correctamente al registrar ventas, validar datos, calcular descuentos, aplicar el IVA, procesar pagos y mostrar el resumen del día.

## 2. Pruebas de registro y validaciones

| N.º | Datos ingresados | Resultado esperado |
|---|---|---|
| 1 | Precio Q25, cantidad 2 | Subtotal Q50.00 |
| 2 | Precio -10 | Mostrar error por precio negativo |
| 3 | Precio `abc` | Mostrar error por entrada no numérica |
| 4 | Precio `25abc` | Rechazar caracteres incorrectos |
| 5 | Cantidad 0 | Solicitar nuevamente la cantidad |
| 6 | Cantidad 150 | Mostrar error por cantidad fuera del rango |
| 7 | Cantidad 2.5 | Rechazar cantidad decimal |
| 8 | Precio 0 sin registrar productos | Mostrar venta cancelada |
| 9 | Opción de menú `abc` | Mostrar error y repetir el menú |
| 10 | Opción de menú 5 | Mostrar opción no válida |

## 3. Pruebas de descuentos e IVA

| Subtotal | Descuento | IVA | Total esperado |
|---|---:|---:|---:|
| Q50.00 | Q0.00 | Q6.00 | Q56.00 |
| Q99.99 | Q0.00 | Q12.00 | Q111.99 |
| Q100.00 | Q5.00 | Q11.40 | Q106.40 |
| Q200.00 | Q10.00 | Q22.80 | Q212.80 |
| Q499.99 | Q25.00 | Q57.00 | Q531.99 |
| Q500.00 | Q50.00 | Q54.00 | Q504.00 |

Nota: Los valores se presentan redondeados a dos decimales.

## 4. Pruebas del pago y cambio

| Total a pagar | Pago ingresado | Resultado esperado |
|---|---|---|
| Q212.80 | Q250.00 | Cambio Q37.20 |
| Q212.80 | Q200.00 | Mostrar error por pago insuficiente |
| Q212.80 | `abc` | Mostrar error por entrada inválida |
| Q56.00 | Q56.00 | Cambio Q0.00 |

## 5. Prueba del resumen del día

Se registran tres ventas con los siguientes subtotales:

| Venta | Subtotal | Total después de descuento e IVA |
|---|---:|---:|
| 1 | Q50.00 | Q56.00 |
| 2 | Q200.00 | Q212.80 |
| 3 | Q500.00 | Q504.00 |

Resultados esperados:

- Número de ventas: 3
- Total vendido: Q772.80
- Venta mayor: Q504.00
- Venta menor: Q56.00
- Promedio por venta: Q257.60
- Total de descuentos: Q60.00

## 6. Prueba sin ventas

Entrada: Seleccionar la opción 2 sin registrar ninguna venta.

Resultado esperado: El programa debe mostrar el mensaje indicando que todavía no se han realizado ventas, sin intentar calcular el promedio.

## 7. Observaciones

Durante el desarrollo se realizaron pruebas de funcionamiento del menú principal, registro de productos, validaciones, descuentos, IVA, pago, cambio y resumen del día.

Los casos documentados permiten comprobar el comportamiento esperado del sistema. Las pruebas adicionales deben ejecutarse y verificarse antes de declarar que todas fueron satisfactorias.