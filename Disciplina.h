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

        int getId();
        void setId(int id);

        Disciplina* pProx;
        Disciplina* pAnte;

        void setNome(const char* nome);
        char* getNome();

        void setDpto(Departamento* pdpto);
        Departamento* getDpto;
};