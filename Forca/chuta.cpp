#include <iostream>
#include "chuta.hpp"
#include "letra_existe.hpp"
#include <cctype>

void chuta(std::map<char, bool>& chutou, std::vector<char>& chutes_errados, std::string& palavra_secreta)
{
    std::cout << "Seu chute: ";
    char chute;
    std::cin >> chute;

    chute = toupper(chute);
    chutou[chute] = true;
}