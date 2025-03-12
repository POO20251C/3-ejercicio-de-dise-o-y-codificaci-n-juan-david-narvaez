#ifndef TIENDA_H
#define TIENDA_H
#include <iostream>
#include <vector>
#include "Producto.h"
#include "Cliente.h"
using namespace std;

class Tienda {
private:
    vector<Producto> productos;
    vector<Cliente> clientes;
public:
    void registrarCliente(Cliente cliente);
    void agregarProducto(Producto producto);
    bool realizarVenta(int clienteId, int productoId, int cantidad);
    void mostrarInventario() const;
    vector<Cliente> getClientes() const; // ← Agregar esto
};

#endif
