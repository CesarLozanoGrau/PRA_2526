#ifndef BRAZO_ROBOTICO_H
#define BRAZO_ROBOTICO_H

class BrazoRobotico {
private:
    double x, y, z;    // Coordenadas en el espacio 3D
    bool sosteniendo;  // Si el robot está sujetando un objeto

public:
    BrazoRobotico(double x = 0, double y = 0, double z = 0, bool sosteniendo = false);
    double getX() const;
    double getY() const;
    double getZ() const;
    bool estaSosteniendo() const;
    
    void coger();
    void soltar();
    void mover(double nuevoX, double nuevoY, double nuevoZ);
};

#endif

