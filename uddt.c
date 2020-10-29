#include "stdlib.h"
#include "stdio.h"
#include "string.h"

struct client
{
    char Name[50];
    char Id[10];
    float Credit;
    char Address[100];
};

int main(int argc, char const *argv[])
// """ Para este ejercicio el profesor no colocó int antes de main y logro compilar y ejecutar el .exe en consola pero en mi caso, despues de estar leyendo el error varias veces, cai en cuenta de que me pedia el int antes de main y con eso lograr compilar y ejecutar el .exe
// """
{
    struct client client1 = {0};
    strcpy(client1.Name , "Camilo Valencia");
    strcpy(client1.Id , "0000000001");
    client1.Credit = 1000000;
    strcpy(client1.Address , "Calle 1, Carrera 1 ciudad bolivar");

    printf("The client name is: %s \n", client1.Name);
    printf("The client Id is: %s \n", client1.Id);
    printf("The client Credit is: %f \n", client1.Credit);
    printf("The client Address is: %s \n", client1.Address);


    return 0;
}

