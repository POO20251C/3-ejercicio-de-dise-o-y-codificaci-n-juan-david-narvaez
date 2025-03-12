#include "Cliente.h"

Cliente::Cliente(int id, string nombre) : id(id), nombre(nombre) {}

void Cliente::agregarCompra(string producto) {
    compras.push_back(producto);
}

void Cliente::listarCompras() const {
    cout << "Compras de " << nombre << ":\n";
    for (const auto& compra : compras) {
        cout << " - " << compra << endl;
    }
}

string Cliente::getNombre() const {
    return nombre;
}

int Cliente::getId() const { // Implementación agregada
    return id;
}