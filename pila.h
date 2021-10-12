/*
 * Click nbfs://nbhost/SystemFileSystem/Templates/Licenses/license-default.txt to change this license
 * Click nbfs://nbhost/SystemFileSystem/Templates/cFiles/file.h to edit this template
 */

/* 
 * File:   pila.h
 * Author: juan
 *
 * Created on 11 de octubre de 2021, 13:52
 */

#ifndef PILA_H
#define PILA_H

#include <stdio.h>
#include <stdlib.h>

typedef float TipoElemento;

typedef struct NODO_PILA {
    TipoElemento e;
    struct NODO_PILA *siguiente;
} NODO_PILA;
typedef NODO_PILA PILA;
/**
 * Permite saber si una pila se encuentra vacía
 * @param 
 * @return Devuelve 0 si está vacía, cualquier otro valor si es verdadero
 */
int pila_es_vacia(PILA*);
/**
 * Libera la referencia a la pila
 * @param 
 */
void vaciar_pila(PILA**);
/**
 * Agrega un nuevo elemento al tope de la pila
 * @param 
 * @param 
 */
void agregar_a_pila(PILA**, TipoElemento);
/**
 * Obtiene el elemento al tope de la pila
 * @param 
 * @return 
 */
TipoElemento get_primero_pila(PILA*);
/**
 * Extrae el elemento al tope de la pila
 * @param 
 */
void pila_borrar(PILA**);

#endif /* PILA_H */

