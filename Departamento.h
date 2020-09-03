#pragma once
//redefinição das classes disciplina e Universidade pois a classe Disciplina e universidade, respectivamente já incluem a classe Departamento
//Promessa de inclusão das classes Disciplina e Universidade em momento pertinente, que no caso, é a no arquivo Disciplina.cpp
class Disciplina;
class Universidade;

class Departamento {
    private:
        char nome[30];

        Universidade* pUniv;

        Disciplina* pDisciplPrim;
        Disciplina* pDisciplAtual;

    public:
        Departamento();
        ~Departamento();
        void setNomeDpto(const char* nome);
        char* getNomeDpto();

        //Associação com a universidade atraves de agregação fraca
        void setUniv(Universidade* pUniv);
        Universidade* getUniv();

        //Associação com a classe Disciplina através de agregação fraca
        //Colabora na formação da lista encadeada
        void incluaDisciplina(Disciplina* pDisc);
        void listeDisciplina();



};