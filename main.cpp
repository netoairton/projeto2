#include<iostream>
using std::cout;
using std::cin;
using std::endl;
#include<string>
using std::string;
//#include"menu.h"
int main(){
    int /*opcao=0,*/ dia=0, mes=0, ano=0;
    //Listaprodutos<int> produtos;
    //A quantidade serão variaveis separadas a serem contabilizadas no inicio;
    int *quantidades= new int[100];
    string *Squantidades= new string[100];
    quantidades[1]=55;
    Squantidades[1]= "string";
    for(int i=0; i<100; i++){
        cout<<quantidades[i]<<" "<<Squantidades[i]<<" ";
    }
    cout<<"***** Listagem de produtos QLeveTudo *****"<<endl
        <<endl
        <<"(0)Sair "<<endl
        <<"Digite a data de hoje (dd mm aaaa) :";
    cin>>dia>>mes>>ano;
    cout<<dia<<" "<<mes<<" "<<ano<<endl;
    //menu();
    /*if(quantidade==0){
        return 0;
    }*/
    delete [] quantidades;
    delete [] Squantidades;
}