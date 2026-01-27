# En Python los comentarios son con almohadilla
# No hace falta funcion main() obligatoria, el codigo se ejecuta directo.

# 1. Tipado Dinámico: No decimos "int" o "char". Python lo "adivina".
nombre = "Dev"       # String
edad = 25            # Entero (int)
altura = 1.75        # Flotante (float)
es_estudiante = True # Booleano (bool)

# 2. Imprimir en pantalla
print("--- DATOS DEL USUARIO ---")

# 3. f-strings (La forma profesional)
# Pones una 'f' antes de las comillas y usas llaves {} para las variables
print(f"Hola {nombre}, bienvenido a Python.")
print(f"Tienes {edad} años y mides {altura} metros.")

# 4. Operaciones directas
anio_nacimiento = 2026 - edad
print(f"Naciste aproximadamente en {anio_nacimiento}.")

# 5. Type (Para saber qué es cada cosa)
print(f"\nEl tipo de dato de 'altura' es: {type(altura)}")