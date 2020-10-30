/* 1.- Crear pointer para saber que hay en front y rear
2.- colocar estos valores en -1 al inicializar
3.- incrementar en 1 el calor de rear cuando agreguemos un elemento
4.- retornar el valor de front al quitar un elemento e incrementar en 1 el valor de front al usar queue
5.- antes de agregar un elemeto revisar si hay espacio
6.- antes de remover un elemento revisamos que existan elementos
7.- asegurarnos de que al remover todos los elementos resetear nuestro front y rear a -1
y agregar el vaor de 0 a front al hacer nuestro primer enqueue */

#include<stdio.h>
#define SIZE 5

int values[SIZE], front = -1, rear = -1;

void enQueue(int value){
    if((rear-front) == SIZE -1)
        printf("Nuestro Queue esta lleno \n");
    else{
        if(front == -1)
            front = 0;
        rear ++;
        values[rear] = value;
        printf("Se inserto el valor %d correctamente\n", value);

    }
}

void deQueue(){
    if(front == -1)
        printf("Nuestro Queue esta vacio\n" );
    else{
        printf("se elimino el valor %d\n", values[front]);
        front++;
        if(front > rear)
        front = rear = -1;
    }
}

int main(int argc, char const *argv[])
{
    enQueue(1);
    enQueue(2);
    enQueue(3);
    enQueue(4);
    enQueue(5);
    enQueue(6);
    deQueue();
    enQueue(10);
    enQueue(20);
    return 0;
}