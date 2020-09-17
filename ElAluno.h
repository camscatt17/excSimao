#pragma once
#include "Aluno.h"

class ElAluno {
    private:
        Aluno* pAl;
        ElAluno* pProx;
        ElAluno* pAnte;
    
    public:
        ElAluno();
        ~ElAluno();
        void setAluno(Aluno* pa);
        Aluno* getAluno();
        cha* getNome();

        ElAluno* getpProx();
        void setpProx(ElAluno* pProx);
        ElAluno* getpAnte();
        void setpAnte(ElAluno* pAnte);

};