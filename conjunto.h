#ifndef conjunto_h
#define conjunto_h
#include <iostream>
#include <cstdlib>
using namespace std;
#define MAX 100

namespace clase_conjunto
{
    class Conjunto
    {
    public:
        Conjunto();
        ~Conjunto();
        void agregar();
        int pertenece(const int & elemento);
        bool estaVacio();
        bool estaLleno();
        void escribir();
        //friend Conjunto unionConjunto(Conjunto & conjunto1, Conjunto & conjunto2, Conjunto & conjunto3);
        friend Conjunto operator +(const Conjunto& conjunto1, const Conjunto& conjunto2);
        friend Conjunto operator *(const Conjunto& conjunto1, const Conjunto& conjunto2);
    private:
        int conjunto[MAX];
        int size;
    };
}
#endif //conjunto_h