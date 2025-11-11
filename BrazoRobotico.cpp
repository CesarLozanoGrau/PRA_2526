#include "BrazoRobotico.h"
#include <iostream>

BrazoRobotico::BrazoRobotico(double x, double y, double z, bool sosteniendo) : x(x), y(y), z(z), sosteniendo(sosteniendo) {}

double BrazoRobotico::getX() const {
    return x;
}

double BrazoRobotico::getY() const {
    return y;
}

double BrazoRobotico::getZ() const {
    return z;
}

bool BrazoRobotico::estaSosteniendo() const {
    return sosteniendo;
}

void BrazoRobotico::coger() {
    if (!sosteniendo) {
        sosteniendo = true;
        std::cout << "El brazo está ahora sosteniendo un objeto." << std::endl;
    } else {
        std::cout << "El brazo ya está sosteniendo un objeto." << std::endl;
    }
}

void BrazoRobotico::soltar() {
    if (sosteniendo) {
        sosteniendo = false;
        std::cout << "El brazo ha soltado el objeto." << std::endl;
    } else {
        std::cout << "El brazo no está sosteniendo ningún objeto." << std::endl;
    }
}

void BrazoRobotico::mover(double nuevoX, double nuevoY, double nuevoZ) {
    x = nuevoX;
    y = nuevoY;
    z = nuevoZ;
    std::cout << "El brazo se ha movido a las nuevas coordenadas: (" << x << ", " << y << ", " << z << ")." << std::endl;
}

