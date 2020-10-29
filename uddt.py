"""Ejercicio para poder crear y usar una clase en python despues de ver la clase de user defined data types que estaba hecha en C
"""

class Hotel:

    def __init__(self, numero_max_huespedes, numero_max_estacionamiento):
        self.numero_max_huespedes = numero_max_huespedes
        self.numero_max_estacionamiento = numero_max_estacionamiento
        self.huespedes = 0


class Client:

    def __init__(self, name, id_client, credit, address):
        self.name = name
        self.id_client = id_client
        self.credit = credit
        self.address = address


name = input('¿Como te llamas? ')
address =input('¿Cual es la direccion de tu domicilio? ')


client = Client(name = name, id_client = '0000000001', credit = float(10000), address = address)


print(f'Nombre de cliente: {client.name}')
print(f'ID del cliente: {client.id_client}')
print(f'Credito del cliente: {client.credit}')
print(f'Direccion del cliente: {client.address}')

# hotel = Hotel(numero_max_huespedes = 20, numero_max_estacionamiento = 10)


# print(hotel.numero_max_huespedes)


if __name__ == '__main__':
    pass
