# Pseudocódigo del Sistema de Caja para una Tienda

## 1. Inicialización

```text
Inicio

    Definir opcion, cantidad, numeroVentas Como Entero
    Definir productosRegistrados Como Entero

    Definir precio, subtotal, descuento Como Real
    Definir porcentajeDescuento, montoConDescuento Como Real
    Definir iva, totalPagar, pagoRecibido, cambio Como Real
    Definir totalVendido, totalDescuentos Como Real
    Definir ventaMayor, ventaMenor, promedioVentas Como Real

    numeroVentas ← 0
    totalVendido ← 0
    totalDescuentos ← 0
    ventaMayor ← 0
    ventaMenor ← 0

```

## 2. Menú principal

```text
    Repetir

        Escribir "SISTEMA DE CAJA"
        Escribir "1. Registrar venta"
        Escribir "2. Ver resumen parcial del día"
        Escribir "3. Cerrar caja y salir"

        Leer opcion

        Mientras opcion no sea un entero válido Hacer
            Escribir "Error: ingrese una opción válida"
            Leer opcion
        FinMientras
```

## 3. Registro de ventas

```text
        Si opcion = 1 Entonces

            subtotal ← 0
            productosRegistrados ← 0

            Repetir

                Escribir "Ingrese el precio (0 para terminar)"
                Leer precio

                Mientras precio no sea numérico o precio < 0 Hacer
                    Escribir "Error: precio inválido"
                    Leer precio
                FinMientras

                Si precio > 0 Entonces

                    Repetir
                        Escribir "Ingrese cantidad (1 a 100)"
                        Leer cantidad

                        Si cantidad no es entera o está fuera del rango Entonces
                            Escribir "Error: cantidad inválida"
                        FinSi

                    Hasta Que cantidad sea entera y esté entre 1 y 100

                    subtotal ← subtotal + precio * cantidad
                    productosRegistrados ← productosRegistrados + 1

                    Escribir "Subtotal acumulado:", subtotal

                FinSi

            Hasta Que precio = 0

            Si productosRegistrados = 0 Entonces
                Escribir "Venta cancelada"
            SiNo
```

## 4. Cálculo del descuento e IVA

```text
                Si subtotal < 100 Entonces
                    porcentajeDescuento ← 0
                SiNo
                    Si subtotal < 500 Entonces
                        porcentajeDescuento ← 0.05
                    SiNo
                        porcentajeDescuento ← 0.10
                    FinSi
                FinSi

                descuento ← subtotal * porcentajeDescuento
                montoConDescuento ← subtotal - descuento

                iva ← montoConDescuento * 0.12
                totalPagar ← montoConDescuento + iva
```

## 5. Pago y recibo

```text
                Repetir

                    Escribir "Total a pagar:", totalPagar
                    Escribir "Ingrese el pago recibido"
                    Leer pagoRecibido

                    Si pagoRecibido no es numérico Entonces
                        Escribir "Error: pago inválido"
                    SiNo
                        Si pagoRecibido < totalPagar Entonces
                            Escribir "Error: pago insuficiente"
                        FinSi
                    FinSi

                Hasta Que pagoRecibido sea numérico
                       y pagoRecibido >= totalPagar

                cambio ← pagoRecibido - totalPagar

                Escribir "RECIBO DE VENTA"
                Escribir "Subtotal:", subtotal
                Escribir "Descuento:", descuento
                Escribir "Monto después del descuento:", montoConDescuento
                Escribir "IVA:", iva
                Escribir "Total:", totalPagar
                Escribir "Pago recibido:", pagoRecibido
                Escribir "Cambio:", cambio
```

## 6. Actualización del resumen

```text
                numeroVentas ← numeroVentas + 1
                totalVendido ← totalVendido + totalPagar
                totalDescuentos ← totalDescuentos + descuento

                Si numeroVentas = 1 Entonces
                    ventaMayor ← totalPagar
                    ventaMenor ← totalPagar
                SiNo
                    Si totalPagar > ventaMayor Entonces
                        ventaMayor ← totalPagar
                    FinSi

                    Si totalPagar < ventaMenor Entonces
                        ventaMenor ← totalPagar
                    FinSi
                FinSi

            FinSi
```

## 7. Resumen del día

```text
        SiNo
            Si opcion = 2 Entonces

                Si numeroVentas = 0 Entonces
                    Escribir "Todavía no se han realizado ventas"
                SiNo
                    promedioVentas ← totalVendido / numeroVentas

                    Escribir "Número de ventas:", numeroVentas
                    Escribir "Total vendido:", totalVendido
                    Escribir "Venta mayor:", ventaMayor
                    Escribir "Venta menor:", ventaMenor
                    Escribir "Promedio:", promedioVentas
                    Escribir "Descuentos acumulados:", totalDescuentos
                FinSi

            SiNo
                Si opcion = 3 Entonces
                    Escribir "Cierre de caja"
                    Escribir "Ventas realizadas:", numeroVentas
                    Escribir "Total vendido:", totalVendido
                    Escribir "Caja cerrada"
                SiNo
                    Escribir "Error: opción no válida"
                FinSi
            FinSi
        FinSi

    Hasta Que opcion = 3

Fin
```

## 8. Descripción del algoritmo

El algoritmo utiliza un ciclo principal para repetir el menú hasta que el usuario seleccione la opción de salir.

Dentro del registro de ventas se utiliza otro ciclo para ingresar varios productos. Se comprueba que los precios y cantidades sean válidos antes de calcular el subtotal.

Después se aplican los descuentos y el IVA, se solicita el pago y se calcula el cambio.

Finalmente, el sistema actualiza los contadores y acumuladores para mostrar el resumen de las ventas realizadas.