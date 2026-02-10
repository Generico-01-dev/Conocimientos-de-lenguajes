## Métodos comunes del objeto `Scanner`

La clase `Scanner` en Java se utiliza para leer datos desde diferentes fuentes de entrada (teclado, archivos, etc.).  
A continuación se muestran algunos de sus métodos más utilizados:

| Método | Descripción |
|------|------------|
| `next()` | Lee una palabra (una secuencia de caracteres delimitada por espacios en blanco) y devuelve un `String`. |
| `nextLine()` | Lee una línea completa (hasta un salto de línea) y devuelve un `String`. |
| `nextInt()` | Lee un número entero y devuelve un `int`. |
| `nextDouble()` | Lee un número decimal y devuelve un `double`. |
| `nextFloat()` | Lee un número decimal y devuelve un `float`. |
| `nextBoolean()` | Lee un valor booleano y devuelve un `boolean`. |
| `nextByte()` | Lee un valor y devuelve un `byte`. |
| `nextShort()` | Lee un valor y devuelve un `short`. |
| `nextLong()` | Lee un valor y devuelve un `long`. |
| `nextBigInteger()` | Lee un valor grande y devuelve un objeto `BigInteger`. |
| `nextBigDecimal()` | Lee un valor decimal de alta precisión y devuelve un objeto `BigDecimal`. |
| `close()` | Cierra la fuente de entrada asociada al `Scanner` y libera los recursos. Es recomendable llamarlo cuando ya no se necesite para evitar fugas de memoria. |

**Nota:** Es importante manejar correctamente el cierre del objeto `Scanner`, especialmente cuando se trabaja con archivos o recursos del sistema.
