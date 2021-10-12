/*
 * Click nbfs://nbhost/SystemFileSystem/Templates/Licenses/license-default.txt to change this license
 * Click nbfs://nbhost/SystemFileSystem/Templates/cFiles/file.c to edit this template
 */
#include <stdio.h>
#include <stdlib.h>
#include "pila.h"

int pila_es_vacia(PILA* pila) {
    return (pila == NULL ? 1 : 0);
}

void agregar_a_pila(PILA** pila, TipoElemento e2) {
    PILA* nodo;
    nodo = (PILA*) malloc(sizeof (PILA*));
    if (nodo == NULL) {
        printf("Not enough memory");
    } else {
        nodo->e = e2;
    }
}

TipoElemento get_primero_pila(PILA* pila) {
    PILA* cima;
    if (pila_es_vacia(pila)) {
        system(EXIT_SUCCESS);
    } else {
        cima->e = pila->e;
    }
    return cima->e;
}

void vaciar_pila(PILA** pila) {
    free(*pila);
    *pila = NULL;
}

/*void pila_borrar(PILA** pila) {
    PILA** nodoSuprimir;
    nodoSuprimir = pila;
    pila = (**pila)->siguiente;
    free(nodoSuprimir);
}*/