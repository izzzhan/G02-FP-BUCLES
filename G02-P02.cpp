//
// Guión 2 - Tema 3
// 2. Realizaar un programa que pida por teclado cuántos números enteros se van a introducir y a continuación los
// solicite por teclado, para calcular el valor máximo, el mínimo y la media de todos ellos.
//
// @izzzhan
//

#include <iostream>

using namespace std;

class numero {
    float dato;
    int max = 0;
    int min = 99999;
    int suma = 0;
    float numeros[];
    
public:
    void getDato();
    void getNumeros();
    int calcMx();
    int calcMn();
    float calcMd();
};

void numero::getDato(){
    cout << "Digite el numero de elementos que desea: ";
    cin >> dato;
}

void numero::getNumeros(){
    cout << "\nDigite el valor de los elementos: " << endl;
    for (int i = 0; i < dato; i++) {
        cout << i + 1 << ". ";
        cin >> numeros[i];
    }
}

int numero::calcMx(){
    for (int i = 0; i < dato; i++) {
        if (numeros[i] > max) {
            max = numeros[i];
        }
    }
    return max;
}

int numero::calcMn(){
    for (int i = 0; i < dato; i++) {
        if (numeros[i] < min) {
            min = numeros[i];
        }
    }
    return min;
}

float numero::calcMd(){
    for (int i = 0; i < dato; i++) {
        suma += numeros[i];
    }
    return suma / dato;
}

int main(){
    numero num;
    
    num.getDato();
    num.getNumeros();
    
    cout << "\n\nPara los valores digitados se han obtenido los siguientes resultados: " << endl;
    cout << "\tValor Maximo: " << num.calcMx() << endl;
    cout << "\tValor Minimo: " << num.calcMn() << endl;
    cout << "\tMedia: " << num.calcMd() << endl;
    
    return 0;
}
