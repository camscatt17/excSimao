#pragma once
#include "Departamento.h"

class Disciplina {
    private:
        int id;
        char nome[150];
        char area_conhecimento[150];

        Departamento* pDeptoAssociado;

    public:
        Disciplina(int id, const char* ac ="");
        ~Disciplina();

        Disciplina* pProx;

        int getId();
        void setId(int id);

        void setNome(const char* nome);
        char* getNome();

        void setDpto(Departamento* pdpto);
        Departamento* getDpto;
};