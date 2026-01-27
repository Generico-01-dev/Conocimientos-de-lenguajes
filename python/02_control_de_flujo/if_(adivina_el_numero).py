import random # Importamos la librería de aleatorios

print("--- JUEGO DE ADIVINANZA ---")
numero_secreto = random.randint(1, 10) 
intentos = 0
adivinado = False

while not adivinado:
    usuario = int(input("Adivina el número (1-10): "))
    intentos += 1
    
    if usuario == numero_secreto:
        print(f"¡Correcto! Lo has logrado en {intentos} intentos.")
        adivinado = True # Esto rompe el bucle while
    elif usuario < numero_secreto:
        print("Demasiado bajo...")
    else: # Si no es igual ni menor, tiene que ser mayor
        print("Demasiado alto...")