//
// Created by aleja on 9/14/2023.
//

#include "Lista.h"
#include "Nodo.h"
#include <iostream>
using namespace std;
#include <cstdlib>
#include <ctime>

Lista::Lista() {
    this->siguiente = NULL;
    this->anterior = NULL;
}

bool Lista::primo(int n) {
    int cont = 0;
    for (int i = 1; i <= n; i++) {
        if (n % i == 0) {
            cont++;
        }
    }
    if (cont == 2) {
        return true;
    } else {
        return false;
    }
}

bool Lista::coPrimo(int n, int m) {
    int cont = 0;
    for (int i = 1; i <= n; i++) {
        if (n % i == 0 && m % i == 0) {
            cont++;
        }
    }
    if (cont == 1) {
        return true;
    } else {
        return false;
    }
}

string Lista::getRandCientifico() {
        int random = rand() % 2 + 1;
        if(random == 1) {
            return "E";
        } else if (random == 2){
            return "R";
        }
}

string Lista::getRandCientifico2() {
    int random = rand() %2 +1;
    if(random == 1){
        return "si mismo";
    }else{
        if(random == 2){
            return "Rosen";
        }
    }
}

void Lista::crearLista() {
    srand(time(NULL));
    int cont = 0;
    siguiente = NULL;


    while (cont <= 22) {
        int n = rand() % 100 + 1;
        string cientifico = getRandCientifico();
        string evento;

        Nodo *E1 = buscarEvento("A");
        if (primo(n)) {
            if(E1 == NULL){
                evento = "A";
                siguiente = new Nodo(evento, "E", n, siguiente);
            }else{
                Nodo *E2 = buscarEvento("B");
                if(E2 == NULL){
                    evento = "B";
                    siguiente = new Nodo(evento, getRandCientifico(), n, siguiente);
                }else{
                    Nodo *E3 = buscarEvento("C");
                    if (coPrimo(n, E1->getDato())) {
                        if(E3 == NULL){
                            evento = "C";
                            siguiente = new Nodo(evento, getRandCientifico(), n, siguiente);
                            if(primo(n)){
                                string c = getRandCientifico2();
                                if (cientifico == "E"){
                                    cientifico = "Einstein";
                                    cout << "Ocurrio una singularidad, " << cientifico << " Viajo al pasado y ademas compartio informacion a " << c << endl;
                                }else{
                                    if(cientifico == "R"){
                                        cientifico = "Rosen";
                                        cout << "Ocurrio una singularidad, " << cientifico << " Viajo al pasado y ademas compartio informacion a Einstein " << endl;
                                    }
                                }
                                break;
                            }else{
                                if(cientifico == "E"){
                                    cientifico = "Einstein";
                                    cout << "Ocurrio una singularidad, " << cientifico << " Viajo al pasado y solo observo" << endl;
                                }else{
                                    if(cientifico == "R"){
                                        cientifico = "Rosen";
                                        cout << "Ocurrido una singularidad, " << cientifico << " Viajo al pasado y solo observo" << endl;
                                    }
                                }
                            }
                        }
                    }
                }
            }
        }else{
            evento = "P";
            siguiente = new Nodo(evento, getRandCientifico(), n, siguiente);
        }

        cont++;
    }
}

Nodo *Lista::buscarEvento(string evento) {
    Nodo *temp;
    for( temp = siguiente; temp != NULL; temp = temp->getSiguiente()){
        if(temp->getEvento() == evento){
            return temp;
        }
    }
    return NULL;
}

void Lista::visualizar() {
    Nodo *n = siguiente;
    while (n != NULL) {
        cout << "|" << n->getDato() << "|" << n->getCientifico() << "|" << n->getEvento() << "|" << "->";
        n = n->getSiguiente();
    }
    cout << "NULL";
    cout << endl;
}

void Lista::visualizar2() {
    Nodo *n = siguiente;
    int contador = 0;

    while (n != NULL) {
        cout << "Nodo " << contador << ": " << n->getEvento() << " - " << n->getCientifico() << " - " << n->getDato() << endl;
        n = n->getSiguiente();
        contador++;

        if (contador > 22) {
            break;
        }
    }
}

void Lista::imprimirEA() {
    Nodo *n = siguiente;
    int contador = 0;

    while (n != NULL) {
        if (n->getEvento() == "A") {
            cout << "|" << n->getDato() << "|" << n->getCientifico() << "|" << n->getEvento() <<"|" << endl;
            contador++;
        }
        n = n->getSiguiente();
    }
    cout << "Se produjo un evento de tipo A, Einstein empezo su investigacion sobre la maquina del tiempo " << endl;
    cout << "Total de eventos de tipo A: " << contador << endl;
}

void Lista::imprimirEB() {
    Nodo *n = siguiente;
    int contador = 0;
    string cientifico = getRandCientifico();

    while (n != NULL) {
        if (n->getEvento() == "B") {
            cout << "|" << n->getDato() << "|" << cientifico << "|" << n->getEvento() <<"|" << endl;
            contador++;
        }
        n = n->getSiguiente();
    }
    if(cientifico== "E"){
        cientifico = "Einstein";
        cout << cientifico << " Viajo al pasado" << endl;
    }else{
        if (cientifico == "R"){
            cientifico = "Rosen";
            cout << cientifico << " Viajo al pasado" << endl;
        }
    }
    cout << "Total de eventos de tipo B: " << contador << endl;
}

void Lista::imprimirSingularidad() {
    Nodo *e1 = buscarEvento("A");
    cout << "|" << e1->getDato() << "|" << e1->getCientifico() << "|" << e1->getEvento() <<"|" << "->";
    e1 = buscarEvento("B");
    cout << "|" << e1->getDato() << "|" << e1->getCientifico() << "|" << e1->getEvento() <<"|" << "->";
    e1 = buscarEvento("C");
    cout << "|" << e1->getDato() << "|" << e1->getCientifico() << "|" << e1->getEvento() <<"|" << "-> NULL";
}








