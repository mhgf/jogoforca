#include <iostream>
#include "imprime_erros.hpp"


void Forca::imprime_erros(const std::vector<char>& chutes_errados)
{
    using namespace std;

    cout << endl << "Chutes errados: ";
    for (char letra: chutes_errados) {
        cout << letra << " ";
    }
    cout << endl;
}
