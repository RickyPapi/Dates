#include<iostream>
#include<String.h>
#include"Fechas.h"

using namespace std;

void main(){
	
	Fechas fechas;

	string fecha;

	cout << "\n Introduce la fecha: (con el formato aaaa/mm/dd)" << endl;
	cin>>fecha;

	fechas.setFecha(fecha);

	fechas.fechas();
};