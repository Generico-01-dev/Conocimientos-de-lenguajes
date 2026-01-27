print("--- EJEMPLOS DE BUCLE FOR ---")

# CASO 1: Contar números (range)
# range(start, stop) -> El stop NO se incluye. range(1, 6) es 1,2,3,4,5
print("\n1. Contando del 1 al 5:")
for i in range(1, 6):
    print(f"Numero: {i}")

# CASO 2: Recorrer un String
palabra = "Python"
print(f"\n2. Deletreando '{palabra}':")
for letra in palabra:
    print(f"Letra: {letra}")

# CASO 3: Tabla de multiplicar rápida
num = 5
print(f"\n3. Tabla del {num}:")
for i in range(1, 11):
    print(f"{num} x {i} = {num * i}")