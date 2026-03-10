
#include <iostream>
#include <string>
#include <vector>
using namespace std;

class Persona {
//private:
protected: // De esta forma los atributos y métodos de la clase base (Persona) serían accesibles desde la clase derivada (Empleado), pero no desde fuera de la clase derivada.
    string nombre;
    string apellido;

public:
    //CONSTRUCTORES
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
        cout << "Apellido: " << apellido << endl << endl;
    }

    // IMPORTANTE: Con la palabra virtual estamos indicando que este metodo puede ser sobreescito en las clases derivadas
    virtual void mostrarInformacion() {
            /*cout << "Nombre: " << getNombre() << endl;
            cout << "Apellido: " << getApellido() << endl;
            cout << " Departamento: " << departamento << endl;*/

            cout << "Nombre: " << nombre << endl;
            cout << "Apellido: " << apellido << endl;

        }

    static void imprimirPersonas(vector<Persona*> persona){
        for (auto p : persona) {
            p -> mostrarInformacion();
        }
    }
};

// De esta forma estamos creando una clase Empleado que hereda de la clase persona, es decir, la clase Empleado tiene todos los atributos y métodos de la clase Persona, además de los que podamos agregarle posteriormente.
/* Importante: Es necesaria la palabra reservada "public" para indicar que la herencia es pública, lo que significa que los miembros públicos 
de la clase base (Persona) serán públicos en la clase derivada (Empleado). Si no se especifica el tipo de herencia, por defecto será privada, 
lo que significa que los miembros públicos de la clase base serán privados en la clase derivada, y no podremos acceder a ellos desde fuera de 
la clase derivada.*/
class Empleado : public Persona {
    string departamento;

    public:
        Empleado() = default;
        Empleado(string nombre, string apellido, string departamento) : Persona(nombre, apellido), departamento(departamento){}

        void setDepartamento(string departamento){
            this -> departamento = departamento;
        }

        string getDepartamento(){
            return departamento;
        }

        // IMPORTANTE: Si en lugar de poner getNombre quisieramos obtenerlo simplemente por nombre cambiariamos el private de Persona por protected, ya que de esta forma los atributos y métodos de la clase base (Persona) serían accesibles desde la clase derivada (Empleado), pero no desde fuera de la clase derivada.
        // IMPORTANTE 2: Con la palabra override estamos indicando que el metodo esta sobreescribiendo un metodo de la clase padre
        void mostrarInformacion() override {
            /*cout << "Nombre: " << getNombre() << endl;
            cout << "Apellido: " << getApellido() << endl;
            cout << " Departamento: " << departamento << endl;*/

            cout << "Nombre: " << nombre << endl;
            cout << "Apellido: " << apellido << endl;
            cout << "Departamento: " << departamento << endl;

        }
    };

int main() {
    Persona p1;
    p1.setNombre("Juan");
    p1.setApellido("Garcia");
    /*p1.mostrar();
    // Forma 1
    cout << "Nombre completo: " << p1.getNombre() << " " << p1.getApellido() << endl;
    // Forma 2
    cout << "Nombre completo: " << p1.getNombreCompleto() << endl;


    Persona p2("Maria", "Lopez");
    p2.mostrar();
    */


    Empleado e1;
    e1.setNombre("Benito");
    e1.setApellido("Carrizosa");
    e1.mostrar();

    /*Empleado e2("Daniel", "Millan", "Policia");
    //Forma 1
    e2.mostrar();
    cout << "Departamento: " << e2.getDepartamento() << endl << endl;

    
    //Forma 2 
    e2.mostrarInformacion();
    */

    // De este ejemplo podemos deducir que podemos tratar a un empleado como una persona
    vector<Persona*> personas;
    personas.push_back(&p1);
    personas.push_back(&e1);

    /*for (auto persona : personas) {
        persona -> mostrarInformacion();
    }*/

    Persona::imprimirPersonas(personas);


    return 0;
}