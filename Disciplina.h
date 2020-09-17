#pragma once
#include "Departamento.h"
#include "ElAluno.h"

class Disciplina {
    private:
        int id;
        char nome[150];
        char area_conhecimento[150];

        Departamento* pDeptoAssociado;

        Disciplina* pProx; 
        Disciplina* pAnte;

        int num_alunos;
        int cont_alunos;

        ElAluno* pElAlunoPrim;
        ElAluno* pElAlunoAtual;
        
    public:
        Disciplina(int id,int num_alunos = 45, const char* ac ="");
        ~Disciplina();

        int getId();
        void setId(int id);

        
        void setNome(const char* nome);
        char* getNome();

        void setDpto(Departamento* pdpto);
        Departamento* getDpto;

        //Privei os ponteiros criando métodos de get e set
        void setPprox(Disciplina* pProx);
        Disciplina* getPprox();
        void setPante(Disciplina* pAnte);
        Disciplina* getPante();

        void incluaAluno(Aluno* pa);
        void listaAluno();
        void listaAluno2();
};