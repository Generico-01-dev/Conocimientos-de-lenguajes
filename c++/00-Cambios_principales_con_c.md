# Conceptos Básicos de la Programación Orientada a Objetos (POO)

Este apartado es un glosario rápido para entender los fundamentos de la POO en C++.

## Estructura Básica

- **Clase:** Es una plantilla o molde que describe la estructura, propiedades y comportamiento de una entidad.
- **Objeto / Instancia:** Es un elemento concreto creado a partir de una clase. Es un ejemplo específico que ya ocupa espacio en la memoria.
- **Instanciar:** Es el acto o proceso de crear un objeto a partir de una clase.
- **Atributos (*Data members*):** Son las variables internas de una clase que definen el estado o las características de un objeto.
- **Métodos:** Son las funciones definidas dentro de una clase. Determinan el comportamiento o las acciones que puede realizar un objeto.
- **Constructor:** Es un método especial que se ejecuta automáticamente al instanciar un objeto. Sirve para inicializar los atributos y dejar el objeto preparado para su uso (puede recibir valores iniciales o usar los de por defecto).

## Los 4 Pilares de la POO

- **Abstracción:** Consiste en reducir y simplificar la complejidad de un sistema mostrando al usuario solo los detalles esenciales e ignorando el funcionamiento interno (el concepto de "caja negra").
- **Encapsulación:** Es el mecanismo que protege los datos internos de una clase (haciéndolos privados) y permite interactuar con ellos únicamente a través de una interfaz pública y controlada (como los métodos *getters* y *setters*).
- **Herencia:** Permite crear nuevas clases basadas en clases ya existentes, fomentando la reutilización de código.
  - **Clase Padre (Superclase):** Es la clase base original de la que se heredan las características.
  - **Clase Hija (Subclase):** Es la clase que hereda los atributos y métodos de la clase padre. Además, puede incluir los suyos propios.
- **Polimorfismo:** Es la capacidad de tratar varios objetos de distintas clases hijas a través de la interfaz de su clase base común. Permite que un mismo método o acción se ejecute de formas diferentes dependiendo de qué objeto en específico lo esté invocando.