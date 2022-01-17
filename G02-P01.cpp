//
// Guión 2 - Tema 3
// 1. Modifique las solución aportada al ejercicios 4 relacionada con las sentencias de selección, de tal forma que
// las opciones se escojan por letra y se añada una nueva (E) que servirá para salir del programa:
//
//          MENU
//      A. Sumar
//      B. Restar
//      C. Multiplicar
//      D. Dividir
//      E. Salir
//
// El programa una vez realizada una opción deberá mostrar el menú de nuevo hasta que se elija la opción E (Salir).
//
// @izzzhan
//

#include <iostream>
#include <cstdlib>

using namespace std;

class numeros{
    int uno, dos;
public:
    void cargar();
    int leeuno();
    int leedos();
};

void numeros::cargar(){
    cout << "Introduzca el primer numero: ";
    cin >> uno;
    cout << "Introduzca el segundo numero: ";
    cin >> dos;
}

int numeros::leeuno(){
    return uno;
}

int numeros::leedos(){
    return dos;
}

int menu(){
    char opcion;
    cout << "\n\tMENU\n  A. Sumar\n  B. Restar\n  C. Multiplicar\n  D. Dividir\n  E.Salir\n\nElija opcion: ";
    cin >> opcion;
    return opcion;
}

int main(){
    numeros n;
    n.cargar();
    
    bool salir = true;

    do {
        switch(menu()){
            case 'a':
            case 'A':
                cout << "\n " << n.leeuno() << " + " << n.leedos() << " = " << (n.leeuno()+n.leedos()) <<"\n\n";
                break;
            case 'b':
            case 'B':
                cout << "\n " << n.leeuno() << " - " << n.leedos() << " = " << (n.leeuno()-n.leedos()) <<"\n\n";
                break;
            case 'c':
            case 'C':
                cout << "\n " << n.leeuno() << " * " << n.leedos() << " = " << (n.leeuno()*n.leedos()) <<"\n\n";
                break;
            case 'd':
            case 'D':
                cout << "\n " << n.leeuno() << " / " << n.leedos() << " = " << ((double)n.leeuno()/n.leedos()) <<"\n\n";
                break;
            case 'e':
            case 'E':
                salir = false;
                break;
            default:
                cout << "\nOpcion invaldia\n\n";
        }
    } while (salir == true);

    system("pause");
    return 0;
}
