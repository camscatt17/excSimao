#pragma once
#include "Pessoa.h"
#include "Universidade.h"

class Professor: public Pessoa {
    private:
        Universidade* pUnivFil;
        Departamento* pDptoFil;
        char* dominio[30];

    public:
        Professor(int dia, int mes, int ano, const char* = "", const char* dominio="");
        Professor();
        ~Professor();
        
        void setDominio(const char* dominio);
        char* getDominio();

        void setUnivFil(Universidade* pu);
        void setDptoFil(Departamento* pdto);
        void ondeTrabalho();
        void qualDptoTrabalho();
};