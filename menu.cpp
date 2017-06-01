#include<iostream>
using std::cout;
using std::cin;
using std::endl;
#include<string>
using std::string;
#include "menu.h"

void menu(){
    int opcao=0;
    cout<<endl
        <<"(1) Inserir produtos no estoque"<<endl
        <<"(2) Remoção de um produto"<<endl
        <<"(3) Mostrar o estoque de um determinado produto ou por um tipo de produto"<<endl
        <<"(4) Mostrar o estoque de todos os produtos"<<endl
        <<"(5) Consulta de produtos de um determinado fornecedor"<<endl
        <<"(6) Mostrar os fornecedores";
        <<"(7) Venda de produtos e geração de notas fiscais"<<endl;
    cin>>opcao;
    switch (opcao){
        case 1:
            string entrada;
            cout<<"Insercao no estoque"<<endl
                <<"Digite o caminho do arquivo de insercao: ";
            cin>>entrada;
            //Inserir
            //Inserir na lista todos os produtos;
            //Percorrer a lista para achar os produtos ou fornecedores
            //Pode percorrer se estiver vazia, já que será criada no início do main;
            break;
            
    }
}