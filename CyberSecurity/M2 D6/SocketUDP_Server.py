import socket

SRV_ADDR = "192.168.1.65"
SRV_PORT = 4444

s = socket.socket (socket.AF_INET, socket.SOCK_DGRAM)

s.bind ((SRV_ADDR, SRV_PORT))


print("Server Avviato: in attesa di connessione alla porta 4444")

while 1:


        data,addr = s.recvfrom(1024)
        print(data, "Ricevuto da:" , addr)

