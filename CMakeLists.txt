cmake_minimum_required(VERSION 3.10)

# Nombre del proyecto
project(TiendaDeportiva)
#Nombres: Christian David Ruiz Medina, Juan David Narvaez Gelpud

# Especificar el estándar de C++
set(CMAKE_CXX_STANDARD 17)
set(CMAKE_CXX_STANDARD_REQUIRED True)

# Agregar los archivos fuente
add_executable(tienda
        main.cpp
        Producto.cpp
        Cliente.cpp
        Tienda.cpp
)

# Incluir los directorios de encabezados
target_include_directories(tienda PRIVATE ${PROJECT_SOURCE_DIR})
