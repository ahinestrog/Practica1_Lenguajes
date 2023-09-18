#include <iostream>
#include "Lista.h"
using namespace std;


int main() {
    Lista *l1 = new Lista();

    cout << "Forma corrida: " << endl;
    l1->crearLista();
    l1->visualizar();
    cout << endl;
    cout << "Forma secuencial: " << endl;
    l1->visualizar2();
    cout << endl;
    cout << "NUMERO DE EVENTOS:" << endl;
    cout << endl;
    cout << "Eventos de tipo A: " << endl;
    l1->imprimirEA();
    cout << endl;
    cout << "Eventos de tipo B: " << endl;
    l1->imprimirEB();
    cout << endl;
    cout << "La secuencia de la singularidad es: ";
    cout << endl;
    l1->imprimirSingularidad();
    cout << endl;


    return 0;
}


