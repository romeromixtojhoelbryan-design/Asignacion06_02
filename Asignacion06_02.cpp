#include <iostream>
using namespace std;

class Torre
{
public:
    short fila;
    short columna;

    Torre(short fila, short columna, bool isBlack)
    {
        this->fila = fila;
        this->columna = columna;
        this->isBlack = isBlack;
    }

private:
    bool isBlack;
};