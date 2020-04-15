#include <iostream>
#include "Pessoa.h"
#include "Universidade.h" 

using namespace std;

class Principal{
    private: 
        Pessoa Simao;
        Pessoa Camis;

        //Objeto agregado à classe Principal
        Universidade UTFPR;

    public:
        Principal();
        void Executar();
};