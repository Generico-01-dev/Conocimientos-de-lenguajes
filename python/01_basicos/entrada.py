print("--- CALCULADORA DE PROPINAS ---")

# input() SIEMPRE devuelve un texto (string).
# Si queremos un numero, tenemos que convertirlo (castearlo) al momento.

cuenta = float(input("¿De cuanto es la cuenta?: "))
porcentaje = int(input("¿Que porcentaje de propina quieres dejar? (Ej: 10): "))

# Calculo
propina = cuenta * (porcentaje / 100)
total = cuenta + propina

# Redondear a 2 decimales
print(f"\nLa propina es: {round(propina, 2)}€")
print(f"El total a pagar es: {round(total, 2)}€")