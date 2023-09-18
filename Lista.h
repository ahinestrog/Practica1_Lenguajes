//
// Created by aleja on 9/14/2023.
//

#ifndef PRACTICA_LENGUAJES_LISTA_H
#define PRACTICA_LENGUAJES_LISTA_H
#include "Nodo.h"
#include <iostream>
using namespace std;
#include <cstdlib>


class Lista {
private:
    Nodo *siguiente;
    Nodo *anterior;
public:
    Lista();

     bool primo(int n);

     bool coPrimo(int n, int m);

     void crearLista();

     void visualizar();

     void visualizar2();

     Nodo *buscarLista(int dato);

     Nodo *buscarEvento(string evento);

     string getRandCientifico();

     string getRandCientifico2();

     void imprimirEA();

     void imprimirEB();

     void imprimirSingularidad();

};


#endif //PRACTICA_LENGUAJES_LISTA_H
