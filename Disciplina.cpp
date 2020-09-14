#include "Disciplina.h"
#include <stdio.h>
#include <string.h>

Disciplina::Disciplina(int id, const char* ac){
    this->id = id;
    pDeptoAssociado = NULL;
    pProx = NULL;
    pAnte = NULL;

    strcpy(area_conhecimento,ac);
}

Disciplina::~Disciplina(){
    pDeptoAssociado = NULL;
    pProx = NULL;
    pAnte = NULL;
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