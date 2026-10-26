#include <iostream>
#include <limits>
#include <iomanip>
using namespace std;

int main() {
    int opcion = 0;
    double precio = 0;
    int cantidad = 0;
    double subtotal = 0;

    double porcentajeDescuento = 0;
    double descuento = 0;
    double montoConDescuento = 0;
    double iva = 0;
    double totalPagar = 0;
    double pagoRecibido = 0;
    double cambio = 0;

    int numeroVentas = 0;

    double totalVendido = 0;
    double ventaMayor = 0;
    double ventaMenor = 0;
    double promedioVentas = 0;
    double totalDescuentos = 0;

    do {
        cout<< "SISTEMA DE CAJA"<< endl;
        
        cout << "1. Registrar venta"<< endl;
        cout << "2. Ver resumen parcial del dia"<< endl;
        cout << "3. Cerrar caja y salir"<< endl;

        cout << "\nSeleccione una opcion: ";
cin >> opcion;

if (cin.fail()) {
    cout << "Error: debe ingresar una opcion numerica." << endl;

    cin.clear();
    cin.ignore(numeric_limits<streamsize>::max(), '\n');

    opcion = 0;
}
else if (cin.peek() != '\n') {
    cout << "Error: debe ingresar una opcion entera." << endl;

    cin.ignore(numeric_limits<streamsize>::max(), '\n');

    opcion = 0;
}

        if (opcion == 1) {

    subtotal = 0;
    int productosregistrados = 0;

    cout << "\nREGISTRAR VENTA" << endl;

    do {

        do {
    cout << "\nIngrese el precio del producto (0 para terminar): Q";
    cin >> precio;

    if (cin.fail()) {
        cout << "Error: debe ingresar un numero valido." << endl;

        cin.clear();
        cin.ignore(numeric_limits<streamsize>::max(), '\n');

        precio = -1;
    }
    else if (cin.peek() != '\n') {
    cout << "Error: el precio contiene caracteres no validos." << endl;

    cin.ignore(numeric_limits<streamsize>::max(), '\n');

    precio = -1;
}
    else if (precio < 0) {
        cout << "Error: el precio no puede ser negativo." << endl;
    }
    
} while (precio < 0);

        if (precio > 0) {

    do {
    cout << "Ingrese la cantidad (1 a 100): ";
    cin >> cantidad;

    if (cin.fail()) {
        cout << "Error: debe ingresar un numero entero." << endl;

        cin.clear();
        cin.ignore(numeric_limits<streamsize>::max(), '\n');

        cantidad = 0;
    }
    else if (cin.peek() != '\n') {
        cout << "Error: no se permiten cantidades decimales." << endl;

        cin.ignore(numeric_limits<streamsize>::max(), '\n');

        cantidad = 0;
    }
    else if (cantidad < 1 || cantidad > 100) {
        cout << "Error: la cantidad debe estar entre 1 y 100." << endl;
    }

} while (cantidad < 1 || cantidad > 100);

    subtotal = subtotal + (precio * cantidad);
    productosregistrados++;

    cout << "\nSubtotal acumulado: Q" << subtotal << endl;

}
        else if (precio < 0) {

            cout << "\nError: el precio no puede ser negativo." << endl;

        }

    } while (precio != 0);

    if (productosregistrados == 0) {
    cout << "\nNo se registraron productos." << endl;
    cout << "Venta cancelada." << endl;
}
else {
    cout << "\nVenta registrada correctamente." << endl;
    cout << "Subtotal final: Q" << subtotal << endl;

    if (subtotal < 100) {
        porcentajeDescuento = 0;
    }
    else if (subtotal < 500) {
        porcentajeDescuento = 0.05;
    }
    else {
        porcentajeDescuento = 0.10;
    }

    descuento = subtotal * porcentajeDescuento;
    montoConDescuento = subtotal - descuento;
    
    iva = montoConDescuento * 0.12;
    totalPagar = montoConDescuento + iva;

    cout << "Descuento aplicado: Q" << descuento << endl;
    cout << "Monto con descuento: Q" << montoConDescuento << endl;
    cout << "IVA (12%): Q" << iva << endl;
    cout << "Total a pagar: Q" << totalPagar << endl;

    do {
    cout << "\nIngrese el pago recibido: Q";
    cin >> pagoRecibido;

    if (cin.fail()) {
        cout << "Error: debe ingresar un numero valido." << endl;

        cin.clear();
        cin.ignore(numeric_limits<streamsize>::max(), '\n');

        pagoRecibido = -1;
    }
    else if (cin.peek() != '\n') {
        cout << "Error: el pago contiene caracteres no validos." << endl;

        cin.ignore(numeric_limits<streamsize>::max(), '\n');

        pagoRecibido = -1;
    }
    else if (pagoRecibido < totalPagar) {
        cout << "Error: el pago es insuficiente." << endl;
    }

} while (pagoRecibido < totalPagar);

cambio = pagoRecibido - totalPagar;

cout << fixed << setprecision(2);

cout << "           RECIBO DE VENTA          " << endl;

cout << "Subtotal:           Q" << subtotal << endl;
cout << "Descuento:          Q" << descuento << endl;
cout << "Monto descontado:   Q" << montoConDescuento << endl;
cout << "IVA (12%):          Q" << iva << endl;
cout << "------------------------------------" << endl;
cout << "TOTAL A PAGAR:      Q" << totalPagar << endl;
cout << "Pago recibido:      Q" << pagoRecibido << endl;
cout << "Cambio:             Q" << cambio << endl;

cout << "       Gracias por su compra        " << endl;

numeroVentas++;

totalVendido = totalVendido + totalPagar;
totalDescuentos = totalDescuentos + descuento;

if (numeroVentas == 1) {
    ventaMayor = totalPagar;
    ventaMenor = totalPagar;
}
else {
    if (totalPagar > ventaMayor) {
        ventaMayor = totalPagar;
    }

    if (totalPagar < ventaMenor) {
        ventaMenor = totalPagar;
    }
}
}

}
        
        else if (opcion == 2) {

    cout << "        RESUMEN DEL DIA             " << endl;

    if (numeroVentas == 0) {

        cout << "Todavia no se han realizado ventas." << endl;

    }
    else {

        promedioVentas = totalVendido / numeroVentas;

        cout << fixed << setprecision(2);

        cout << "Numero de ventas: " << numeroVentas << endl;
        cout << "Total vendido: Q" << totalVendido << endl;
        cout << "Venta mayor: Q" << ventaMayor << endl;
        cout << "Venta menor: Q" << ventaMenor << endl;
        cout << "Promedio por venta: Q" << promedioVentas << endl;
        cout << "Total de descuentos: Q" << totalDescuentos << endl;

    }

    cout << "---------------------------------------" << endl;
}
       else if (opcion == 3) {
    
    cout << "          CIERRE DE CAJA           " << endl;

    cout << "Numero de ventas realizadas: " << numeroVentas << endl;
    cout << fixed << setprecision(2);
    cout << "Total vendido: Q" << totalVendido << endl;

    cout << "\nCaja cerrada correctamente." << endl;
    cout << "Gracias por utilizar el sistema." << endl;
}
        else {
            cout << "\nError: opcion no valida." << endl;
        }

    }   while (opcion != 3);

    return 0;
}