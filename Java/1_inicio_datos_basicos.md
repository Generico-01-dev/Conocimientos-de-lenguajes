# Fundamentos de Java

Guía técnica sobre la estructura, sintaxis, compilación y elementos esenciales del lenguaje de programación Java.

---

## 1. Estructura Básica del Código

En Java, el paradigma orientado a objetos exige que todo el código resida dentro de una clase. A continuación se muestra la anatomía de un archivo Java estándar.

```java
package com.ejemplo.app; // Definición del paquete (namespace)

import java.util.Scanner; // Importación de librerías

// Definición de la clase (Debe coincidir con el nombre del archivo)
public class Main {

    // Método main: Punto de entrada de la ejecución
    // public: Acceso global
    // static: No requiere instancia previa
    // void: No retorna valor
    public static void main(String[] args) {
        
        // Instanciación de objetos
        Scanner scanner = new Scanner(System.in);

        // Declaración de variables (Tipado fuerte)
        int a;
        int b;
        
        System.out.println("Programa iniciado.");
    }
}
```

---

## 2. Compilación y Ejecución

Existen diferentes estrategias para transformar el código fuente (`.java`) en código ejecutable.

### Opción A: Ejecución Directa (Java 11+)

Ideal para pruebas rápidas de un solo archivo.

```bash
java NombreArchivo.java
```

### Opción B: Compilación Estándar

Genera el bytecode (`.class`) antes de ejecutar.

**Compilar:**

```bash
javac NombreArchivo.java
```

**Ejecutar:**

```bash
java NombreArchivo
```

### Opción C: JShell (REPL)

Herramienta de línea de comandos para evaluación inmediata.

```bash
jshell
```

Salir:

```bash
/exit
```

---

## 3. Entrada y Salida de Datos

### Métodos de Salida (`System.out`)

| Método      | Descripción |
|------------|------------|
| `print()`   | Imprime texto sin salto de línea al final. |
| `println()` | Imprime texto y agrega un salto de línea (`\n`). |
| `printf()`  | Imprime texto con formato. |

### Especificadores de formato comunes

- `%s` → Cadena de caracteres (`String`)
- `%d` → Números enteros (`int`, `long`)
- `%f` → Números decimales (`float`, `double`)

**Ejemplo:**

```java
System.out.printf("Usuario: %s | ID: %d", nombre, id);
```

---

## 4. Operadores

### Aritméticos

| Símbolo | Operación |
|----------|-----------|
| `+` | Suma |
| `-` | Resta |
| `*` | Multiplicación |
| `/` | División |
| `%` | Módulo (Resto de la división) |

### Asignación

| Operador | Equivalencia |
|----------|-------------|
| `=`  | Asignación simple |
| `+=` | `a = a + b` |
| `-=` | `a = a - b` |
| `*=` | `a = a * b` |
| `/=` | `a = a / b` |

### Relacionales

Devuelven un valor booleano (`true` o `false`).

| Símbolo | Descripción |
|----------|------------|
| `==` | Igualdad |
| `!=` | Diferencia |
| `>`  | Mayor que |
| `<`  | Menor que |
| `>=` | Mayor o igual que |
| `<=` | Menor o igual que |

### Lógicos

| Símbolo | Operador | Descripción |
|----------|----------|------------|
| `!`  | NOT | Negación lógica |
| `&&` | AND | Y lógico (ambos `true`) |
| `||` | OR  | O lógico (uno `true`) |

### Incrementos y Decrementos

| Sintaxis | Tipo | Descripción |
|-----------|--------|-------------|
| `a++` | Post-incremento | Usa el valor, luego incrementa. |
| `++a` | Pre-incremento  | Incrementa, luego usa el valor. |

---

## 5. Arrays y Matrices

### Arrays Unidimensionales

Estructuras de tamaño fijo. El índice comienza en `0`.

**Declaración e Inicialización:**

```java
// Opción 1: Definir tamaño
String[] nombres = new String[3]; 

nombres[0] = "Juan";
nombres[1] = "Benito";
nombres[2] = "Luis";
// nombres[3] lanzaría excepción (fuera de límites)

// Opción 2: Inicialización directa
int[] numeros = {10, 20, 30};

// Obtener longitud
System.out.println("Tamaño: " + nombres.length);
```

### Matrices (Multidimensionales)

```java
// Declaración [Filas][Columnas]
int[][] matriz = new int[2][3];

// Inicialización directa
int[][] tabla = {
    {1, 2, 3},
    {4, 5, 6}
};
```

---

## 6. Clases vs. Métodos

En Java no existen funciones "sueltas", todo pertenece a una clase.

- **Clase**: Es la plantilla que define el objeto (contiene atributos y métodos).
- **Método**: Es una subrutina o comportamiento dentro de la clase.

### Ejemplo Diferencial

```java
// CLASE: Define el concepto "Calculadora"
public class Calculadora {

    // MÉTODO: Define una acción específica de la calculadora
    public int sumar(int a, int b) {
        return a + b;
    }
    
    // MÉTODO: Otra acción
    public int restar(int a, int b) {
        return a - b;
    }
}
```

---

## 7. Sobrecarga de Métodos (Overloading)

Capacidad de definir múltiples métodos con el mismo nombre pero diferentes parámetros (cantidad o tipo) dentro de la misma clase.

### Ejemplos de Sobrecarga

```java
public class Impresora {

    // Método original: Recibe un String
    public void imprimir(String texto) {
        System.out.println("Texto: " + texto);
    }

    // Sobrecarga 1: Recibe un entero (Cambia el tipo de dato)
    public void imprimir(int numero) {
        System.out.println("Número: " + numero);
    }

    // Sobrecarga 2: Recibe dos parámetros (Cambia la cantidad de datos)
    public void imprimir(String texto, int copias) {
        for(int i = 0; i < copias; i++){
            System.out.println(texto);
        }
    }
}
```
