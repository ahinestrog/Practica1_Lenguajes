//
// Created by aleja on 9/14/2023.
//

#ifndef PRACTICA_LENGUAJES_NODO_H
#define PRACTICA_LENGUAJES_NODO_H
#include <iostream>
using namespace std;


class Nodo {
private:
    int dato;
    string cientifico;
    string evento;
    Nodo *siguiente;
    Nodo *anterior;
public:
    //Métodos
    Nodo(string e, string c, int dato);

    Nodo(string e, string c, int dato, Nodo *n);

    string getCientifico() const;

    int getDato() const;

    void setSiguiente(Nodo *enlace);

    Nodo *getSiguiente() const;

    string getEvento() const;

};


#endif //PRACTICA_LENGUAJES_NODO_H
