/*
 * Click nbfs://nbhost/SystemFileSystem/Templates/Licenses/license-default.txt to change this license
 * Click nbfs://nbhost/SystemFileSystem/Templates/cFiles/file.c to edit this template
 */
#include <stdio.h>
#include <stdlib.h>
#include "cola.h"

int cola_es_vacia(COLA c) {
    return c.frente == NULL;
}

void agregar_a_cola(COLA* cola, TIPO_ELEMENTO elemento) {
    if (cola_es_vacia(*cola) == 1) {
        cola->frente == NULL;
        cola->final == NULL;
    }
    NODO_COLA * a;
    a = (NODO_COLA*) malloc(sizeof (NODO_COLA));
    a->e = elemento;
    a->siguiente = NULL;
    if (cola_es_vacia(*cola)) {
        cola->frente = a;
    } else {
        cola->final->siguiente = a;
    }
}

TIPO_ELEMENTO get_primero_cola(COLA c) {
    if (cola_es_vacia(c)) {
        puts("Underflow");
        exit(1);
    }
    return c.frente->e;
}

void sacar_de_cola(COLA* cola) {
    if (!cola_es_vacia(*cola)) {
        NODO_COLA *a;
        a = cola->frente;
        cola->frente = a->siguiente;
        free(a);
    }
}

void vaciar_cola(COLA* cola) {
    while (!cola_es_vacia(*cola)) {
        sacar_de_cola(cola);
    }
}