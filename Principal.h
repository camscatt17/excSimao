#pragma once
#include "Aluno.h"
#include "Universidade.h"
#include "Departamento.h"
#include "Professor.h"
#include "Disciplina.h"

class Principal{
    private: 
        int dia, mes, ano;

         Aluno Camis;

        //UTFPR é agregada aos objetos dessa classe (tipo mais forte de relação) 
        Universidade UTFPR;
        Universidade TJPR;

        //Dpto é agregado aos objetos dessa classe
        Departamento DAINF;
        Departamento DGRH;

        //Disciplinas agregadas
        Disciplina TecProgComp;

        Professor Simao;

    public:
        Principal();
        ~Principal();

        //Inicializações
        void inicializa();
        void inicializaUniv();
        void inicializaDpto();
        void inicializaDiscip();
        void inicializaProf();

        void Executar();

        void calcIdadeProf();
        void univOndeTrabalha();
        void dptoOndeTrabalha();
        void listeDiscDeptos();
};