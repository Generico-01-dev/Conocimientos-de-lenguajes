#include <iostream>
using namespace std;

class Persona {
public:
    string nombre;
    string apellido;

    void mostrar() {
        cout << "Nombre: " << nombre << endl;
        cout << "Apellido: " << apellido << endl;
    }
};


int main() {
    Persona p1;
    p1.nombre = "Juan";
    p1.apellido = "Garcia";

    p1.mostrar();

    return 0;
}