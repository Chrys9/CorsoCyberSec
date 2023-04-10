import random
import string

def genera_password(scelta):
    lunghezza = 8 if scelta == "S" else 20
    caratteri = string.ascii_letters + string.digits + string.punctuation
    password = "".join(random.choice(caratteri) for i in range(lunghezza))
    return password

scelta = input("Vuoi una password semplice (S) o complessa (C)? ")
while scelta not in ["S", "C"]:
    scelta = input("Scelta non valida. Vuoi una password semplice (S) o complessa (C)? ")

password = genera_password(scelta)
print("La tua password è:", password)