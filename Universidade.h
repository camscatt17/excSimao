#pragma once
#include "Departamento.h"

class Universidade {
    private:
        char nome[30];
        Departamento* Dpto[50];

    public:
        Universidade();
        ~Universidade();

        void setNome(const char* nome);
        char* getNome();
        
        void setDepartamento(Departamento* pdpto, int qtd);
        void imprimeDptos();
};