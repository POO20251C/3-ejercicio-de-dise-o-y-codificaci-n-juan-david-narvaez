#include "Tienda.h"

void Tienda::registrarCliente(Cliente cliente) {
    clientes.push_back(cliente);
}

void Tienda::agregarProducto(Producto producto) {
    productos.push_back(producto);
}

bool Tienda::realizarVenta(int clienteId, int productoId, int cantidad) {
    for (auto& producto : productos) {
        if (productoId == producto.getId() && producto.disminuirStock(cantidad)) {
            for (auto& cliente : clientes) {
                if (clienteId == cliente.getId()) {
                    cliente.agregarCompra(producto.getNombre());
                    return true;
                }
            }
        }
    }
    return false;
}

void Tienda::mostrarInventario() const {
    cout << "Inventario de productos:\n";
    for (const auto& producto : productos) {
        cout << producto.getNombre() << " - Stock: " << producto.getStock() << endl;
    }
}

vector<Cliente> Tienda::getClientes() const {
    return clientes;
}
