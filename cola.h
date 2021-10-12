/*
 * Click nbfs://nbhost/SystemFileSystem/Templates/Licenses/license-default.txt to change this license
 * Click nbfs://nbhost/SystemFileSystem/Templates/cFiles/file.h to edit this template
 */

/* 
 * File:   cola.h
 * Author: juan
 *
 * Created on 12 de octubre de 2021, 13:41
 */

#ifndef COLA_H
#define COLA_H

#include <stdio.h>
#include <stdlib.h>

typedef int TIPO_ELEMENTO;

typedef struct NODO_COLA {
    TIPO_ELEMENTO e;
    struct NODO_COLA* siguiente;
} NODO_COLA;

typedef struct {
    NODO_COLA *frente, *final;
} COLA;
/**
 * Elimina la referencia a la cola
 * @param 
 */
void vaciar_cola(COLA*);
/**
 * Agrega al final de la cola el elemento indicado
 * @param 
 * @param 
 */
void agregar_a_cola(COLA*, TIPO_ELEMENTO);
/**
 * Extrae de la cola el primer elemento
 * @param 
 */
void sacar_de_cola(COLA*);
/**
 * Obtiene el primer elemento en la cola
 * @param c
 * @return El primer elemento en la cola
 */
TIPO_ELEMENTO get_primero_cola(COLA c);
/**
 * Indica si una cola está vacía o no
 * @param c
 * @return Retorna NULL en caso esté vacia, caso contrario devuelve un valor 
 * cualquiera indicando la posicion de memoria del primer elemento
 */
int cola_es_vacia(COLA c);

#endif /* COLA_H */

