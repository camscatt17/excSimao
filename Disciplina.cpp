#include "Disciplina.h"
#include "<stdio.h>"
#include <string.h>

Disciplina::Disciplina(int id, int num_alunos, const char* ac){
    this->id = id;
    this->num_alunos = num_alunos;
    cont_alunos = 0;

    pDeptoAssociado = NULL;

    pProx = NULL;
    pAnte = NULL;

    pAlunoPrim = NULL;
    pAlunoAtual = NULL;

    strcpy(area_conhecimento,ac);
}

Disciplina::~Disciplina(){
    pDeptoAssociado = NULL;
    ElAluno* paux; //ponteiro para ElAluno
    paux = pElAlunoPrim;

    while(pElAlunoPrim != NULL){
        pElAlunoPrim = pElAlunoPrim->getpProx();
        delete paux;
        paux = pElAlunoPrim;
    }
}

void Disciplina::setId(int id){
    this->id = id;
}

int Disciplina::getId(){
    return id;
}

void Disciplina::setNome(const char* nome){
    strcpy(this->nome, nome);
}

char* Disciplina::getNome(){
    return nome;
}

void Disciplina::setDpto(Departamento* pDpto){
    pDeptoAssociado = pDpto;
    pDpto->incluaDisciplina(this);
}

Departamento* Disciplina::getDpto(){
    return pDeptoAssociado;
}

void Disciplina::setPprox(Disciplina* pProx){
    this->pProx = pProx
}

Disciplina* Disciplina::getPprox(){
    return this->pProx;
}

void Disciplina::setPante(Disciplina* pAnte){
    this->pAnte = pAnte;
}

Disciplina* Disciplina::getPante(){
    return this->pAnte;
}

void Disciplina::incluaAluno(Aluno* pa){
    ElAluno* paux = NULL;
    paux = new ElAluno();
    paux->setAluno(pa);

    if((cont_alunos < num_alunos) && (pa!= NULL)){
        if(pElAlunoPrim == NULL){
            pElAlunoPrim = paux;
            pElAlunoAtual = paux;
        }
        else{
            pElAlunoAtual->setPprox(pa);
            paux->setPante(pElAlunoAtual);
            pElAlunoAtual = paux;
        }
        cont_alunos++;
    }
    
    else{
        cout << "Aluno nao incluido. Turma já lotada!" << endl;
    }
}

void Disciplina::listaAluno(){
    ElAluno* pAux;
    pAux = pElAlunoAtual;
    while(pAux != NULL){
        count << "Aluno " << pAux->getNome() << " matriculado em " << getNome() << endl;
        pAux = pAux->getPprox();
    }
}

void Disciplina::listaAluno2(){
    ElAluno* pAux;
    pAux = pElAlunoAtual;
    while(pAux != NULL){
        cout << "Aluno " << pAux->getNome() << " matriculado em " << getNome() << endl;
        pAux = pAux->getPante();
    }
}
