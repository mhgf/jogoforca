#include <iostream>
#include "imprime_cabecalho.hpp"
#include "inicia_jogo.hpp"
#include "adiciona_palavra.hpp"
#include "mostar_forcar.hpp"
#include <locale.h>
using namespace std;

int main()
{
	setlocale(LC_ALL, "Portuguese_Brasil");

	int op = 0;
	do {
		cin.clear();
		system("cls");
		imprime_cabecalho();

		cout << "Ecolha uma opção: " << endl
			<< "1 - Inica o Jogo." << endl
			<< "2 - Adiciona palavra." << endl
			<< "3 - Listar palavras." << endl
			<< "4 - sair." << endl << endl;

		cin >> op;

		if (cin.fail())
		{
			cin.clear();
			cin.ignore(512, '\n');
			cout << "Not a number" << endl;
			system("pause");
		}
		else {
			using namespace Forca;
			switch (op)
			{
				
				case 1: 
					inciaJogo();
					break;
				case 2:
					adiciona_palavra();
					break;
				case 3:
					lista_palavras();
					break;
				default:
					break;
			}
		}

	} while (op != 4);

	cin.get();
}