def lunghezze_parole(lista):
    lunghezze = []
    for parola in lista:
        lunghezze.append(len(parola))
    return lunghezze

lista_parole = []
while True:
    parola = input("Inserisci una parola (o premi invio per terminare): ")
    if parola == "":
        break
    lista_parole.append(parola)

lista_lunghezze = lunghezze_parole(lista_parole)
print("Le lunghezze delle parole inserite sono:", lista_lunghezze)