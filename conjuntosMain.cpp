//Zuleinis K. Ramos López   
#include <iostream>
#include "conjunto.h"
#include <cstdlib>
#include "conjuntoClass.cpp"
using namespace std;
using namespace clase_conjunto;
#define MAX 100

int main()
{
    Conjunto conjuntoA, conjuntoB, conjuntoC, conjuntoD;
    int i = 0;
    int elemento;
    char seleccion;
    bool repetir, repetirMenu = true;
    char opcionConjunto;
    do
    {
        cout << "\nMENÚ" << endl;
        cout << "\n(a) Añadir elementos a un conjunto";
        cout << "\n(b) Verificar si un elemento ya existe en un conjunto";
        cout << "\n(c) Verificar si un conjunto esta vacio";
        cout << "\n(d) Verificar si un conjunto esta lleno";
        cout << "\n(e) Mostrar todos los elementos de un conjunto";
        cout << "\n(f) Crear unión de los conjuntos A y B";
        cout << "\n(g) Crear intersección de los conjuntos A y B";
        cout << "\n(h) Terminar" << endl;
        cout << "\nSelección: ";
        cin >> seleccion;
        switch (seleccion)
        {
            case 'a':
                cout << "Con que conjunto desea trabajar? (A/B)\n";
                cin >> opcionConjunto;
                switch(opcionConjunto)
                {
                    case 'A':
                        conjuntoA.agregar();
                        break;
                    case 'B':
                        conjuntoB.agregar();
                        break;
                    case 'C':
                        conjuntoC.agregar();
                        break;
                    default:
                        cout << "\nSu selección es iválida, intente de nuevo.\n";
                        break;
                }
                break;
            case 'b':
                cout << "Con que conjunto desea trabajar? (A/B/C)\n";
                cin >> opcionConjunto;
                cout << "Ingrese el elemento que busca: ";
                cin >> elemento;
                switch(opcionConjunto)
                {
                    case 'A':
                        if(conjuntoA.pertenece(elemento)==-1)
                            cout << "El elemento " << elemento << " no existe en el conjunto A." << endl;
                        else
                            cout << "El elemento " << elemento << " existe en la posición " << conjuntoA.pertenece(elemento) << " del conjunto A." << endl;                           
                        break;
                    case 'B':
                        if(conjuntoB.pertenece(elemento)==-1)
                            cout << "El elemento " << elemento << " no existe en el conjunto B." << endl;
                        else
                            cout << "El elemento " << elemento << " existe en la posición " << conjuntoB.pertenece(elemento) << " del conjunto B." << endl;  
                        break;
                    case 'C':
                        if(conjuntoC.pertenece(elemento)==-1)
                            cout << "El elemento " << elemento << " no existe en el conjunto C." << endl;
                        else
                            cout << "El elemento " << elemento << " existe en la posición " << conjuntoC.pertenece(elemento) << " del conjunto C." << endl;  
                        break;
                    default:
                        cout << "\nSu selección es iválida, intente de nuevo.\n";
                    break;
                }
            break;
            case 'c':
                    cout << "Con que conjunto desea trabajar? (A/B/C)\n";
                    cin >> opcionConjunto;
                    switch(opcionConjunto)
                    {
                        case 'A':
                            if (conjuntoA.estaVacio())
                                cout << "\nEl conjunto esta vacio.\n";
                            else
                                cout << "\nEl conjunto no esta vacio.\n";
                            break;
                        case 'B':
                            if (conjuntoB.estaVacio())
                                cout << "\nEl conjunto esta vacio.\n";
                            else
                                cout << "\nEl conjunto no esta vacio.\n";
                            break;
                        case 'C':
                            if (conjuntoC.estaVacio())
                                cout << "\nEl conjunto esta vacio.\n";
                            else
                                cout << "\nEl conjunto no esta vacio.\n";
                            break;
                        default:
                            cout << "\nSu selección es iválida, intente de nuevo.\n";
                        break;
                    }
            break;
            case 'd':
                    cout << "Con que conjunto desea trabajar? (A/B/C)\n";
                    cin >> opcionConjunto;
                    switch(opcionConjunto)
                    {
                        case 'A':
                            if(conjuntoA.estaLleno())
                                cout << "\nEl conjunto esta lleno.\n";
                            else
                                cout << "\nEl conjunto no esta lleno.\n";
                            break;
                        case 'B':
                            if(conjuntoB.estaLleno())
                                cout << "\nEl conjunto esta lleno.\n";
                            else
                                cout << "\nEl conjunto no esta lleno.\n";
                            break;
                        case 'C':
                            if(conjuntoC.estaLleno())
                            cout << "\nEl conjunto esta lleno.\n";
                            else
                                cout << "\nEl conjunto no esta lleno.\n";
                            break;
                        default:
                            cout << "\nSu selección es iválida, intente de nuevo.\n";
                        break;
                    }
                break;
            case 'e':
                    cout << "Con que conjunto desea trabajar? (A/B/C)\n";
                    cin >> opcionConjunto;
                    switch(opcionConjunto)
                    {
                        case 'A':
                            conjuntoA.escribir();
                            break;
                        case 'B':
                            conjuntoB.escribir();
                            break;
                        case 'C':
                            conjuntoC.escribir();
                            break;
                        default:
                            cout << "\nSu selección es iválida, intente de nuevo.\n";
                        break;
                    }
                break;
            case 'f':
                conjuntoA + conjuntoB;
                //unionConjunto(conjuntoA,conjuntoB,conjuntoC);
                cout << "\nSe ha creado la unión de los conjuntos A y B.\n";
                break;
            case 'g':
                conjuntoA * conjuntoB;
                //unionConjunto(conjuntoA,conjuntoB,conjuntoC);
                cout << "\nSe ha creado la intersección de los conjuntos A y B.\n";
                break;
            case 'h':
                cout << "\nGracias por usar este programa.\n";
                repetirMenu = false;
                break;
            default:
                cout << "\nSu selección es iválida, intente de nuevo.\n";
                repetirMenu = true;
                break;
        }
    } while (repetirMenu == true);
return 0;
}
