#include <iostream>
#include <cstdlib>
#include "conjunto.h"

using namespace std;

namespace clase_conjunto
{
    Conjunto :: Conjunto()
    {
    int conjunto[MAX]={0};
    size = 0;
    }

    Conjunto :: ~Conjunto(){}

    //Agrega elementos a un conjunto siempre que dichos elementos no existan en el mismo.
    void Conjunto :: agregar()
    {
        int elemento;
        char repetir;
        do
        {
        cout << "Ingrese el elemento: ";
        cin >> elemento;
        if (pertenece(elemento)==-1 && size!=MAX)
        {
            conjunto[size] = elemento;
            size++;
        }
        else if(size == MAX)
            cout << "No se puede añadir este elemento, ya que el arreglo a alcanzado su cantidad máxima de elementos.\n";
        else
            cout << "El elemento " << elemento << " ya existe en el conjunto.\n";
        cout << "Desea añadir otro elemento?(y/n): ";
        cin >> repetir;
        }while (repetir == 'y');
    }
    //Verifica si un elemento existe o no en un conjunto. Si existe, devuelve la posición.
    int Conjunto :: pertenece(const int & elemento)
    {
        for (int i = 0; i < size; i++)
        {
            if (elemento == conjunto[i])
            {
                return i;
            }
        }
        return -1;
    }
    //Verifica si un conjunto tiene elementos o no.
    bool Conjunto :: estaVacio()
    {
        if (size == 0) {
            return true;
        }
        else
            return false;
    }
    //Verifica si un conjunto tiene la cantidad maxima de elementos.
    bool Conjunto :: estaLleno()
    {
        return (size == MAX);
    }

    //Imprime todos los elementos de un conjunto.
    void Conjunto :: escribir()
    {
        for (int i = 0; i < size; i++) {
            cout << conjunto[i] << endl;
        }
    }
    //Crea un tercer conjunto con los elementos no repetidos de dos conjuntos.

    //Crea la union de dos conjuntos.
    Conjunto operator +(const Conjunto& conjunto1, const Conjunto& conjunto2)
    {
        Conjunto conjunto3;
        
        for (int i = 0; i < conjunto1.size; i++)
        {
            conjunto3.conjunto[i] = conjunto1.conjunto[i];
            conjunto3.size++;
        }

        for (int j = 0; j < conjunto2.size; j++)
        {
            if(conjunto3.pertenece(conjunto2.conjunto[j]) == -1)
                conjunto3.conjunto[conjunto3.size++] = conjunto2.conjunto[j];
        }
    return conjunto3;
    }
    //Crea la intersección de dos conjuntos.
    Conjunto operator *(const Conjunto& conjunto1, const Conjunto& conjunto2)
    {
        Conjunto conjunto4;
        for (int i = 0; i < conjunto1.size; i++)
        {
            if(conjunto1.conjunto[i] == conjunto2.conjunto[i])
                conjunto4.conjunto[conjunto4.size++] = conjunto1.conjunto[i];
        }
    return conjunto4;
    }
}