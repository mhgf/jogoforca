#include <iostream>
#include <vector>
#include <string>
#include "le_arquivo.hpp"
#include "salva_arquivo.hpp"
#include "adiciona_palavra.hpp"
#include <fstream>
#include <cctype>

void Forca::adiciona_palavra(){
    std::cout << "Digite a nova palavra, usando letras maiúsculas." << std::endl;
    std::string nova_palavra;
    std::string toFile = "";
    std::cin >> nova_palavra;

    std::vector<std::string> lista_palavras = le_arquivo();
    for (char letra : nova_palavra) {
        toFile += toupper(letra);
    }

    lista_palavras.push_back(toFile);

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
            std::string palavra_lida;
            arquivo >> palavra_lida;

            cout << palavra_lida << endl;
        }

        arquivo.close();
        system("pause");
        system("cls");
    }
    else {
        std::cout << "Não foi possível acessar o banco de palavras." << std::endl;
        exit(0);
    }
    
}