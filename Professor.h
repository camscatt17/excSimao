#pragma once
#include "Pessoa.h"
#include "Universidade.h"

class Professor: public Pessoa {
    private:
        Universidade* pUnivFil;
        Departamento* pDptoFil;

    public:
        Professor(int dia, int mes, int ano, const char* = "");
        Professor();
        ~Professor();

        void setUnivFil(Universidade* pu);
        void setDptoFil(Departamento* pdto);
        void ondeTrabalho();
        void qualDptoTrabalho();
};