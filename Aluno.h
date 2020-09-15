#pragma once
#include "Pessoa.h"

class Aluno : public Pessoa{
    private:
        int RA;
        
        Aluno *pProx;
        Aluno *pAnte;

    public:
        Aluno(int dia, int mes, int ano, const char* nome, int RA);
        Aluno();
        ~Aluno();
        int getRA();
        void setRA(int RA);

        void setPprox(Aluno* pProx);
        Aluno* getPprox();
        void setPante(Aluno* pAnte);
        Aluno* getPante();
};