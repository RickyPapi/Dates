#pragma once

#include<iostream>
#include<String.h>

using namespace std;

class Fechas
{
	private:
		string fecha;

	public:
		void fechas() {
			
			auto nDay = std::strtol(fecha.data(), nullptr, 10);
			auto nMonth = std::strtol(fecha.data(), nullptr, 10);
			auto nAnio = std::strtol(fecha.data(), nullptr, 10);

			if (nMonth < 1 && nMonth > 12) {
				cout << "\nEl mes no existe, no inventes cosas" << endl;
			}

			if (nMonth == 1 && nDay < 1 && nDay > 31) 
			{
				cout << "Los datos del mes no son correctos" << endl;
			}
			if (nMonth == 2 && nDay < 1 && nDay > 28)
			{
				cout << "Los datos del mes no son correctos" << endl;
			}
			if (nMonth == 3 && nDay < 1 && nDay > 31) 
			{
				cout << "Los datos del mes no son correctos" << endl;
			}
			if (nMonth == 4 && nDay < 1 && nDay > 30) 
			{
				cout << "Los datos del mes no son correctos" << endl;
			}
			if (nMonth == 5 && nDay < 1 && nDay > 31)
			{
				cout << "Los datos del mes no son correctos" << endl;
			}
			if (nMonth == 6 && nDay < 1 && nDay > 30) 
			{
				cout << "Los datos del mes no son correctos" << endl;
			}
			if (nMonth == 7 && nDay < 1 && nDay > 31) 
			{
				cout << "Los datos del mes no son correctos" << endl;
			}
			if (nMonth == 8 && nDay < 1 && nDay > 31) 
			{
				cout << "Los datos del mes no son correctos" << endl;
			}
			if (nMonth == 9 && nDay < 1 && nDay > 30)
			{
				cout << "Los datos del mes no son correctos" << endl;
			}
			if (nMonth == 10 && nDay < 1 && nDay > 30) 
			{
				cout << "Los datos del mes no son correctos" << endl;
			}
			if (nMonth == 11 && nDay < 1 && nDay > 30) 
			{
				cout << "Los datos del mes no son correctos" << endl;
			}
			if (nMonth == 12 && nDay < 1 && nDay > 30) 
			{
				cout << "Los datos del mes no son correctos" << endl;
			}



			if (nAnio % 4 != 0 || (nAnio % 100 == 0 && nAnio % 400 != 0)) 
			{
				cout << "\m\nEl anhio no es bisiesto" << endl;
			}
			else 
			{
				cout << "\m\nEl anhio no es bisiesto" << endl;
			}
		};

	void setFecha(string nFecha) 
	{
		fecha = nFecha;
	}

	string getFecha() 
	{
		return fecha;
	}
};

