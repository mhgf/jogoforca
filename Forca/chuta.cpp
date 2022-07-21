#include <iostream>
#include "chuta.hpp"
#include "letra_existe.hpp"
#include <cctype>

void chuta(std::map<char, bool>& chutou, std::vector<char>& chutes_errados, std::string& palavra_secreta)
{
    using namespace std;

    cout << "Seu chute: ";
    char chute;
    cin >> chute;

    chute = toupper(chute);
    chutou[chute] = true;
    if (!letra_existe(chute, palavra_secreta)) {
        chutes_errados.push_back(chute);
    }
}