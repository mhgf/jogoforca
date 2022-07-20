#include <iostream>
#include "imprime_cabecalho.hpp"
#include "inicia_jogo.hpp"

using namespace std;

int main()
{
	int op;

	do {
		cin.clear();
		op = 0;
		system("cls");
		imprime_cabecalho();


		cout << "Ecolha uma opção: " << endl
			<< "1 - Inica o Jogo." << endl
			<< "2 - Adiciona palavra." << endl
			<< "3 - sair." << endl << endl;


		cin >> op;

		if (cin.fail())
		{
			cin.clear();
			cin.ignore(512, '\n');
			cout << "Not a number" << endl;
			system("pause");
		}
		else {
			switch (op)
			{
			case 1: 
				break;
			case 2:
				break;
			default:
				break;
			}
		}


		//   Forca::inciaJogo();
	} while (op != 3);

	cin.get();
}