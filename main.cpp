#include <iostream>
#include "Tienda.h"

using namespace std;

int main() {
    Tienda tienda;


    Producto p1(1, "Balón", 20.0, 10);
    Producto p2(2, "Raqueta", 50.0, 5);


    tienda.agregarProducto(p1);
    tienda.agregarProducto(p2);


    Cliente c1(1, "Juan");
    tienda.registrarCliente(c1);


    if (tienda.realizarVenta(1, 1, 2)) {
        cout << "Venta realizada con éxito.\n";
    } else {
        cout << "Error al realizar la venta.\n";
    }


    for (const auto& cliente : tienda.getClientes()) {  // Asegúrate de que exista `getClientes()`
        if (cliente.getId() == 1) {
            cliente.listarCompras();
        }
    }


    tienda.mostrarInventario();

    return 0;
}
