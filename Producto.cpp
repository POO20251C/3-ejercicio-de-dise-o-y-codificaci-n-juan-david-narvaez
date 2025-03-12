#include "Producto.h"

Producto::Producto(int id, string nombre, double precio, int stock) : id(id), nombre(nombre), precio(precio), stock(stock) {}

void Producto::agregarStock(int cantidad) {
    stock += cantidad;
}

bool Producto::disminuirStock(int cantidad) {
    if (stock >= cantidad) {
        stock -= cantidad;
        return true;
    }
    return false;
}

int Producto::getStock() const {
    return stock;
}

int Producto::getId() const { // Implementación agregada
    return id;
}

string Producto::getNombre() const {
    return nombre;
}

double Producto::getPrecio() const {
    return precio;
}