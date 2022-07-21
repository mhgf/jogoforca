#include <iostream>
#include "imprime_palavra.hpp"

void imprime_palavra(std::string& palavra_secreta, std::map<char, bool>& chutou)
{
    using namespace std;
    for (char letra : palavra_secreta) {
        if (chutou[letra]) {
            cout << letra << " ";
        }
        else {
            cout << "_ ";
        }
    }
    cout << endl;
}