
#include <iostream>
using namespace std;

class Persona {
private:
    string nombre;
    string apellido;

public:
    // Forma 1: Constructor por defecto (de esta forma no estamos obligando a que el usuario de la clase inicialice los atributos al crear el objeto, pero si lo hace, se inicializan con valores por defecto)
    Persona() = default;

    // Forma 2: Constructor con parámetros (de esta forma estamos oblgando a que el usuario de la clase inicialice los atributos al crear el objeto)
    Persona(string nombre, string apellido) : nombre(nombre), apellido(apellido) {}


    void setNombre(string nombre){
        this -> nombre = nombre;
    }
    string getNombre(){
        return nombre;
    }


    void setApellido(string apellido){
        this -> apellido = apellido;
    }
    string getApellido(){
        return apellido;
    }

    // Ejemplo para obtener nombre completo
    string getNombreCompleto(){
        return nombre + " " + apellido;
    }
    void mostrar() {
        cout << "Nombre: " << nombre << endl;
        cout << "Apellido: " << apellido << endl;
    }
};


int main() {
    Persona p1;
    p1.setNombre("Juan");
    p1.setApellido("Garcia");
    p1.mostrar();
    // Forma 1
    cout << "Nombre completo: " << p1.getNombre() << " " << p1.getApellido() << endl;
    // Forma 2
    cout << "Nombre completo: " << p1.getNombreCompleto() << endl;


    Persona p2("Maria", "Lopez");
    p2.mostrar();


    return 0;
}