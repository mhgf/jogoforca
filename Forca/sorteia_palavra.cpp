#include <vector>
#include<ctime>
#include "le_arquivo.hpp"

std::string sorteia_palavra()
{
    using namespace std;

    vector<string> palavras = le_arquivo();

    srand(time(NULL));
    int indice_sorteado = rand() % palavras.size();

    return palavras[indice_sorteado];
}