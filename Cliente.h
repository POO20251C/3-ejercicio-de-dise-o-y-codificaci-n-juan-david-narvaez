#ifndef CLIENTE_H
#define CLIENTE_H
#include <iostream>
#include <vector>
#include "Producto.h"
using namespace std;

class Cliente {
private:
    int id;
    string nombre;
    vector<string> compras;
public:
    Cliente(int id, string nombre);
    void agregarCompra(string producto);
    void listarCompras() const;
    string getNombre() const;
    int getId() const; // Método agregado
};

#endif