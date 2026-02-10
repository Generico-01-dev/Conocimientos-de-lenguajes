# Fundamentos de Java

Apuntes básicos sobre la estructura, sintaxis y ejecución en Java.

## 1. Estructura Básica del Código

En Java, todo el código debe estar contenido dentro de clases. A continuación se muestra la anatomía básica de un archivo Java.

```java
package prueba.app; // Definición del paquete (agrupación de clases)

import java.util.Scanner; // Importación de librerías necesarias

// Definición de la clase principal
public class Prueba {

    // Método main: Punto de entrada de la aplicación
    // Modificadores: public (acceso), static (sin instancia), void (sin retorno)
    public static void main(String[] args) {
        
        // Creación de objetos (Instanciación)
        Scanner leer = new Scanner(System.in);

        // Declaración de variables (Java es fuertemente tipado)
        int a, b; 
    }
}
```

## 2. Entrada y Salida de Datos

### Métodos de Salida (System.out)

| Método | Descripción |
| :--- | :--- |
| `print()` | Imprime texto sin salto de línea al final. |
| `println()` | Imprime texto y agrega un salto de línea al final. |
| `printf()` | Imprime texto con formato utilizando especificadores. |

**Especificadores de formato para `printf`:**
* `%s`: Cadena de caracteres (String).
* `%d`: Números enteros (int, long).
* `%f`: Números decimales (float, double).

*Ejemplo:*
```java
System.out.printf("Tu nombre es %s y tienes %d años", nombre, edad);
```

## 3. Compilación y Ejecución

Existen diversas formas de probar y ejecutar código Java desde la terminal.

### Opción A: Ejecución Directa (Java 11+)
Para pruebas rápidas en un solo archivo fuente.
1.  Crear el archivo `NombreArchivo.java`.
2.  Ejecutar en terminal:
    ```bash
    java NombreArchivo.java
    ```

### Opción B: Compilación y Ejecución (Estándar)
Genera el bytecode (`.class`) antes de ejecutar.
1.  Compilar el código fuente:
    ```bash
    javac NombreArchivo.java
    ```
2.  Esto genera `NombreArchivo.class`.
3.  Ejecutar la clase compilada:
    ```bash
    java NombreArchivo
    ```

### Opción C: JShell (REPL)
Terminal interactiva para probar fragmentos de código, operaciones y variables sin crear archivos.
* **Iniciar:** Escribir `jshell` en la terminal.
* **Uso:** Permite operaciones aritméticas y lógica simple.
* **Salir:** Escribir `/exit`.

## 4. Operadores

### Operadores Aritméticos
Se sigue la jerarquía estándar de operaciones (paréntesis, multiplicación/división, suma/resta).

| Símbolo | Operación |
| :---: | :--- |
| `+` | Suma |
| `-` | Resta |
| `*` | Multiplicación |
| `/` | División |
| `%` | Módulo (Resto de la división) |

### Operadores de Asignación

| Operador | Ejemplo | Equivalencia |
| :---: | :--- | :--- |
| `=` | `a = 10` | Asignación simple |
| `+=` | `a += 2` | `a = a + 2` |
| `-=` | `a -= 2` | `a = a - 2` |
| `*=` | `a *= 2` | `a = a * 2` |
| `/=` | `a /= 2` | `a = a / 2` |
| `%=` | `a %= 2` | `a = a % 2` |

### Operadores Relacionales
Devuelven un valor booleano (`true` o `false`).

| Símbolo | Descripción |
| :---: | :--- |
| `==` | Igualdad |
| `!=` | Diferencia (No igual) |
| `>` | Mayor que |
| `<` | Menor que |
| `>=` | Mayor o igual que |
| `<=` | Menor o igual que |

### Operadores Lógicos

| Símbolo | Operador | Descripción |
| :---: | :--- | :--- |
| `!` | NOT | Negación lógica |
| `&&` | AND | Y lógico (ambos deben ser true) |
| `\|\|` | OR | O lógico (uno debe ser true) |

### Incrementos y Decrementos

| Operación | Sintaxis | Descripción |
| :--- | :--- | :--- |
| **Post-incremento** | `a++` | Usa el valor actual y luego incrementa (`a = a + 1`). |
| **Pre-incremento** | `++a` | Incrementa el valor y luego lo usa. |
| **Post-decremento** | `a--` | Usa el valor actual y luego decrementa (`a = a - 1`). |
| **Pre-decremento** | `--a` | Decrementa el valor y luego lo usa. |

## 5. Caracteres de Escape (Secuencias de Escape)

Caracteres especiales utilizados dentro de cadenas de texto.

| Secuencia | Descripción |
| :---: | :--- |
| `\n` | Salto de línea |
| `\t` | Tabulador |
| `\b` | Retroceso (Borra un carácter a la izquierda) |
| `\\` | Imprime el carácter barra invertida (`\`) |