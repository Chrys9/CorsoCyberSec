import math #Utilizzo della libreria Math.

scelta = input("Seleziona una figura geometrica (quadrato, cerchio, rettangolo): ") #Richiesta all utente della scelta di una figura.

# Calcola il perimetro in base alla scelta dell'utente.
if scelta == "quadrato":
    lato = float(input("Inserisci la lunghezza del lato: ")) #Inserimento di un valore dall esterno.
    perimetro = lato * 4 #Esecuzione matematica con risultato associato al parametro Perimetro.
    print("Il perimetro del quadrato è:", perimetro) #Stampa su schermo del valore di Perimetro.
    
elif scelta == "cerchio":
    raggio = float(input("Inserisci la lunghezza del raggio: "))
    perimetro = 2 * math.pi * raggio
    print("Il perimetro del cerchio è:", perimetro)
    
elif scelta == "rettangolo": 
    base = float(input("Inserisci la lunghezza della base: "))
    altezza = float(input("Inserisci la lunghezza dell'altezza: "))
    perimetro = (base + altezza ) *2
    print("Il perimetro del rettangolo è:", perimetro)

else:
    print("Scelta non valida.")
    
    
