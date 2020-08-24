#pragma once
#include "Pessoa.h"
#include "Universidade.h"
#include "Departamento.h"
#include "Professor.h"

class Principal{
    private: 
        Pessoa Camis;

        int dia, mes, ano;

        //UTFPR é agregada aos objetos dessa classe (tipo mais forte de relação) 
        Universidade UTFPR;
        Universidade TJPR;

        //Dpto é agregado aos objetos dessa classe
        Departamento DAINF;
        Departamento DGRH;

        Professor Simao;

    public:
        Principal();
        ~Principal();
        void Executar();
};