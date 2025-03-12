#ifndef PRODUCTO_H
#define PRODUCTO_H
#include <iostream>
using namespace std;

class Producto {
private:
    int id;
    string nombre;
    double precio;
    int stock;
public:
    Producto(int id, string nombre, double precio, int stock);
    void agregarStock(int cantidad);
    bool disminuirStock(int cantidad);
    int getStock() const;
    int getId() const; // Método agregado
    string getNombre() const;
    double getPrecio() const;
};

#endif