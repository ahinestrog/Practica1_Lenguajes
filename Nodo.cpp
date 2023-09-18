//
// Created by aleja on 9/14/2023.
//

#include "Nodo.h"

Nodo::Nodo(string e, string c, int dato) {
    //setters y getters
    this->evento = e;
    this->cientifico = c;
    this->dato = dato;
    this->siguiente = NULL;
    this->anterior = NULL;
}

Nodo::Nodo(string e, string c, int dato, Nodo *n) {
    //setters y getters
    this->evento = e;
    this->cientifico = c;
    this->dato = dato;
    this->anterior = NULL;
    this->siguiente = n;
}

string Nodo::getCientifico() const {
    return cientifico;
}

string Nodo::getEvento() const {
    return evento;
}

int Nodo::getDato() const {
    return dato;
}

void Nodo::setSiguiente(Nodo *enlace) {
    siguiente = enlace;
}

Nodo *Nodo::getSiguiente() const {
    return siguiente;
}