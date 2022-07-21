#include <iostream>
#include <vector>
#include <string>
#include "le_arquivo.hpp"
#include "salva_arquivo.hpp"
#include "adiciona_palavra.hpp"
#include <fstream>
#include <cctype>

void Forca::adiciona_palavra(){
    using namespace std;
    cout << "Digite a nova palavra, usando letras maiúsculas." << endl;
    string nova_palavra = "";
    cin >> nova_palavra;

    vector<string> lista_palavras = le_arquivo();
    for (int i = 0; i < nova_palavra.size(); i++) {
        nova_palavra[i] = toupper(nova_palavra[i]);
    }

    lista_palavras.push_back(nova_palavra);

    salva_arquivo(lista_palavras);
}


void Forca::lista_palavras() {
    using namespace std;
    system("cls");

    ifstream arquivo;
    arquivo.open("palavras.txt");

    if (arquivo.is_open()) {
        int quantidade_palavras;
        arquivo >> quantidade_palavras;



        for (int i = 0;i < quantidade_palavras;i++) {
            string palavra_lida;
            arquivo >> palavra_lida;

            cout << palavra_lida << endl;
        }

        arquivo.close();
        system("pause");
        system("cls");
    }
    else {
        cout << "Não foi possível acessar o banco de palavras." << endl;
        exit(0);
    }
    
}