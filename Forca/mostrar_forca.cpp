#include "mostar_forcar.hpp"
#include <iostream>

void Forca::mostrar_forca(int num_erros, bool& forca) {
	using namespace std;

	cout << "-----------------" << endl
		<< "|*|"<< "             |" << endl
		<< "|*|"<< "            _|_" << endl
		<< "|*|"<< (num_erros >= 1 ? "             O" : "") << endl
		<< "|*|"<< retorna_corpo_bracos(num_erros) << endl
		<< "|*|"<< retorna_pernas(num_erros, forca) << endl
		<< "|*|" << endl
		<< "|*|" << endl
		<< "|*|" << endl
		<< "|*|" << endl
		<< "|*| " ;

}

std::string Forca::retorna_corpo_bracos(int& params) {
	if(params == 2 )
	{
		return "             |";
	}
	else if (params == 3)
	{
		return "            /|";

	}
	else if (params > 3)
	{
		return "            /|\\";
	}
	return "";
}

std::string Forca::retorna_pernas(int& params, bool& forca) {
    if( params == 5)
	{
		return "            / ";
	}
	else if(params > 5)
	{
		forca = true;
		return "            / \\";
	}
	return "";
}