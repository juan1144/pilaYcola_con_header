/*
 * Click nbfs://nbhost/SystemFileSystem/Templates/Licenses/license-default.txt to change this license
 * Click nbfs://nbhost/SystemFileSystem/Templates/cFiles/main.c to edit this template
 */

/* 
 * File:   main.c
 * Author: juan
 *
 * Created on 11 de octubre de 2021, 13:52
 */

#include <stdio.h>
#include <stdlib.h>
//#include "pila.h"
#include "cola.h"

/*
 * 
 */
int main(int argc, char** argv) {

    /*PILA* pila = NULL;

    pila_es_vacia(pila);

    agregar_a_pila(&pila, 1.5);

    printf("Elemento de la cima: %f", get_primero_pila(pila));

    // pila_borrar(&pila);

    vaciar_pila(&pila);*/

    /*Este apartado es para la COLA*/

    COLA cola;
    //printf("Cola vacia: %i\n", cola_es_vacia(cola));
    agregar_a_cola(&cola, 8);
    printf("El primer elemento de la cola es: %i\n", get_primero_cola(cola));
    sacar_de_cola(&cola);
    agregar_a_cola(&cola, 12);
    printf("El primer elemento de la cola es: %i\n", get_primero_cola(cola));

    return (EXIT_SUCCESS);
}

