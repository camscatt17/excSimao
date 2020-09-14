#include <iostream>
#include "Departamento.h"
#include "Disciplina.h"
#include "Universidade.h"

using namespace std;

Departamento::Departamento(){
    pDisciplPrim = NULL; //toda vez que existir ponteiros, uma boa prática é aterra-los logo de cara
    pDisciplAtual = NULL;
}

Departamento::~Departamento(){
    pDisciplPrim = NULL;
    pDisciplAtual = NULL;
}

void Departamento::setNomeDpto(const char* nome){
    strcpy(this->nome, nome);
}

char* Departamento::getNomeDpto(){
    return nome;
}

void Departamento::setUniv(Universidade* pUniv){
    this->pUniv = pu;
}

Universidade* Departamento::getUniv(){
    return pUniv;
}

void Departamento::incluaDisciplina(Disciplina* pDisc){
    if(pDisciplPrim == NULL){
        pDisciplPrim = pDisc;
        pDisciplAtual = pDisc;
    } else {
       pDisciplAtual->pProx->setPprox(pDisc);
       pDisc->pAnte->setPante(pDisciplAtual);
       pDisciplAtual = pDisc;
    }
}

void Departamento::listeDisciplina(){
    Disciplina* pAux;
    pAux = pDisciplPrim;
    while(pAux != NULL){
        count << "A disciplina " << pAux->getNome() <<" pertence ao departamento" <<
        nome << endl;
        pAux = pAux->pProx->getPprox();
    }
}

void Departamento::listeDisciplina2(){
    Disciplina* pAux;
    pAux = pDisciplAtual;
    while(pAux != NULL){
        count << "A disciplina " << pAux->getNome() <<" pertence ao departamento" <<
        nome << endl;
        pAux = pAux->pAnte->getPante() ;
    }
}