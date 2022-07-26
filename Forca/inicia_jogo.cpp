#include <iostream>
#include <string>
#include <map>
#include <vector>
#include "imprime_cabecalho.hpp"
#include "le_arquivo.hpp"
#include "sorteia_palavra.hpp"
#include "chuta.hpp"
#include "imprime_erros.hpp"
#include "imprime_palavra.hpp"
#include "chuta.hpp"
#include "nao_acertou.hpp"
#include "inicia_jogo.hpp"
#include "mostar_forcar.hpp"

void Forca::inciaJogo() {
    using namespace std;
    string palavra_secreta;
    map<char, bool> chutou;
    vector<char> chutes_errados;
    bool forca = false;

    palavra_secreta = sorteia_palavra();

    while (!forca) {
        system("cls");
        Forca::mostrar_forca(chutes_errados.size(), forca);
        imprime_palavra(palavra_secreta, chutou);
        if (!nao_acertou(palavra_secreta, chutou)) forca = true;

        if (!forca) {
            
            Forca::imprime_erros(chutes_errados);


            chuta(chutou, chutes_errados, palavra_secreta);
       }
    }

    cout << "Fim de jogo!" << endl;
    cout << "A palavra secreta era: " << palavra_secreta << endl;

    if (nao_acertou(palavra_secreta, chutou)) {
        cout << "Voc� perdeu! Tente novamente!" << endl;
    }
    else {
        cout << "Parab�ns! Voc� acertou a palavra secreta!" << endl;
    }

    system("pause");
}