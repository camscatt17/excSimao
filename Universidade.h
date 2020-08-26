#pragma once
#include "Departamento.h"
#include <vector>
using namespace std;

class Universidade {
    private:
        char nome[30];
        vector<Departamento*> LpDptos;

    public:
        Universidade();
        ~Universidade();

        void setNome(const char* nome);
        char* getNome();
        
        void setDepartamento(Departamento* pdpto);
        void imprimeDptos();
};